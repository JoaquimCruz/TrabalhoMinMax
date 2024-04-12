# Análise Assintótica de Algoritmos de Busca em Vetor

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

O trabalho tem como finalidade a implementação de 3 algoritmos de busca em vetor apresentados em sala: MinMax1, MinMax2, MinMax3. O principal objetivo com a implementação dos 3 algorítmos de procura é analisar, por meio do calculo do tempo de execução, qual deles possui melhor desempenho mediante a diferentes tamanhos de vetores. Diante disso, fora utilizados 4 vetores de tamanhos: 1000, 10.000, 100.000 e 500.000 posições. Ao decorrer do READ.me serão apresentados gráficos que exemplificaram o tempo de execução das funções, que facilitarão na compreensão da teoria assintótica.

## Código

O código do trabalho é dividido em 3 arquivos: MinMax.hpp, MinMax.cpp e Main.cpp. Ademais, foram utilizados um arquivo que armazena o script da ferramenta Gnuplot - que plotará os gráficos analisados- e 6 arquivos .csv.

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
- Random: A biblioteca Random foi utlizada para preencher os vetores com valores aleatórios  que variam de 0 a 1000;
- Algorithm: A biblioteca Algorithm foi utilizada por meio da função sort, que foi utilizada para ordenar os vetores de maneira crescente e decrescente.
- Fstream: A biblioteca Fstream foi utilizada para fazer manipulações nos arquivos csv.
</p>

Para implentação do código, foram utilizadas 3 funções de busca já pré-definidas em sala. Cada algorítmo busca o menor e o maior valor dentro de um vetor. Cada função busca de maneira diferente os dados dentro do vetor, tendo assim tempos diferentes de execução e diferentes custos computacionais para fazer tal processo. 
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/d91e6a2d-641e-4e0e-afc1-a7a8a9b7f1fd"/> 
</p>

</p>
<h1 align="justify"/> Algoritmo MinMax1 </h1>
</p>
<p align="justify"> 
</p>
O primeiro algoritmo de busca é implementado utilizando um loop de repetição For, que percorre todas as posições do vetor. Dentro do loop for são utilizadas duas estruturas condicionais IF, o primeiro para verificar se o elemento analisado é o maior do vetor, e o segundo para verificar se o elemento analisado é o menor do vetor. Assim, pela utilização das duas estruturas condicionais dentro do For, o algorítmo MinMax1 tem custo computacional de 2n, sendo "n" o tamanho do vetor analisado. Esse custo representa que para cada vetor de tamanho "n", serão feitas duas verificações condicionais para ver se é o valor máximo/mínimo. Dessa maneira, de "n", o custo computacional passa a ser "2n". Portanto, a complexidade assintótica dessa função é O(n), onde "n" é o tamanho do vetor. Portanto, ele possui o mesmo custo computacional para todos os casos ( melhor, caso médio, e pior caso).
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/ba649096-6fff-4c4e-ab63-cc1b90e4f205"/> 
</p>

<h1 align="justify"/> Algoritmo MinMax2 </h1>
</p>
<p align="justify"> 
</p>
O segundo algorítmo de busca é implementado utilizando um loop de repetição For, que percorre todas as posições do vetor. Dentro do loop for é utlizado uma estrutura condicional if e uma estrutura condicional else-if, para verificar se o valor analisado é o valor máximo do vetor, ou o mínimo. Desse modo, pela utilização do else-if, o custo computacional da função irá variar de acordo com o caso (melhor, caso médio, pior caso).
</p>

- Para o melhor caso, o custo computacional será de "n", ou seja, a complexidade assintótica dessa função será O(n), onde n é o tamanho do vetor. Isso ocorre devido ao fato de que no melhor caso apenas 1 das estruturas condicionais será ativada, sendo seu custo computacional "n" referente à ela. Esse fenômeno acontecerá quando o vetor tiver ordenado crescentemente.
- Para o caso médio, o custo computacional será de (3n/2). Isso ocorrerá devido ao fato de que no caso médio é considerado que todos os valores "n" passem pela consição if, e que apenas metade dos valores passem pelo else-if "n/2". Assim, fazendo a soma dos termos "n" + "n/2" ficaremos com um algorítmo com custo computacional 3n/2, sendo 3/2 uma costante que pode ser desconsiderada por ser insignificante dependendo do tamanho do vetor analisado.
- Para o pior caso, o custo computacional será de "2n". Isso ocorrerá devido ao fato de que é considerado que todos os valores passarão pela condição if e pela condição else-if, ou seja, o valor "n" do vetor será multiplicado por 2.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/0b1aa36a-a614-40ca-8221-e2cd6cb0d6e2"/> 
</p>
<h1 align="justify"/> Algoritmo MinMax3 </h1>
</p>

