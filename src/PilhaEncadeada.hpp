#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H
#include "Node.hpp"

#include "Pilha.hpp" // Base class: Pilha.h

class PilhaEncadeada : public Pilha
{
public:
    PilhaEncadeada();
    ~PilhaEncadeada();
    
    void Empilha(int item) override;
    int Desempilha() override;
    void Imprime();
    void Limpa() override;
private:
    Node* topo;

};

#endif // PILHAENCADEADA_H
