#ifndef FUNCOES_H
#define FUNCOES_H
#include <fstream>
using namespace std;

void Getline_bombado(string &objeto, string &tipo, float &valor, int &id, int loop){
    string linha;
    char lixo;
    int lixoint;
    fstream arquivo("arq_csv.csv");

    arquivo >> lixoint;

    for(int i = 0; i <= loop; i++)
        getline(arquivo, linha);

    arquivo >> id;
    arquivo >> lixo;

    arquivo >> lixo;
    getline(arquivo, objeto, '"');
    arquivo >> lixo;

    arquivo >> lixo;
    getline(arquivo, tipo, '"');
    arquivo >> lixo;

    arquivo >> valor;    

}


#endif