O terceiro algoritmo de busca é implementado utilizando primeiramente 2 blocos de if-else para fazer atribuições à posições do vetor e para variáveis auxiliares. Após esses blocos, é utilizado um loop de repetição While para percorrer o vetor, começando o loop pela segunda posição. Dentro do loop de repetição é utilizado uma estrutura if-else principal, tendo dentro do if, duas estruturas if para a verificação dos possíveis valores máximos e mínimos do vetor. A estrutura dentro do Else se assemelha ao if, contendo dois ifs para a verificação dos possíveis valores máximos e mínimos do vetor.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/fb58ea79-90bf-44fe-b7ef-dd1a17d37a29"/> 
</p>

Analisando o código, podemos concluir que os elementos são analisados em pares, dessa forma o custo computacional é inicialmente reduzido para (n/2). Seguindo o código, caso os valores analisados entrem dentro do primeiro if, o seu custo será reduzido para "n/2", pois esses elementos, por terem entrado no if, não entrarão no else. Seguindo o mesmo raciocínio, o custo será reduzido para "n/2" caso entrem no else. Portanto, fazendo a soma, (n+n+n)/2 = 3n/2 de custo computacional, podendo desprezar novamente a constante "-2" que se torna insignificante para análise assintótica de vetores grandes. O algoritmo possui o mesmo custo computacional para todos os casos (melhor, caso médio e pior caso).

<h1 align="center"/> Resultados </h1>
</p>
<p align="justify"> 
</p>

A parte gráfica do trabalho foi feita utilizando a ferramenta Gnuplot - um programa de linhas de comando que pode plotar os gráficos de funções matemáticas em duas ou três dimensões, e outros conjuntos de dados. Para plotar os gráficos, foi utlizado um script que está dentro da pasta resultados, no arquivo denominado "CodeData.p". Ademais, para criar os gráficos foram utilizados dados gerados pelo programa, que foram armazenados nos 6 arquivos.csv. Tais arquivos possuem diferentes divisões. 
</p>
- Os arquivos ResultadosMinMax são preenchidos a cada execução do código. Eles são preenchidos por meio de uma função que joga os valores para dentro do arquivo.
- Os arquivos ResultadosMediasMinMax são preenchidos a mão após a execução do código 10 vezes, e representam as médias de tempo de execução dos algorítmos de maneira desordenada, ordenada crescentemente e ordenada decrescentemente.

Os arquivos.csv possuem a seguinte estrutura: As colunas de valor **ímpar** representam o tamanho do vetor, e as colunas de valor **par** representam os tempos de execução. 
</p>
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/1e339f55-1aed-42a7-a113-32e4d9d11243" width = "500px" /> 
</p>

<h1 align="justify"/> Gráficos MinMax1 </h1>
</p>
O algoritimo MinMax1 por ser linear e ter o mesmo custo computacional para todos os casos, possui seu gráfico representado por uma reta de crescimento linear ao tamanho do vetor. Para a plotagem do gráfico, foram considerads os 4 vetores de tamanhos (1000, 10.000, 100.000 e 500.000), e das 3 formas citadas anteriormente (aleatório, ordenado crescentemente e ordenado decrescente). O primeiro gráfico representa o algorítimo MinMax1 executado apenas 1 vez seguindo os critérios acima. Nele podemos perceber o comportamento linear da função, sendo quase semelhante para as diferentes formas do vetor e para seus diferentes tamanhos.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/1c7a6b20-85f8-48fc-8982-896b1271ac0b" width="700px"/> 
</p>

Para o gráfico da média de 10 execuções do código, temos que o comportamento do gráfico continua tendo um crescimento linear, sendo quase semelhante para as diferentes formas de vetor e para seus diferentes tamanhos.
Para as médias, foram feitos 2 testes.  O gráfico da esquerda representa a média dos valores de 10 execuções, em que cada uma delas o vetor é preenchido com valores diferentes de 0 a 1000. Já o gráfico da direita representa 10 execuções do código com vetores preenchidos com o mesmo valor em cada execução. 
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/67c9a3a6-abf2-4617-8924-6325e1bc4d16" width="400px"/> 
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/8e33dc30-7ec0-4b2d-8f33-00ba3a910439" width="400px"/> 
</p>
Nota-se que para o valor inicial "n0" ambos os gráficos crescem de maneira linear, mantendo um mesmo padrão para os 3 tipos de vetor. Ademais, a proximidade das linhas comprovam que para o melhor caso, para o caso médio e para o pior caso, o algorítimo MinMax1 possui o mesmo custo computacional de 2n.
</p>
<h1 align="justify"/> Gráficos MinMax2 </h1>
</p>




