#include <iostream>

using namespace std;

class Nodo {
    int dato;
    Nodo* hijoDerecho;
    Nodo* hijoIzquierdo;
public:
    //Constructor - inicializar los atributos
    Nodo(int dato)
    {
        this->dato = dato;
        hijoDerecho = NULL;//por que no apuntamos a ningun nodo
        hijoIzquierdo = NULL;//por que no apuntamos a ningun nodo
    }
    //getter and setter
    int getDato()
    {
        return dato;
    }
    void setDato(int dato)
    {
        this->dato = dato;
    }
    Nodo* getHijoIzquierdo()
    {
        return this->hijoIzquierdo;
    }
    void setHijoIzquierdo(Nodo* enlace)
    {
        this->hijoIzquierdo = enlace;
    }
    Nodo* getHijoDerecho()
    {
        return this->hijoDerecho;
    }
    void setHijoDerecho(Nodo* enlace)
    {
        this->hijoDerecho = enlace;
    }
    void imprimir()
    {
        cout << "/-------------------\\" << endl;
        cout << "|Dato: " << dato << endl;
        cout << "|-------------------" << endl;
        cout << "|Izquierdo: " << hijoIzquierdo << "\tDerecho: " << hijoDerecho << endl;
        cout << "\\------------------/" << endl;
    }
};
class ArbolBinario {
    Nodo* raiz;
public:
    ArbolBinario() {
        raiz = NULL;
    }
    Nodo* getRaiz()
    {
        return raiz;
    }

    bool EstaVacia()
    {
        if (raiz == NULL)
            return true;
        else
            return false;
    }
    void Insertar(Nodo* inicial, int dato) {
        Nodo* temp = new Nodo(dato);
        if (EstaVacia())
        {
            inicial = temp;
        }
        else
        {
            if (dato < inicial->getDato())
            {
                //insertar izquierda
                if (inicial->getHijoIzquierdo() == NULL)
                    inicial->setHijoIzquierdo(temp);
                else
                    Insertar(inicial->getHijoIzquierdo(), dato);
            }
            else
            {
                //insertar derecha
                if (inicial->getHijoDerecho() == NULL)
                    inicial->setHijoDerecho(temp);
                else
                    Insertar(inicial->getHijoDerecho(), dato);
            }
        }
    }
    void Insertar(int dato) {
        Insertar(raiz, dato);
    }
    //preorder, inorder, postorder
    //-> impresión del arbol tal como se creo
    void PreOrden(Nodo* inicial) {
        //condición de finalización
        if (inicial == NULL) {
            return;
        }
        else {
            cout << inicial->getDato() << endl;
            PreOrden(inicial->getHijoIzquierdo());
            PreOrden(inicial->getHijoDerecho());
        }
    }
    void InOrden(Nodo* inicial) {
        //condición de finalización
        if (inicial == NULL) {
            return;
        }
        else {
            InOrden(inicial->getHijoIzquierdo());
            cout << inicial->getDato() << endl;//raiz
            InOrden(inicial->getHijoDerecho());
        }
    }

    void PostOrden(Nodo* inicial) {
        //condición de finalización
        if (inicial == NULL) {
            return;
        }
        else {
            PostOrden(inicial->getHijoIzquierdo());
            PostOrden(inicial->getHijoDerecho());
            cout << inicial->getDato() << endl;//raiz
        }
    }
    void PreOrden() {
        PreOrden(raiz);
    }
    void InOrden() {
        InOrden(raiz);
    }
    void PostOrden() {
        PostOrden(raiz);
    }

};

int main()
{
    ArbolBinario arbol = ArbolBinario();
    arbol.Insertar(7);
    arbol.Insertar(9);
    arbol.Insertar(1);
    arbol.Insertar(15);
    arbol.Insertar(10);
    arbol.Insertar(6);
    arbol.Insertar(5);
    arbol.Insertar(0);
    arbol.Insertar(7);

    //cout<<arbol.getRaiz()->getDato()<<endl;

    arbol.PreOrden();
    arbol.InOrden();
    arbol.PostOrden();

    /*Nodo nodo = Nodo(5);
    nodo.imprimir();
    Nodo* nodo2 = new Nodo(15);
    nodo2->imprimir();
    nodo.setHijoDerecho(nodo2);
    nodo.imprimir();*/
    //ArbolBinario arbol = ArbolBinario();

    return 0;
}
