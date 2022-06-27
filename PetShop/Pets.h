#include <iostream>

class Pets
{
    public:
        Pets** Inserir_cao(Pets**, std::string, std::string, int, int*);
        Pets* Inserir_gato(Pets*, std::string, std::string, int, int*);
        Pets* Remover_pet(Pets*, int*);
        void Lista_pets(Pets*, Pets*);

    private:
        std::string nome_tutor, nome_pet;
        int tipo_pet; //1-Cães(Fila) / 2-Gatos(Pilha)
        Pets* elo;
};
