#include <stdio.h>
#include <assert.h>

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

// Função para mostrar o menu principal
void mostrar_menu_principal() {
    printf("=================================================\n");
    printf("Escolha o tipo de conversão que deseja realizar:\n");
    printf("1. Conversão de Tempo\n");
    printf("2. Sair\n");
    printf("=================================================\n");
}

// Função para testar as conversões de tempo
void testar_conversao() {
    // Testando as conversões
    assert(segundos_para_minutos(60) == 1.0);
    assert(segundos_para_horas(3600) == 1.0);
    assert(minutos_para_segundos(1) == 60.0);
    assert(minutos_para_horas(60) == 1.0);
    assert(horas_para_segundos(1) == 3600.0);
    assert(horas_para_minutos(1) == 60.0);

    printf("Testes de conversão passaram com sucesso!\n");
}

// Função para simular a interação com o menu principal
void testar_menu_principal(int opcao) {
    if (opcao == 1) {
        printf("Opção 1: Conversão de Tempo selecionada.\n");
    } else if (opcao == 2) {
        printf("Opção 2: Sair selecionado.\n");
    } else {
        printf("Opção inválida!\n");
    }
}

// Função que simula o fluxo de conversão baseado no menu de unidade de tempo
void testar_menu_unidade(int opcao_unidade, float valor) {
    if (opcao_unidade == 1) {
        printf("Conversão de %.2f segundos:\n", valor);
        printf("%.2f segundos equivalem a %.2f minutos.\n", valor, segundos_para_minutos(valor));
        printf("%.2f segundos equivalem a %.2f horas.\n", valor, segundos_para_horas(valor));
    } else if (opcao_unidade == 2) {
        printf("Conversão de %.2f minutos:\n", valor);
        printf("%.2f minutos equivalem a %.2f segundos.\n", valor, minutos_para_segundos(valor));
        printf("%.2f minutos equivalem a %.2f horas.\n", valor, minutos_para_horas(valor));
    } else if (opcao_unidade == 3) {
        printf("Conversão de %.2f horas:\n", valor);
        printf("%.2f horas equivalem a %.2f segundos.\n", valor, horas_para_segundos(valor));
        printf("%.2f horas equivalem a %.2f minutos.\n", valor, horas_para_minutos(valor));
    } else {
        printf("Opção de unidade inválida!\n");
    }
}

int main() {
    // Simulando os testes do código
    printf("Iniciando testes...\n");
    
    // Testes das funções de conversão
    testar_conversao();
    
    // Testes do menu principal
    testar_menu_principal(1);  // Simula a escolha de "Conversão de Tempo"
    testar_menu_principal(2);  // Simula a escolha de "Sair"
    testar_menu_principal(3);  // Testa uma opção inválida

    // Testes do menu de unidades de tempo e suas conversões
    testar_menu_unidade(1, 60);  // Testa a conversão de 60 segundos
    testar_menu_unidade(2, 60);  // Testa a conversão de 60 minutos
    testar_menu_unidade(3, 1);   // Testa a conversão de 1 hora
    testar_menu_unidade(4, 100); // Testa uma unidade inválida
    
    printf("Todos os testes passaram com sucesso!\n");

    // Aqui o código de interação normal com o usuário pode continuar
    int opcao_principal;
    do {
        // Exibe o menu principal
        mostrar_menu_principal();
        printf("Digite sua opção: ");
        if (scanf("%d", &opcao_principal) != 1) {
            printf("Erro na entrada! Tente novamente.\n");
            return 1; // Encerra o programa em caso de erro na entrada
        }

        switch (opcao_principal) {
            case 1: { // Conversão de tempo
                int unidade_tempo;
                float valor;

                // Exibe o menu de escolha da unidade
                mostrar_menu();
                printf("Digite sua opção (1/2/3): ");
                if (scanf("%d", &unidade_tempo) != 1) { // Verifica se a entrada foi lida corretamente
                    printf("Erro na entrada! Tente novamente.\n");
                    return 1; // Encerra o programa em caso de erro na entrada
                }

                // Verifica se a escolha é válida
                if (unidade_tempo < 1 || unidade_tempo > 3) {
                    printf("Opção inválida! Tente novamente.\n");
                    continue; // Volta para o início do menu principal
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

                break;
            }

            case 2:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao_principal != 2);

    return 0;
}
