#include <iostream>
#include "Banco.h"


using namespace std;

void menu(){
        system("clear");
        cout << "1-inserir cliente \n";
        cout << "2-excluir cliente \n";
        cout << "3-listar clientes preferenciais \n";
        cout << "4-listar clientes comuns \n";
        cout << "5-listar quantidade preferenciais \n";
        cout << "6-listar quantidade comuns \n";
        cout << "7-sair \n";
        cout << "escolha sua opção \n";
    };

int main(){
    Banco **p, **c, b;
    string nome;
    int idade, op, tipo;

    p = new Banco*[2];
    c = new Banco*[2];
    p[0] = NULL;
    p[1] = NULL;
    c[0] = NULL;
    c[1] = NULL;

    do{
        menu();
        cin >> op;
        switch(op){
        case 1:
            "Informe o nome: ";
            cin >> nome;
            "Informe a idade: ";
            cin >> idade;
            if(idade >= 60){
                p = b.inserir(p,nome,idade);
            }else{
                c = b.inserir(c,nome,idade);
            }
            cout << "inserido com sucesso";
            break;
        case 2:
            cout << "Informe o tipo: 1(preferencial) ou 2(comum): ";
            cin >> tipo;
            if(tipo == 1){
                p[0] = b.excluir(p[0]);
            }else{
                c[0] = b.excluir(c[0]);
            }
            cout << "Excluido com sucesso";
            break;
        case 3:
            if(p[0] != NULL){
                b.listar(p[0]);
            }else{
                cout << "Fila vazia";
            }
            break;
        case 4:
            if(c[0] != NULL){
                b.listar(c[0]);
            }else{
                cout << "Fila vazia";
            }
            break;
        case 5:
            if(p[0 != NULL]){
                cout << "Total preferenciais: " << b.quantidade(p[0]);
            }else{
                cout << "fila vazia";
            }
        case 6:
            if(c[0] != NULL){
                cout << "Total comuns: " << b.quantidade(c[0]);
            }else{
                cout << "Fila vazia";
            }
            break;
        case 7:
            cout << "TCHAU";
            break;
        default:
            cout << "opção invalida";
        }
    }while(op != 7);
    return 0;
}
