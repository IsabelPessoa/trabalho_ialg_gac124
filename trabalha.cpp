#include <iostream>
#include "Biblioteca/funcoes.h"

int main(){
    string linha, objeto, tipo;
    char lixo;
    float valor;
    int id, quantidade;
    ifstream arquivo("arq_csv.csv");

    if(not(arquivo))
        cout << "ERRO: Não foi possivel abrir o arquivo" << endl;
    else{
        arquivo >> quantidade;
        
        for(int i = 0; i < quantidade; i++){
            Getline_bombado(objeto, tipo, valor, id, i);

            if(objeto.length() < 16)
                objeto = objeto + "\t";

            cout << id << "\t";
            cout << objeto << "\t";
            cout << tipo << "\t";
            cout << valor << endl;
        }
    }

    return 0;
}