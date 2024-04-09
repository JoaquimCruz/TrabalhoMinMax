# Análise Assintótica de Algorítmos de busca 

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">

## Resumo 

Este repositório armazena o código referente ao trabalho sobre algoritmos de busca em vetores, da disciplina Algorítmo e Estrutura de Dados (AEDS). 

## Objetivos

O trabalho tem como finalidade a implementação de 3 algorítimos de busca em vetor apresentados em sala: MinMax1, MinMax2, MinMax3. O principal objetivo com a implementação dos 3 algorítmos de procura é analisar, por meio do calculo do tempo de execução, qual deles possui melhor desempenho mediante a diferentes tamanhos de vetores. Diante disso, fora utilizados 4 vetores de tamanhos: 1000, 10.000, 100.000, 500.000 posições. Ao decorrer do READ.me serão apresentados gráficos que exemplificaram o tempo de execução das funções, e facilitarão na compreensão da teoria assintótica.

## Código

O código do trabalho é dividido em 3 arquivos: MinMax.hpp, MinMax.cpp e Main.cpp. Ademais, foram utilizados um arquivo que armazena o script da ferramenta Gnuplot - que plotará os gráficos analisados- e 7 arquivos .csv.

<h1 align="center"/> MinMax.hpp </h1>
</p>
<p align="justify"> 
</p>
O arquivo MinMax.hpp define a classe MinMax. Tal classe não possui atributos privados, porém possui os seguintes atributos públicos:
</p>

- void MinMax1(vector<int> &vetor, int Max, int Min ); 
- void MinMax2(vector<int> &vetor, int max, int min); 
- void MinMax3(vector<int> &vetor, int max, int min, int tam); 
- void Preenche_Vetor(vector<int> &vetor, int tamanho, int max, int min);
- void MedirTempoMinMax1(vector <int> &vetor);
- void MedirTempoMinMax2(vector <int> &vetor);
- void MedirTempoMinMax3(vector <int> &vetor);
- void PrintarMinMaxOrdenado(vector<int> &vetor);
- void PrintarMinMaxAleatorio(vector<int> &vetor);
- void LimparDadosArquivo();
</p>

<h1 align="center"/> MinMax.cpp </h1>
</p>
<p align="justify"> 
</p>


O arquivo MinMax.cpp implementa as funções definidas no arquivo MinMax.hpp. Para isso, foram utilizadas as seguintes bibliotecas:
- Chrono: A biblioteca Chrono foi utlizada para medir o tempo de execução de cada função MinMax (MinMax1, MinMax2, MinMax3);
- Random: A biblioteca Random foi utlizada para preencher os vetores com valores aleatórios que iam de 0 a 1000;
- Algorithm: A biblioteca Algorithm foi utliada por meio da função sort, que foi utlizada para ordenar os vetores de maneira crescente e decrescente.
- Fstream: A bibliotexa Fstream foi utilizada para fazer manipulações nos arquivos csv.
</p>

Para implentação do código, foram utilizadas 3 funções de busca já pré-definidas em sala. Cada algorítmo busca o menor e o maior valor dentro de um vetor. Cada função busca de maneira diferente os dados dentro do vetor, tendo assim tempos diferentes de execução e diferentes custos computacionais para fazer tal processo. 
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/d91e6a2d-641e-4e0e-afc1-a7a8a9b7f1fd"/> 
</p>

</p>
<h1 align="justify"/> Algorítimo MinMax1 </h1>
</p>
<p align="justify"> 
</p>
O primeiro algorítmo de busca é implementado utilizando um loop de repetição For, que percorre todas as posições do vetor. Dentro do loop for são ultizadas duas estruturas condicionais IF, o primeiro para verificar se o elemento analisado é o maior do vetor, e o segundo para verificar se o elemento analisado é o menor do vetor. Assim, pela utilização das duas estruturas condicionais dentro do For, o algorítmo MinMax1 tem custo computacional de 2n, sendo "n" o tamanho do vetor analisado. Esse custo representa que para cada vetor de tamanho "n", serão feitas duas verificações condicionais para ver se é o valor máximo/mínimo. Dessa maneira, de "n", o custo computacional passa a ser "2n". Portanto, a complexidade assintótica dessa função é O(n), onde "n" é o tamanho do vetor. Isso significa que o custo computacional aumenta linearmente com o tamanho do vetor.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/ba649096-6fff-4c4e-ab63-cc1b90e4f205"/> 
</p>

Por ser um algorítimo de crescimento linear, ele possui o mesmo custo computacional para todos os casos ( melhor, caso médio, e pior caso).
</p>
<h1 align="justify"/> Algorítimo MinMax2 </h1>
</p>
<p align="justify"> 
</p>
O segundo algorítmo de busca é implementado utilizando um loop de repetição For, que percorre todas as pocições do vetor. Dentro do loop for é utlizado uma estrutura condicional if e uma estrutura condicional if else, para verificar se o valor analisado é o valor máximo do vetor, ou o mínimo. Desse modo, pela utilização do else-if, o custo computacional da função irá variar de acordo com o caso (melhor, caso médio, pior caso).
</p>

