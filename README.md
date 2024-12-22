###### Explicação do Código unidades_tempo

1. **Inclusão da Biblioteca**:
   
   ```
   #include <stdio.h>
   ```
   
   * A biblioteca `stdio.h` é incluída para permitir o uso de funções de entrada e saída, como `printf` (para exibir mensagens) e `scanf` (para ler entradas do usuário).

2. **Funções de Conversão de Tempo**:
   
   * As funções abaixo são responsáveis por realizar as conversões entre diferentes unidades de tempo:
     * **`segundos_para_minutos`**: Converte segundos para minutos, dividindo o valor de segundos por 60.
     * **`segundos_para_horas`**: Converte segundos para horas, dividindo o valor de segundos por 3600.
     * **`minutos_para_segundos`**: Converte minutos para segundos, multiplicando o valor de minutos por 60.
     * **`minutos_para_horas`**: Converte minutos para horas, dividindo o valor de minutos por 60.
     * **`horas_para_segundos`**: Converte horas para segundos, multiplicando o valor de horas por 3600.
     * **`horas_para_minutos`**: Converte horas para minutos, multiplicando o valor de horas por 60.

3. **Função `mostrar_menu`**:

```
void mostrar_menu() { 
    printf("Escolha a unidade de tempo que deseja converter:\n"); 
    printf("1. Segundos\n"); 
    printf("2. Minutos\n"); printf("3. Horas\n"); 
}
```

* Esta função exibe um menu com as opções de unidades de tempo para o usuário escolher. O menu apresenta três opções: Segundos, Minutos e Horas.
4. **Função `main`**:
   
   * **Declaração de Variáveis**:
     * `unidade_tempo`: Armazena a escolha da unidade de tempo que o usuário deseja converter (1 para segundos, 2 para minutos, 3 para horas).
     * `valor`: Armazena o valor de tempo que o usuário deseja converter.
   * **Chamada da Função `mostrar_menu`**: O programa exibe o menu de unidades de tempo.
   * **Leitura da Entrada do Usuário**:
     * O programa lê a opção escolhida pelo usuário usando `scanf` e verifica se a entrada foi válida.
   * **Validação da Opção**: O código verifica se a opção escolhida está entre 1 e 3. Se não estiver, o programa encerra com uma mensagem de erro.
   * **Leitura do Valor de Tempo**:
     * O programa lê o valor a ser convertido e valida a entrada.
   * **Realização das Conversões**:
     * Dependendo da opção escolhida pelo usuário, o programa executa as conversões para as outras unidades de tempo:
       * Se a opção for 1 (Segundos), converte para minutos e horas.
       * Se a opção for 2 (Minutos), converte para segundos e horas.
       * Se a opção for 3 (Horas), converte para segundos e minutos.
   * O programa exibe os resultados das conversões correspondentes.

5. **Resultado das Conversões**:
   
   * **Segundos para Minutos**: Calculado dividindo os segundos por 60.
   * **Segundos para Horas**: Calculado dividindo os segundos por 3600.
   * **Minutos para Segundos**: Calculado multiplicando os minutos por 60.
   * **Minutos para Horas**: Calculado dividindo os minutos por 60.
   * **Horas para Segundos**: Calculado multiplicando as horas por 3600.
   * **Horas para Minutos**: Calculado multiplicando as horas por 60.

### Compilação e Execução do Programa

1. **Compilação**:Para compilar o código, use o comando abaixo no terminal:

```
gcc conversao_tempo.c -o conversao_tempo
```

2.  **Execução**:Após compilar, execute o programa com o comando:

```
./conversao_tempo
```



O programa pedirá para você escolher a unidade de tempo e inserir um valor para ser convertido, e exibirá os resultados das conversões.







###### Explicação do Código conversao_tempo

1. **Inclusão da Biblioteca**:

```
#include <stdio.h>
```

