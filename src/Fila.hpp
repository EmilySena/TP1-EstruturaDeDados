#ifndef FILA_H
#define FILA_H

class Fila{
public:
    Fila() {tamanho=0;};
    int GetTamanho(){return tamanho;};
    bool Vazia() {return tamanho==0;};
    
    virtual void Enfileira(int item)=0;
    virtual int Desenfileira()=0;
    virtual void Limpa()=0;
    
protected:
    int tamanho;
};

#endif // FILA_H
