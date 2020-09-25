#ifndef PILHA_H
#define PILHA_H

class Pilha{
public:
    Pilha(){tamanho=0;};
    int GetTamanho(){return tamanho;};
    bool Vazia(){return tamanho==0;};
    
    virtual void Empilha(int item) = 0;
    virtual int Desempilha() = 0;
    virtual void Limpa() = 0;
    
protected:
    int tamanho;
};

#endif // PILHA_H
