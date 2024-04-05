#include "MinMax.hpp"
#include <iostream>
#include <chrono>
#include <random>
#include <algorithm>
#include <fstream>

using namespace std::chrono;


MinMax :: MinMax(){

}



void MinMax :: Preenche_Vetor(vector<int> &vetor, int tamanho, int min, int max){

    random_device rd;
    mt19937 gen(rd());

    
    
    uniform_int_distribution<> dis(min, max);
    
    
    for (int i = 0; i < tamanho; ++i) {
        vetor.push_back(dis(gen));
    }



}

void MinMax :: MinMax1(vector<int> &vetor, int max, int min){

    max = vetor[0], min = vetor[0];

    for (vector<int>::size_type i = 0; i < vetor.size(); ++i) {
        if (vetor[i] > max) {
            max = vetor[i];
        }
        if (vetor[i] < min) {
            min = vetor[i];
        }
}


}

void MinMax :: MinMax2(vector<int> &vetor, int max, int min){

    max = vetor[0], min = vetor[0];

    for(vector<int>::size_type i = 0; i < vetor.size(); ++i){
        
        if(vetor[i]> max){
            max = vetor[i];
        }else if(vetor[i] < min){
            min = vetor[i];
        }

    }
}

void MinMax :: MinMax3(vector <int> &vetor, int max, int min, int tam){

    int i = 0, FimDoAnel = 0; 

    if(tam % 2 > 0){
        vetor[tam + 1] = vetor[tam];
        FimDoAnel = tam;
    } else{
        FimDoAnel = tam - 1;
    }


    if(vetor[0] > vetor[1]){
        max = vetor[0];
        min = vetor[1];
    } else{
        max = vetor[1];
        min = vetor[0];
    }

    i = 2;

    while(i <= FimDoAnel){
        if(vetor[i] > vetor[i + 1]){

            if( vetor[i] > max){
                max = vetor[i];
            }
            
            if(vetor[i + 1] < min){
                min = vetor[i + 1];
            }
        } else{

            if(vetor[i + 1] > max){
                max = vetor[i + 1];
            }
            
            if(vetor[i] < min){
                min = vetor[i];
            }

        }

        i = i + 2;
    }

} 

void MinMax :: MedirTempoMinMax1(vector<int> &vetor){

    int min = 0, max = 0;
    static int aux = 0;
    
        
    auto start = steady_clock::now();
        
    MinMax1(vetor, max, min);

    auto end = steady_clock::now();

    auto elapsed = end - start;

    ofstream arquivo("Resultados/ResultadosMinMax1.csv", ios::app);

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
    }
        
        
    arquivo << vetor.size() << "," << elapsed.count();
    aux++;

    if(aux == 3){
        arquivo << endl;
        aux = 0;
    } else{
        arquivo << ",";
    }
            
        
    arquivo.close();


    cout << "tempo Minmax1: " << elapsed.count() << "ns\n";


}

void MinMax :: MedirTempoMinMax2(vector<int> &vetor){
    
    int min = 0, max = 0;
    static int aux = 0;

    auto start1 = steady_clock::now();
    
    MinMax2(vetor, max, min);

    auto end1 = steady_clock::now();

    auto elapsed1 = end1- start1;

    ofstream arquivo("Resultados/ResultadosMinMax2.csv", ios::app);

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
    }
        
        
    arquivo << vetor.size() << "," << elapsed1.count();
    aux++;

    if(aux == 3){
        arquivo << endl;
        aux = 0;
    } else{
        arquivo << ",";
    }
            
        
    arquivo.close();


    
    cout << "tempo Minmax2: " << elapsed1.count() << "ns\n";


}

void MinMax :: MedirTempoMinMax3(vector<int> &vetor){

    int min = 0, max = 0;
    int tam = vetor.size();
    static int aux = 0;

    auto start2 = steady_clock::now();
    
    MinMax3(vetor, max, min,tam);

    auto end2 = steady_clock::now();

    auto elapsed2 = end2- start2;

    ofstream arquivo("Resultados/ResultadosMinMax3.csv", ios::app);

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
    }
        
        
    arquivo << vetor.size() << "," << elapsed2.count();
    aux++;

    if(aux == 3){
        arquivo << endl;
        aux = 0;
    } else{
        arquivo << ",";
    }
            
        
    arquivo.close();

    
    cout << "tempo Minmax3: " << elapsed2.count() << "ns\n";


}

void MinMax :: PrintarMinMaxOrdenado(vector<int> &vetor){

    vector<int> aux ; 

    for(vector<int>::size_type i = 0; i < vetor.size(); ++i){
        aux.push_back(vetor[i]);
    }
    
    sort(vetor.begin(), vetor.end()); // ordenado crescente
    sort(aux.rbegin(), aux.rend()); // ordenado decrescente

    cout << "Vetor de tamanho: " << vetor.size() << " ordenado crescente" << endl;
    MedirTempoMinMax1(vetor);
    MedirTempoMinMax2(vetor);
    MedirTempoMinMax3(vetor);
    cout << endl;

    cout << "Vetor de tamanho: " << vetor.size() << " ordenado decrescente" << endl;
    MedirTempoMinMax1(aux);
    MedirTempoMinMax2(aux);
    MedirTempoMinMax3(aux);
    cout << endl;
    
}

void MinMax :: PrintarMinMaxAleatorio(vector<int> &vetor){

    cout << "Vetor de tamanho: " << vetor.size() << " aleatório" << endl;
    MedirTempoMinMax1(vetor);
    MedirTempoMinMax2(vetor);
    MedirTempoMinMax3(vetor);

    cout << endl;
}

void MinMax :: LimparDadosArquivo(){

    ofstream Arquivo("Resultados/ResultadosMinMax1.csv", ios::trunc);

    if(!Arquivo.is_open()){
        cout << "Erro ao abrir o arquivo." << endl;
    }

    Arquivo.close();




    ofstream Arquivo1("Resultados/ResultadosMinMax2.csv", ios::trunc);

    if(!Arquivo1.is_open()){
        cout << "Erro ao abrir o arquivo." << endl;
    }

    Arquivo.close();




    ofstream Arquivo2("Resultados/ResultadosMinMax3.csv", ios::trunc);

    if(!Arquivo2.is_open()){
        cout << "Erro ao abrir o arquivo." << endl;
    }

    Arquivo.close();

}

