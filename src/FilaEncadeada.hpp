#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H
#include "Node.hpp"

#include "Fila.hpp" // Base class: Fila.hpp

class FilaEncadeada : public Fila{
public:
    FilaEncadeada();
    ~FilaEncadeada();
    
    void Enfileira(int item) override;
    int Desenfileira() override;
    void Limpa() override;
    void Imprime();
    Node*GetFrente(){return frente;};
    Node*GetTras(){return tras;};
    
private:
    Node* frente;
    Node* tras;
};

#endif // FILAENCADEADA_H
