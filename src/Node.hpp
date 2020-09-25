#ifndef NODE_H
#define NODE_H

class Node{
    public:
        Node();
        Node(int chave):item(chave){};
        Node* GetProx(){return prox;};
        int GetItem(){return item;};
        void SetProx(Node*prox);
        
        
    private:
        int item;
        Node *prox;
    
    friend class FilaEncadeada;
};

#endif // Node_H
