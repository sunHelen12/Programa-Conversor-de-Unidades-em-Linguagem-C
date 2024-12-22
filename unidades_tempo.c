#include <stdio.h> 


void mostrar_menu() {
    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
}

int main() {
    int opcao;
    float tempo, resultado;

    mostrar_menu(); 
    printf("Digite sua opção (1/2/3): ");
    scanf("%d", &opcao); 

   
    switch (opcao) {
        case 1: 
            printf("Digite o tempo em segundos: ");
            scanf("%f", &tempo);
            resultado = tempo / 60; 
            printf("%.2f segundos equivalem a %.2f minutos.\n", tempo, resultado);
            resultado = tempo / 3600; 
            printf("%.2f segundos equivalem a %.2f horas.\n", tempo, resultado);
            break;

        case 2: 
            printf("Digite o tempo em minutos: ");
            scanf("%f", &tempo);
            resultado = tempo * 60; 
            printf("%.2f minutos equivalem a %.2f segundos.\n", tempo, resultado);
            resultado = tempo / 60; 
            printf("%.2f minutos equivalem a %.2f horas.\n", tempo, resultado);
            break;

        case 3: 
            printf("Digite o tempo em horas: ");
            scanf("%f", &tempo);
            resultado = tempo * 3600; 
            printf("%.2f horas equivalem a %.2f segundos.\n", tempo, resultado);
            resultado = tempo * 60; 
            printf("%.2f horas equivalem a %.2f minutos.\n", tempo, resultado);
            break;

        default: 
            printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
            break;
    }

    return 0; 
}