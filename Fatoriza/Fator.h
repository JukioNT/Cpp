#include<iostream>

class Fator
{
    public:
        bool Prime(int);
        Fator* Pilha(Fator*, int);
        Fator** Fila(Fator**, int);
        Fator** Fatorar(int);
        void List(Fator*);

    private:
        Fator *elo;
        int num;
};