* A biblioteca `stdio.h` é incluída para permitir o uso de funções de entrada e saída, como `printf` (para exibir mensagens) e `scanf` (para ler entradas do usuário).
2. **Funções de Conversão de Tempo**:
* As funções abaixo são responsáveis por realizar as conversões entre diferentes unidades de tempo:
  * **`segundos_para_minutos`**: Converte segundos para minutos, dividindo o valor de segundos por 60.
  * **`segundos_para_horas`**: Converte segundos para horas, dividindo o valor de segundos por 3600.
  * **`minutos_para_segundos`**: Converte minutos para segundos, multiplicando o valor de minutos por 60.
  * **`minutos_para_horas`**: Converte minutos para horas, dividindo o valor de minutos por 60.
  * **`horas_para_segundos`**: Converte horas para segundos, multiplicando o valor de horas por 3600.
  * **`horas_para_minutos`**: Converte horas para minutos, multiplicando o valor de horas por 60.
3. **Função `mostrar_menu`**:

```
void mostrar_menu() {     printf("Escolha a unidade de tempo que deseja converter:\n");     printf("1. Segundos\n");     printf("2. Minutos\n"); printf("3. Horas\n"); }
```

* Esta função exibe um menu com as opções de unidades de tempo para o usuário escolher. O menu apresenta três opções: Segundos, Minutos e Horas.
4. **Função `mostrar_menu_principal`**:

```
void mostrar_menu_principal() {
    printf("=================================================\n");
    printf("Escolha o tipo de conversão que deseja realizar:\n");
    printf("1. Conversão de Tempo\n");
    printf("2. Sair\n");
    printf("=================================================\n");
}
```

- A função `mostrar_menu_principal` exibe o menu principal onde o usuário pode escolher entre realizar uma conversão de tempo ou sair do programa.
5. **Função `main`**:
   A função `main` é responsável por orquestrar o fluxo do programa. Ela exibe os menus e permite que o usuário faça escolhas.
* **Declaração de Variáveis**:
  
  * `opcao_principal`: Armazena a escolha do usuário no menu principal (1 para conversão de tempo, 2 para sair).
  * `unidade_tempo`: Armazena a escolha do usuário sobre qual unidade de tempo deseja converter.
  * `valor`: Armazena o valor de tempo que o usuário deseja converter.

* **Exibição dos Menus**: O programa exibe o menu principal e o menu de conversão de tempo com a função `mostrar_menu_principal` e `mostrar_menu`, respectivamente.

* **Leitura da Entrada do Usuário**: O programa lê as opções de menu e o valor a ser convertido, verificando se a entrada é válida.

* **Realização das Conversões**: Dependendo da escolha do usuário no menu de conversão, o programa realiza a conversão do valor inserido e exibe os resultados:
  
  * Se a unidade escolhida for "Segundos", o programa converte para minutos e horas.
  * Se a unidade escolhida for "Minutos", o programa converte para segundos e horas.
  * Se a unidade escolhida for "Horas", o programa converte para segundos e minutos.

6.**Resultado das Conversões**:

* **Segundos para Minutos**: Calculado dividindo os segundos por 60.
* **Segundos para Horas**: Calculado dividindo os segundos por 3600.
* **Minutos para Segundos**: Calculado multiplicando os minutos por 60.
* **Minutos para Horas**: Calculado dividindo os minutos por 60.
* **Horas para Segundos**: Calculado multiplicando as horas por 3600.
* **Horas para Minutos**: Calculado multiplicando as horas por 60.

### Compilação e Execução do Programa

1. **Compilação**:Para compilar o código, use o comando abaixo no terminal:
   
   ```
    gcc conversor_unidades.c -o conversao_tempo
   ```

2. **Execução**:Após compilar, execute o programa com o comando:
   
   ```
   ./conversor_unidades
   ```
   
   

O programa pedirá para você escolher o tipo de conversor de unidades, e exibirá os resultados das conversões.
