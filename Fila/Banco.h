#include <iostream>

class Banco
{
    private:
        std::string nome;
        int idade, tipo;
        Banco *elo;

    public:
        Banco** inserir(Banco**, std::string, int);
        Banco* excluir(Banco*);
        void listar(Banco*);
        int quantidade(Banco*);
};
