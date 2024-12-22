<h2>🔥 Embarca Tech – Programa Conversor de Unidades em Linguagem C</h2>
<p>Repositório destinado à criação de um Programa Conversor de Unidades em Linguagem C. O objetivo deste projeto é desenvolver um programa que permita a conversão entre diversas unidades de medida, como comprimento, peso, temperatura, entre outras, utilizando a linguagem C.</p>

<h2>Funções e Membros</h2>
<table border="1">
    <tr>
        <td>Líder: </td>
        <td>Mariana Barretto</td>
    </tr>
    <tr>
        <td>1. Unidades de comprimento (metro, centímetro, milímetro): </td>
        <td>Alexandro Soares</td>
    </tr>
    <tr>
        <td>2. Unidades de massa (quilograma, grama, tonelada): </td>
        <td>Israel Falcão</td>
    </tr>
    <tr>
        <td>3. Unidades de volume (litro, mililitro, metros cúbicos): </td>
        <td>Lucas Moreira</td>
    </tr>
    <tr>
        <td>4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin): </td>
        <td>Helen Santos</td>
    </tr>
    <tr>
        <td>5. Unidades de velocidade (km/h, m/s, mph): </td>
        <td>Kauan Farias</td>
    </tr>
    <tr>
        <td>6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp): </td>
        <td>Edna Rodrigues</td>
    </tr>
    <tr>
        <td>7. Unidades de área (metro quadrado, centímetro quadrado): </td>
        <td>Ylo Bittencourt</td>
    </tr>
    <tr>
        <td>8. Unidades de tempo (segundos, minutos, horas): </td>
        <td>Mariana Barretto</td>
    </tr>
    <tr>
        <td>9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB): </td>
        <td>Daniel Santos</td>
    </tr>
    <tr>
        <td>10. Interface de usuário: </td>
        <td>Mariana Barretto</td>
    </tr>
</table>

<h2>🖥️ Tecnologias Utilizadas</h2>
<ul>
    <li><h4>📌 C</h4></li>
    <li><h4>📌 VSCode</h4></li>
    <li><h4>📌 HTML</h4></li>
</ul>

<h2>📝 Explicação do Código conversor_unidades</h2>

<h3>1. Inclusão da Biblioteca</h3>
<pre><code>#include &lt;stdio.h&gt;</code></pre>
<p>A biblioteca <code>stdio.h</code> é incluída para permitir o uso de funções de entrada e saída, como <code>printf</code> (para exibir mensagens) e <code>scanf</code> (para ler entradas do usuário).</p>

<h3>2. Funções de Conversão de Tempo</h3>
<p>As funções abaixo são responsáveis por realizar as conversões entre diferentes unidades de tempo:</p>
<ul>
    <li><strong>segundos_para_minutos</strong>: Converte segundos para minutos, dividindo o valor de segundos por 60.</li>
    <li><strong>segundos_para_horas</strong>: Converte segundos para horas, dividindo o valor de segundos por 3600.</li>
    <li><strong>minutos_para_segundos</strong>: Converte minutos para segundos, multiplicando o valor de minutos por 60.</li>
    <li><strong>minutos_para_horas</strong>: Converte minutos para horas, dividindo o valor de minutos por 60.</li>
    <li><strong>horas_para_segundos</strong>: Converte horas para segundos, multiplicando o valor de horas por 3600.</li>
    <li><strong>horas_para_minutos</strong>: Converte horas para minutos, multiplicando o valor de horas por 60.</li>
</ul>

<h3>3. Função <code>mostrar_menu</code></h3>
<pre><code>void mostrar_menu() {
    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
}</code></pre>
<p>Esta função exibe um menu com as opções de unidades de tempo para o usuário escolher. O menu apresenta três opções: Segundos, Minutos e Horas.</p>

<h3>4. Função <code>mostrar_menu_principal</code></h3>
<pre><code>void mostrar_menu_principal() {
    printf("=================================================\n");
    printf("Escolha o tipo de conversão que deseja realizar:\n");
    printf("1. Conversão de Tempo\n");
    printf("2. Sair\n");
    printf("=================================================\n");
}</code></pre>
<p>A função <code>mostrar_menu_principal</code> exibe o menu principal onde o usuário pode escolher entre realizar uma conversão de tempo ou sair do programa.</p>

<h3>5. Função <code>main</code></h3>
<p>A função <code>main</code> é responsável por orquestrar o fluxo do programa. Ela exibe os menus e permite que o usuário faça escolhas.</p>
<ul>
    <li><strong>Declaração de Variáveis</strong>:<br>
        <code>opcao_principal</code>: Armazena a escolha do usuário no menu principal (1 para conversão de tempo, 2 para sair).<br>
        <code>unidade_tempo</code>: Armazena a escolha do usuário sobre qual unidade de tempo deseja converter.<br>
        <code>valor</code>: Armazena o valor de tempo que o usuário deseja converter.
    </li>
    <li><strong>Exibição dos Menus</strong>: O programa exibe o menu principal e o menu de conversão de tempo com a função <code>mostrar_menu_principal</code> e <code>mostrar_menu</code>, respectivamente.</li>
    <li><strong>Leitura da Entrada do Usuário</strong>: O programa lê as opções de menu e o valor a ser convertido, verificando se a entrada é válida.</li>
    <li><strong>Realização das Conversões</strong>: Dependendo da escolha do usuário no menu de conversão, o programa realiza a conversão do valor inserido e exibe os resultados:<br>
        Se a unidade escolhida for "Segundos", o programa converte para minutos e horas.<br>
        Se a unidade escolhida for "Minutos", o programa converte para segundos e horas.<br>
        Se a unidade escolhida for "Horas", o programa converte para segundos e minutos.
    </li>
</ul>

<h3>6. Resultado das Conversões</h3>
<ul>
    <li><strong>Segundos para Minutos</strong>: Calculado dividindo os segundos por 60.</li>
    <li><strong>Segundos para Horas</strong>: Calculado dividindo os segundos por 3600.</li>
    <li><strong>Minutos para Segundos</strong>: Calculado multiplicando os minutos por 60.</li>
    <li><strong>Minutos para Horas</strong>: Calculado dividindo os minutos por 60.</li>
    <li><strong>Horas para Segundos</strong>: Calculado multiplicando as horas por 3600.</li>
    <li><strong>Horas para Minutos</strong>: Calculado multiplicando as horas por 60.</li>
</ul>

<h2>Compilação e Execução do Programa</h2>
<p>1. <strong>Compilação</strong>: Para compilar o código, use o comando abaixo no terminal:</p>
<pre><code>gcc conversor_unidades.c -o conversor_unidades</code></pre>

<p>2. <strong>Execução</strong>: Após compilar, execute o programa com o comando:</p>
<pre><code>./conversor_unidades</code></pre>

<p>O programa pedirá para você escolher o tipo de conversor de unidades, e exibirá os resultados das conversões.</p>
