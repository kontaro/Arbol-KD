#include <iostream>

using namespace std;

struct nodo{

    int x,y,z;
    int depht;
    //aqui deberian ir los hijos
    nodo *left ;
    nodo *right;
    nodo(){
        x=0;
        y=0;
        z=0;
        left=NULL;
        right=NULL;
    }
};


struct tree{

    nodo *root;
    nodo *current;

    tree(){
        root=NULL;
        current=NULL;
    }

};

int main()
{
    cout << "Hello world!" << endl;
    cout <<"Este es el arbol " << endl;
    return 0;
}
