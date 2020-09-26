#include <iostream>
#include "Fila.hpp"
#include "FilaEncadeada.hpp"
#include "Pilha.hpp"
#include "Node.hpp"
#include "PilhaEncadeada.hpp"
//declaração de todas as funções
void consertar_avariada(FilaEncadeada&, PilhaEncadeada& );
void print_naves_combate(PilhaEncadeada&);
void print_naves_avariadas(FilaEncadeada&);
void nave_avariada(FilaEncadeada&, int comando);
void set_combate(PilhaEncadeada&,PilhaEncadeada&);
using namespace std;
int main() {
    PilhaEncadeada Naves; //Estrutura que vai armazenar todas as naves aptas para o combate
    size_t N{}; //número de naves, é um número sem sinal, pois é uma quantidade
    cin>>N;
     //k=identificador da nave
    for(size_t i{0}; i<N; ++i){
        int k{};
        cin>>k;
        Naves.Empilha(k);
    } //armazenando todos os identificadores das naves na pilha Naves
    PilhaEncadeada Combate; //onde são armazenadas as naves que estão em combate
    FilaEncadeada Avariada; //Estrutura para armazenar as naves avariadas, aguardando para serem consertadas
    int comando{}; //variavel que vai ler os comandos utilizados por Darth Vader
      while(scanf("%d",&comando)!= EOF){ //lendo até EOF
        if(comando==0){
            set_combate(Naves,Combate); //enviar nave para combate
        }
        else if(comando==-1){
          consertar_avariada(Avariada,Naves); //conserta nave avariada
        }
        else if(comando==-2){
          print_naves_combate(Naves);
          //mostra na tela naves prontas pra entrar em combate da mais apta para menos apta
        }
        else if(comando==-3){
          print_naves_avariadas(Avariada);
          //mostra na tela naves que foram avariadas, da que vai ser consertada primeiro até a com menos prioridade
        }
        else{
          nave_avariada(Avariada,comando); //nave q foi avariada
        }
      }
	return 0;
}
//implementação de cada uma das funções dos comandos
void consertar_avariada(FilaEncadeada &Avariada, PilhaEncadeada &Naves){
    int k{};
    k= Avariada.Desenfileira();
    Naves.Empilha(k);
    cout<<"nave "<<k<<" consertada"<<endl;


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
    k=comando; //o comando aqui corresponde ao identificador da nave
    Avariada.Enfileira(k);
    cout<<"nave "<<k<<" avariada"<<endl;

}
