#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

// Função para mostrar o menu de opções
void mostrar_menu() {
    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
}

int main() {
    int opcao;
    float tempo, resultado;

    mostrar_menu(); // Mostra o menu para o usuário
    printf("Digite sua opção (1/2/3): ");
    scanf("%d", &opcao); // Lê a opção do usuário

    // Processa a entrada de acordo com a opção selecionada
    switch (opcao) {
        case 1: // Se a opção for 1 - Segundos
            printf("Digite o tempo em segundos: ");
            scanf("%f", &tempo);
            resultado = tempo / 60; // Converte segundos para minutos
            printf("%.2f segundos equivalem a %.2f minutos.\n", tempo, resultado);
            resultado = tempo / 3600; // Converte segundos para horas
            printf("%.2f segundos equivalem a %.2f horas.\n", tempo, resultado);
            break;

        case 2: // Se a opção for 2 - Minutos
            printf("Digite o tempo em minutos: ");
            scanf("%f", &tempo);
            resultado = tempo * 60; // Converte minutos para segundos
            printf("%.2f minutos equivalem a %.2f segundos.\n", tempo, resultado);
            resultado = tempo / 60; // Converte minutos para horas
            printf("%.2f minutos equivalem a %.2f horas.\n", tempo, resultado);
            break;

        case 3: // Se a opção for 3 - Horas
            printf("Digite o tempo em horas: ");
            scanf("%f", &tempo);
            resultado = tempo * 3600; // Converte horas para segundos
            printf("%.2f horas equivalem a %.2f segundos.\n", tempo, resultado);
            resultado = tempo * 60; // Converte horas para minutos
            printf("%.2f horas equivalem a %.2f minutos.\n", tempo, resultado);
            break;

        default: // Se a opção for inválida
            printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
            break;
    }

    return 0; // Indica que o programa terminou com sucesso
}
