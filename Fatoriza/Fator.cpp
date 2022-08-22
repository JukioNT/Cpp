#include "Fator.h"

Fator* Fator::Pilha(Fator *P, int N)
{
    Fator *novo = new Fator();
    novo -> num = N;
    novo -> elo = P;
    P = novo;
    return P;
};

Fator** Fator::Fila(Fator **P, int N)
{
    Fator *aux = new Fator();
    aux -> num = N;
    aux -> elo = NULL;
    if(P[0] == NULL){
        P[0] = aux;
    }
    else
    {
        P[0] -> elo = aux;
    }
    return P;
};

void Fator::List(Fator *P)
{
    Fator *aux = P;
    while(aux != NULL)
    {
        std::cout<< aux->num << " ";
    }
    aux = aux -> elo;
};

bool Fator::Prime(int N)
{
    int i;

    if(N == 1)
    {
        return true;
    }
    for(i = 2; i < N; i++)
    {
        if(N % i == 0)
        {
            return false;
        }
    }
    return true;
};

Fator** Fator::Fatorar(int N)
{
    Fator **P = new Fator*[2];
    P[0] = NULL;
    P[1] = NULL;

    Fator **F = new Fator*;
    F = NULL;
    int div = 2;

    while(N != 1)
    {
        if(Prime(N) && N % div == 0)
        {
            P[0] = Pilha(P[0], div);
            F = Fila(F, div);
            N = N/div;
        }
    }
}

