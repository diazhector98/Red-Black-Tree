#include <iostream>

using namespace std;


#include "RBTree.h"

int main(){
    RBTree arbol;
    arbol.insert(5);
    arbol.insert(6);
    arbol.insert(7);
    arbol.insert(8);
    arbol.insert(9);
    arbol.print(4);
    return 0;
}