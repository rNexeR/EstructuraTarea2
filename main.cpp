// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
    int y = mi_cola.size();
    for(int x = 0; x<y; x++){
        if(mi_cola.front()%2 != 0)
            return false;
        mi_cola.pop();
    }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    for(list<int>::iterator i = mi_lista.begin(); i!=mi_lista.end(); i++){
        if((*i) %2 != 0)
            return false;
    }
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    int y = mi_cola.size();
    for(int x = 0; x<y; x++){
        if(mi_cola.front() == str)
            return true;
        mi_cola.pop();
    }
    return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    for(list<string>::iterator i = mi_lista.begin(); i!=mi_lista.end(); i++){
        if((*i) == str)
            return true;
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int y = mi_cola.size(), suma=0;
    for(int x = 0; x<y; x++){
        suma+=mi_cola.front();
        mi_cola.pop();
    }
    return suma;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;
    for(list<string>::iterator i = mi_lista.begin(); i!=mi_lista.end(); i++){
        suma+=(*i).size();
    }
    return suma;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    char ant = 0;
    for(list<char>::iterator i = mi_lista.begin(); i!=mi_lista.end(); i++){
        if ((*i)<ant)
            return false;
        ant=(*i);
    }
    return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
