#include "MinMax.hpp"

int main(){
    
    MinMax aux;
    
    vector<int> vetor1, vetor2, vetor3, vetor4;
    
    aux.Preenche_Vetor(vetor1, 1000, 0, 1000);
    aux.Preenche_Vetor(vetor2, 10000, 0, 1000);
    aux.Preenche_Vetor(vetor3,100000, 0, 1000);
    aux.Preenche_Vetor(vetor4, 500000, 0, 1000);

    aux.PrintarMinMaxAleatorio(vetor1);
    aux.PrintarMinMaxOrdenado(vetor1);

    aux.PrintarMinMaxAleatorio(vetor2);
    aux.PrintarMinMaxOrdenado(vetor2);
    
    aux.PrintarMinMaxAleatorio(vetor3);
    aux.PrintarMinMaxOrdenado(vetor3);
    
    aux.PrintarMinMaxAleatorio(vetor4);
    aux.PrintarMinMaxOrdenado(vetor4);
    


    return 0;
}