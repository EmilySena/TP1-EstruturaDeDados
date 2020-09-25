#include "PilhaEncadeada.hpp"
#include <iostream>
using namespace std;

//Construtor
PilhaEncadeada::PilhaEncadeada() : Pilha(){
    topo=nullptr;
}
//Destrutor
PilhaEncadeada::~PilhaEncadeada(){
    Limpa();
}
//Metodos
void PilhaEncadeada::Empilha(int item){
    Node *nova;
    nova= new Node(item);
    nova->SetProx(topo);
    topo=nova;
    tamanho++;
};
int PilhaEncadeada::Desempilha(){
    int aux;
    Node *p;

    if(tamanho==0){
        throw "A pilha está vazia!";
    }
    aux=topo->GetItem();
    p=topo;
    topo=topo->GetProx();
    delete p;
    tamanho--;
    return aux;
};
void PilhaEncadeada::Imprime(){
    Node *p;
    p=topo;

    while(p!=nullptr){
        cout<<p->GetItem()<<endl;
        p=p->GetProx();
    }
}
void PilhaEncadeada::Limpa(){
    while(!Vazia())
        Desempilha();
}
