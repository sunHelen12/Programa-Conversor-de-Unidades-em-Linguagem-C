# include <stdio.h>

float metrosParaCentimetros(float metros) {
    return metros * 10000; // 1 m² = 10,000 cm²
}

float centimetrosParaMetros(float centimetros) {
    return centimetros / 10000;
}

int main() {
    int op;
    float valor;
    char continuar;

    do {
        printf("-----------------------------\n");
        printf("1. Metros quadrados para Centímetros quadrados\n");
        printf("2. Centímetros quadrados para Metros quadrados\n");
        printf("-----------------------------\n");

        do {
            printf("Opção: ");
            scanf("%d", &op);
            if (op < 1 || op > 2) {
                printf("Opção inválida, por favor tente novamente.\n");
                printf("-----------------------------\n");
            }
        } while (op < 1 || op > 2);

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch(op) {
            case 1:
                printf("%.2f metro(s) quadrado(s) são %.2f centímetro(s) quadrado(s)\n", valor, metrosParaCentimetros(valor));
                break;
            case 2:
                printf("%.2f centímetro(s) quadrado(s) são %f metro(s) quadrado(s)\n", valor, centimetrosParaMetros(valor));
                break;
            default:
                printf("Opção inválida\n");
                break;
        }

        printf("-----------------------------\n");
        printf("Deseja fazer outra conversão? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
