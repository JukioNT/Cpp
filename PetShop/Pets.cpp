#include "Pets.h"

Pets** Pets::Inserir_cao(Pets** N, std::string tutor, std::string pet, int tipo, int* cont){
    Pets* novo = new Pets();
    novo -> nome_tutor = tutor;
    novo -> nome_pet = pet;
    novo -> tipo_pet = tipo;
    if(N[0] == NULL){
        N[0] = novo;
    }else{
        N[1] -> elo = novo;
    }
    N[1] = novo;
    (*cont)++;
    return N;
};

Pets* Pets::Inserir_gato(Pets* N, std::string tutor, std::string pet, int tipo, int* cont){
    Pets *novo = new Pets();
    novo -> nome_tutor = tutor;
    novo -> nome_pet = pet;
    novo -> tipo_pet = tipo;
    novo -> elo = N;
    (*cont)++;
    return novo;
};

Pets* Pets::Remover_pet(Pets* N, int* cont){
    Pets* aux = N;
    N = N -> elo;
    delete(aux);
    (*cont)--;
    return N;
};

void Pets::Lista_pets(Pets* C, Pets* G){
    Pets* aux = C;
    if(aux == NULL){
        std::cout << "Lista vazia";
    }else{
        while(aux != NULL){
            std::cout << "Tutor" << aux -> nome_tutor << std::endl
                      << "Pet" << aux -> nome_pet << std::endl;
            aux = aux -> elo;
        }
    }
    aux = G;
    if(aux == NULL){
        std::cout << "Lista vazia";
    }else{
        while(aux != NULL){
            std::cout << "Tutor" << aux -> nome_tutor << std::endl
                      << "Pet" << aux -> nome_pet << std::endl;
            aux = aux -> elo;
        }
    }
};
