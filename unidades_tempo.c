#include <stdio.h>

// Funções de conversão de tempo
float segundos_para_minutos(float segundos) {
    return segundos / 60;
}

float segundos_para_horas(float segundos) {
    return segundos / 3600;
}

float minutos_para_segundos(float minutos) {
    return minutos * 60;
}

float minutos_para_horas(float minutos) {
    return minutos / 60;
}

float horas_para_segundos(float horas) {
    return horas * 3600;
}

float horas_para_minutos(float horas) {
    return horas * 60;
}

// Função para mostrar o menu de escolha de unidade de tempo
void mostrar_menu() {
    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
}

int main() {
    int unidade_tempo; // Variável para armazenar a escolha da unidade de tempo
    float valor; // Variável para armazenar o valor a ser convertido

    // Exibe o menu de escolha da unidade
    mostrar_menu();
    printf("Digite sua opção (1/2/3): "); // Solicita a escolha da unidade
    if (scanf("%d", &unidade_tempo) != 1) { // Verifica se a entrada foi lida corretamente
        printf("Erro na entrada! Tente novamente.\n");
        return 1; // Encerra o programa em caso de erro na entrada
    }

    // Verifica se a escolha é válida
    if (unidade_tempo < 1 || unidade_tempo > 3) {
        printf("Opção inválida! O programa será encerrado.\n");
        return 1; // Encerra o programa caso a opção seja inválida
    }

    // Solicita o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    if (scanf("%f", &valor) != 1) { // Verifica se o valor foi lido corretamente
        printf("Erro na entrada do valor! Tente novamente.\n");
        return 1; // Encerra o programa em caso de erro na entrada do valor
    }

    // Realizando as conversões dependendo da unidade escolhida
    if (unidade_tempo == 1) { // Caso a unidade escolhida seja Segundos
        printf("\nResultados das conversões para %.2f segundos:\n", valor);
        printf("%.2f segundos equivalem a %.2f minutos.\n", valor, segundos_para_minutos(valor)); // Converte para minutos
        printf("%.2f segundos equivalem a %.2f horas.\n", valor, segundos_para_horas(valor));   // Converte para horas
    } else if (unidade_tempo == 2) { // Caso a unidade escolhida seja Minutos
        printf("\nResultados das conversões para %.2f minutos:\n", valor);
        printf("%.2f minutos equivalem a %.2f segundos.\n", valor, minutos_para_segundos(valor)); // Converte para segundos
        printf("%.2f minutos equivalem a %.2f horas.\n", valor, minutos_para_horas(valor));     // Converte para horas
    } else if (unidade_tempo == 3) { // Caso a unidade escolhida seja Horas
        printf("\nResultados das conversões para %.2f horas:\n", valor);
        printf("%.2f horas equivalem a %.2f segundos.\n", valor, horas_para_segundos(valor));   // Converte para segundos
        printf("%.2f horas equivalem a %.2f minutos.\n", valor, horas_para_minutos(valor));     // Converte para minutos
    }

    return 0; // Finaliza o programa
}
