#include <iostream>
#include "Fila.hpp"
#include "FilaEncadeada.hpp"
#include "Pilha.hpp"
#include "Node.hpp"
#include "PilhaEncadeada.hpp"
void consertar_avariada(FilaEncadeada&, PilhaEncadeada& );
void print_naves_combate(PilhaEncadeada&);
void print_naves_avariadas(FilaEncadeada&);
void nave_avariada(FilaEncadeada&, int comando);
void set_combate(PilhaEncadeada&,PilhaEncadeada&);
using namespace std;
int main() {
    PilhaEncadeada Naves;
    size_t N{}; //número de naves
    cout<<"Número de naves:";
    cin>>N;
     //k=identificador da nave
    for(size_t i{0}; i<N; ++i){
        int k{};
        cin>>k;
        Naves.Empilha(k);
    }
    PilhaEncadeada Combate;



    FilaEncadeada Avariada;
  /*  int k{};
    k=Naves.Desempilha();
    Avariada.Enfileira(k);
    cout<<"testeee "<<k<<endl;
    k=0;
    k=Avariada.Desenfileira();
    cout<<"testeee "<<k<<endl;
*/
    
    int comando{};
    do{
        scanf(" %d", &comando);
        switch (comando)
        {
        case 0:
            set_combate(Naves,Combate);
            break;
        case -1:
            consertar_avariada(Avariada,Naves);
            break;
        case -2:
            print_naves_combate(Naves);
            break;
        case -3:
            print_naves_avariadas(Avariada);
            break;
        default:
            nave_avariada(Avariada,comando);
        }
    }while(comando!=EOF);
    
	
	return 0;
}
void consertar_avariada(FilaEncadeada &Avariada, PilhaEncadeada &Naves){
    int k{};
    k= Avariada.Desenfileira();
    Naves.Empilha(k);
    cout<<"\nnave "<<k<<" consertada"<<endl;
    
    
}
void set_combate(PilhaEncadeada &Naves, PilhaEncadeada &Combate){
    int k{};
    k= Naves.Desempilha();
    Combate.Empilha(k);
    cout<<"nave "<<k<<" em combate"<<endl;

}

void print_naves_combate(PilhaEncadeada &Naves){
    Naves.Imprime();
    
}
void print_naves_avariadas(FilaEncadeada &Avariada){
    Avariada.Imprime();
}
void nave_avariada(FilaEncadeada &Avariada, int comando){
    int k{};
    k=comando;
    Avariada.Enfileira(k);
    cout<<"nave "<<k<<" avariada"<<endl;

}