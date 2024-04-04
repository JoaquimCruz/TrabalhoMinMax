#ifndef MINMAX_HPP
#define MINMAX_HPP
#include <vector>

using namespace std;

class MinMax{
public:
    MinMax();
    void MinMax1(vector<int> &vetor, int Max, int Min ); 
    void MinMax2(vector<int> &vetor, int max, int min); 
    void MinMax3(vector<int> &vetor, int max, int min, int tam); 
    void Preenche_Vetor(vector<int> &vetor, int tamanho, int max, int min);
    void MedirTempoMinMax1(vector <int> &vetor);
    void MedirTempoMinMax2(vector <int> &vetor);
    void MedirTempoMinMax3(vector <int> &vetor);
    void PrintarMinMaxOrdenado(vector<int> &vetor);
    void PrintarMinMaxAleatorio(vector<int> &vetor);
    void LimparDadosArquivo();

    //Ver como eu vou fazer a média.
    // ver o CodeData para tentar plotar mais de um gráfico 
};



#endif