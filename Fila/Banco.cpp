#include "Banco.h"

Banco** Banco::inserir(Banco** r, std::string n, int i){
    Banco *novo = new Banco();
    novo -> nome = n;
    novo -> idade = i;
    if(novo -> idade >= 60){
        novo -> tipo = 1;
    }else{
        novo -> tipo = 2;
    }
    if(r[0] == NULL){
        r[0] = novo;
    }else{
        r[1] -> elo = novo;
    }
    r[1] = novo;
    return r;
};

Banco* Banco::excluir(Banco *i){
    Banco *aux = i;
    i = i -> elo;
    delete(aux);
    return i;
};

void Banco::listar(Banco *i){
    Banco *aux = i;
    std::string t;
    if(aux -> tipo == 1){
        t = "cliente preferencial";
    }else{
        t = "cliente comum";
    }
    while(aux != NULL){
        std::cout << aux -> nome << " " << aux -> idade << " " << t << "\n";
        aux = aux -> elo;
    }
};

int Banco::quantidade(Banco* i){
    Banco* aux = i;
    int quant = 0;
    while(aux != NULL){
        quant ++;
        aux = aux -> elo;
    }
};