- Para o melhor caso, o custo computacional será de "n", ou seja, a complexidade assintótica dessa função será O(n), onde n é o tamanho do vetor. Isso ocorre devido ao fato de que no melhor caso apenas 1 das estruturas condicionais será ativada, sendo seu custo computacional "n" referente à ela. Esse fenômeno acontecerá quando o vetor tiver ordenado crescentemente.
- Para o caso médio, o custo computacional será de (3n/2). Isso ocorrerá devido ao fato de que no caso médio é considerado de que todos os valores "n" passem pela consição if, e que apenas metade dos valores passem pelo else-if "n/2". Assim, fazendo a soma dos termos "n" + "n/2" ficaremos com um algorítmo com custo computacional 3n/2, sendo 3/2 uma costante que pode ser desconsiderada por ser insgnificante dependendo do tamanho do vetor analisado.
- Para o pior caso, o custo computacional será de "2n". Isso ocorrerá devido ao fato de que é considerado de que todos os valores passarão pela condição if e pela considção else if, ou seja, o valor "n" do vetor será multiplicado por 2.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/0b1aa36a-a614-40ca-8221-e2cd6cb0d6e2"/> 
</p>
<h1 align="justify"/> Algorítimo MinMax3 </h1>
</p>

O terceiro algorítimo de busca é implementado utilizando primeiramete 2 blocos de if-else para faze atribuições à posições do vetor e para variáveis auxiliares. Após esses blocos, é utilizado um loop de repetição While para percorrer o vetor, começando o loop pela segunda posição. Dentro do loop de repetição é utlizado uma estrutura if-else principal, tendo dentro do if, duas estruturas if para a verificação dos possíveis valores máximos e mínimos do vetor. E estrutura dentro do Else se assemelha ao if, contendo dois ifs para a verificação dos possíveis valores maximos e mínimos do vetor.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/fb58ea79-90bf-44fe-b7ef-dd1a17d37a29"/> 
</p>

Analisando o código, podemos concluir que os elementos são analisados em pares, dessa forma o custo computacional é inicialmente reduzido para (n/2). Seguindo o código, caso os valores analisados entrem dentro do primeiro if, o seu custo será reduzido para "n/2", pois esses elementos, por terem entrado no if, não entrarão no else. Seguindo o mesmo raciocínio, o custo será reduzido para "n/2" caso entrem no else. Portanto, fazendo a soma, (n+n+n)/2 = 3n/2 de custo computacional, podendo desprezar novamente a constante "-2" que se torna insignificante para análise assintótica de vetores grandes. O algorítmo possui o mesmo custo computacional para todos os casos (melhor, caso médio e pior caso), isso significa que o custo computacional aumenta linearmente com o tamanho do vetor.

<h1 align="center"/> Análise dos gráficos </h1>
</p>
<p align="justify"> 
</p>

A parte gráfica do trabalho foi feita utilizando a ferramenta Gnuplot - um programa de linha de comando que pode plotar os gráficos de funções matemáticas em duas ou três dimensões, e outros conjuntos de dados. Para plotar os gráficos, foi utlizado um script que está dentro da pasta resultados. Ademais, para criar os gráficos foram utilizados dados gerados pelo programa, que foram armazenados nos 7 arquivos.csv. Esses 7 arquivos possuem diferentes divisões. 
</p>
- Os arquivos **ResultadosMinMax** são preenchidos a cada execução do código e são plotados com o resultado de 1 execução do código. Eles são preenchidos por meio de uma função do código que joga os valores para dentro do arquivo.
- Os arquivos **ResultadosMediasMinMax** são preenchidos a mão após a execução do código 10 vezes, e representam as médias de tempo de execução dos algorítmos de maneira desordenada, ordenada crescentemente e ordenada decrescentemente.
- O arquivo **Data** é uma planilha no excel que contém os dados das 10 execuções para cada ordenamento do vetor e para cada um dos 3 algorítmos, bem como o cálculo das médias.

Os arquivos.csv possuem a seguinte estrutura: As colunas de valor **ímpar** representam o tamanho do vetor, e as colunas de valor **par** representam os tempos de execução. 

<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/bc32c3a3-0178-45f0-bffa-d29db5fb94b5"/> 
</p>
<h1 align="justify"/> Gráficos MinMax1 </h1>
</p>
O algorítimo MInMax1 por ser linear e ter o mesmo custo computacional para todos os casos, possui seu gráfico representado por uma reta de crescimento linear ao tamanho do vetor. Para a plotagem do gráfico, foram considerads os 4 vetores de tamanhos (1000, 10.000, 100.000 e 500.000), e das 3 formas citadas anteriormente (aleatório, ordenado crescentemente e ordenado decrescente). O primeiro gráfico representa o algorítimo MinMax1 executado apenas 1 vez seguindo os critérios acima. Nele podemos perceber o comportamento linear da função, sendo quase semelhante para as diferentes formas do vetor e para seus diferentes tamanhos.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/1c7a6b20-85f8-48fc-8982-896b1271ac0b" width="700px"/> 
</p>

Para o gráfico da média de 10 execuções do código, temos que o comportamento do gráfico continua sendo 

















