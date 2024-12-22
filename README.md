### Explicação do Código

1. **Inclusão da Biblioteca**: `#include <stdio.h>` - Esta linha importa a biblioteca padrão que contém funções usadas para entrada e saída, como `printf` e `scanf`.

2. **Função `mostrar_menu`**:
   
   - Esta função exibe ao usuário quais unidades de tempo podem ser convertidas. Aqui o usuário pode escolher entre segundos, minutos e horas.

3. **Função `main`**:
   
   - Declaração de Variáveis:
     - `opcao`: armazena a escolha do usuário.
     - `tempo`: armazena o valor de tempo que o usuário deseja converter.
     - `resultado`: para armazenar o resultado da conversão.
   - O programa chama a função `mostrar_menu` para exibir as opções.
   - `scanf` é usado para ler a entrada do usuário, capturando qual opção deseja selecionar.

4. **Estrutura `switch`**:
   
   - Avalia a opção escolhida:
     - **Caso 1 (Segundos)**: Converte segundos para minutos e horas.
     - **Caso 2 (Minutos)**: Converte minutos para segundos e horas.
     - **Caso 3 (Horas)**: Converte horas para segundos e minutos.
     - **Caso default**: Notifica o usuário se a opção escolhida é inválida.

5. **Conversões**:
   
   - **Segundos para Minutos**: \(resultado = tempo / 60)
   - **Segundos para Horas**: \(resultado = tempo / 3600)
   - **Minutos para Segundos**: \(resultado = tempo * 60)
   - **Minutos para Horas**: \(resultado = tempo / 60)
   - **Horas para Segundos**: \(resultado = tempo * 3600\)
   - **Horas para Minutos**: \( resultado = tempo * 60\)

### Compilar e Executar o Programa

Para compilar e executar o programa, siga estes passos:

1. **Compile o código**:
   
   ```bash
   gcc conversao_tempo.c -o conversao_tempo
   
   ```


