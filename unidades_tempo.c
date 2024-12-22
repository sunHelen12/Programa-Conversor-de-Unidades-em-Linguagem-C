#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

// Função para mostrar o menu de opções
void mostrar_menu() {
    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
}

// Função para testar a conversão
void testar_conversao(int opcao, float tempo) {
    float resultado;

    // Processa a entrada de acordo com a opção selecionada
    switch (opcao) {
        case 1: // Se a opção for 1 - Segundos
            resultado = tempo / 60; // Converte segundos para minutos
            printf("%.2f segundos equivalem a %.2f minutos.\n", tempo, resultado);
            resultado = tempo / 3600; // Converte segundos para horas
            printf("%.2f segundos equivalem a %.2f horas.\n", tempo, resultado);
            break;

        case 2: // Se a opção for 2 - Minutos
            resultado = tempo * 60; // Converte minutos para segundos
            printf("%.2f minutos equivalem a %.2f segundos.\n", tempo, resultado);
            resultado = tempo / 60; // Converte minutos para horas
            printf("%.2f minutos equivalem a %.2f horas.\n", tempo, resultado);
            break;

        case 3: // Se a opção for 3 - Horas
            resultado = tempo * 3600; // Converte horas para segundos
            printf("%.2f horas equivalem a %.2f segundos.\n", tempo, resultado);
            resultado = tempo * 60; // Converte horas para minutos
            printf("%.2f horas equivalem a %.2f minutos.\n", tempo, resultado);
            break;

        default: // Se a opção for inválida
            printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
            break;
    }
}

int main() {
    // Teste 1: Converter 3600 segundos
    printf("Teste 1: Converter 3600 segundos\n");
    testar_conversao(1, 3600);  // Opção 1 - Segundos

    // Teste 2: Converter 60 minutos
    printf("\nTeste 2: Converter 60 minutos\n");
    testar_conversao(2, 60);    // Opção 2 - Minutos

    // Teste 3: Converter 2 horas
    printf("\nTeste 3: Converter 2 horas\n");
    testar_conversao(3, 2);     // Opção 3 - Horas

    return 0; // Indica que o programa terminou com sucesso
}
