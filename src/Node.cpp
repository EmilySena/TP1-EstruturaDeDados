#include "Node.hpp"
Node::Node(){
    item=GetItem();
    prox=0;
}


void Node::SetProx(Node*item){
    prox=item;
}