O algoritmo MinMax2, mesmo tendo diferentes custos computacionais para o melhor, caso médio e pior caso, manteve um crescimento retiníneo quando aumentamos o tamanho do vetor. Ademais, não obteve diferença significativa quando analisamos as 3 diferentes ordenações dos vetores (desordenados, ordenados crescentimente e ordenados decrescentemente). 
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/d748277a-00ba-4705-826f-3db27db7f243" width="700px"/> 
</p>
De mesmo modo, o gráfico das médias apresenta comportamento linear. Para a análise das médias, foram feitos 2 testes diferentes. O gráfico da esquerda representa a média dos valores de 10 execuções, em que cada uma delas o vetor é preenchido com valores diferentes de 0 a 1000. Nele, podemos perceber o ocmportamente linear e a proximidade das linhas que representam o tipo de ordenação do vetor, sendo que em determinado ponto do gráfico, as linhas que representam o vetor ordenado se sobrepõem. Já o segundo gráfico representa a médias dos valores de 10 execuções, em que o vetor é preenchido com os mesmos valores em todas as execuções. Assim, por conta disso, podemos perceber uma diferença no comportamente no gráfico. Nele, o comportamente continua linear, porém a proximidade das linhas é menor, com o vetor desornenado gastando mais tempo de execução. 
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/9a80b32d-c7bb-4320-8711-9114056cade6" width="400px"/> 
 <img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/993d54d0-1b2d-45eb-87c8-49125d188695" width="400px"/>
</p>
</p>
<h1 align="justify"/> Gráficos MinMax3 </h1>
</p>

O algorítimo MinMax3 possui uma peculiaridade no comportamento gráfico antes não vista nos dois algorítimos antes analisados. A linha que representa o vetor desordenado destoa de maneira negativa das linhas do vetor ordenado, sendo a que mais gasta tempo para ser executada dentre todas as variações de todos MinMax. Esse comportamento anômalo não é justificado assintóticamente pelo custo computacional do algorítimo, pois ele tem o mesmo custo para todos os casos(pior caso, melhor caso e caso médio). Entretanto, mesmo demorando mais tempo a ser executado, o vetor desordenado ainda segue um crescimento retilíneo junto ao tamanho "n" do vetor. 
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/f3b9ddff-bf84-4276-9c89-c756ce1051f0" width="700px"/> 
</p>
Para o gráfico das médias, foram realizados 2 testes. O gráfico da esquerda representa a média dos valores de 10 execuções, em que cada uma delas o vetor é preenchido com valores diferentes de 0 a 1000. Nele, de mesmo modo ao gráfico acima, o Algorítimo MinMax3 para o vetor desordenado se distoa muito em relação aos vetores ordenados. Entretanto, para o segundo caso, em que o vetor se mantem preenchido com o mesmo valor para todas as 10 execuções, o Algorítimo MinMax3 para o vetor desordenado tem uma considerável melhora em relação ao tempo de execução. Mas porquê isso acontece? Ao criar um vetor de Inteiros por exemplo, ocorrerá uma alocação na memória do tamanho desse vetor. A título de exemplo, ao se criar um vetor de inteiros de 100 posições, é armazenado na memória o tamanho desse vetor, e em cada posição cabe um valor inteiro de tamanho máximo = 2³²-1. Assim, em teoria, os valores do vetor não afetariam ao percorrer cada posição, desde que eles estejam dentro do valor máximo de um inteiro. Porém, quando analisamos mais afundo, o processo de codificação de números para binaŕio é diferente de acordo com o tamanho do inteiro. Para codificar o número 100 para binário, o processador gasta uma quantidade "x" de tempo e, no mínimo 7 instruções Assembly. Já para codificar o número 500, o processador gasta uma quantidade maior "x" de tempo e, no mínino 9 intruções Assembly (Na análise das instruções dos exemplos foi considerado que cada instrução Assembly representa uma operação em 1 bit). Desse modo, os valores com que os vetores estavam preenchidos alteraram o tempo de execução do código. Portanto, como foi utilizado o vetor preenchido com os mesmos valores nas 10 execuções, o tempo de execução da MinMax3 para o vetor desordenado caiu significativamente, e se equiparou ao tempo de execução dos vetores ordenados. Dessa maneira, o comportamento do segundo gráfico representa melhor assintoticamente a função MinMax3, considerando que ela tem o mesmo custo computacional para o melhor, pior e caso médio.
</p>
<p align="center">
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/51387809-b7b7-4c7b-b605-baedf15c80ae" width="400px"/> 
<img src="https://github.com/JoaquimCruz/TrabalhoMinMax/assets/162636656/6c24add9-9a23-44c2-9160-e6f7a61c6588" width="400px"/> 

</p>

<h1 align="center"/> Conclusão </h1>
</p>
<p align="justify"> 
</p>
Apoś as análises dos gráficos, pode-se concluir que:
</p>

- Para vetores Aleatórios: Para vetores aleatórios o algorítimo MinMax1 possui o melhor e mais constante desempenho;
- Para vetores Ordenados: Para vetores ordenados, seja decrescentemente ou crescentemente, o algorítimo MinMax3 possui o melhor desempenho;
- No geral, o algoritmo MinMax3 possui a maior constância, quando analisado os melhores, os casos médios e os piores casos. Ademais, possui a melhor média global com os 3 tipos de ordenação do vetor (crescente, decrescente e desordenado).



# Compilação e Execução

O código que implementa os algorítmos de busca em vetor disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |






























