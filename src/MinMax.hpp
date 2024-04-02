#ifndef MINMAX_HPP
#define MINMAX_HPP
#include <vector>

using namespace std;

class MinMax{
public:
    MinMax();
    void MinMax1(vector<int> &vetor, int Max, int Min ); // feito
    void MinMax2(vector<int> &vetor, int max, int min); // feito
    void MinMax3(vector<int> &vetor, int max, int min, int tam); // feito
    void Preenche_Vetor(vector<int> &vetor, int tamanho, int max, int min); // feito
    void MedirTempoMinMax1(vector <int> &vetor);
    void MedirTempoMinMax2(vector <int> &vetor);
    void MedirTempoMinMax3(vector <int> &vetor);
    void PrintarMinMaxOrdenado(vector<int> &vetor);
    void PrintarMinMax(vector<int> &vetor);
    void ColocarDadosArquivo();
};



#endif