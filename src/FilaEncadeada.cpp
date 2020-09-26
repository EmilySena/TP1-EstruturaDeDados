#include "FilaEncadeada.hpp"
#include <iostream>
using namespace std;

FilaEncadeada::FilaEncadeada() : Fila(){
    frente= new Node(); //celula cabeça
    tras=frente;
}
FilaEncadeada::~FilaEncadeada(){
    Limpa();
    delete frente;
}
void FilaEncadeada::Imprime(){
    Node *p;
    p=frente->prox;
    while(p!=nullptr){
        cout<<p->GetItem()<<endl;
        p=p->GetProx();


    }
}
void FilaEncadeada::Enfileira(int item){
    Node *nova;
    nova= new Node();
    nova->item=item;
    tras->prox=nova;
    tras=nova;
    tamanho++;
}

int FilaEncadeada::Desenfileira(){
    Node *p;
    p=new Node();
    int aux;
    if(tamanho==0)
        throw "Fila está vazia!";
    aux=frente->prox->item;
    p=frente;
    frente=frente->prox;
    delete p;
    tamanho--;
    return aux;
}
void FilaEncadeada::Limpa(){

    while(tamanho!=0){
        Desenfileira();
    }


}
