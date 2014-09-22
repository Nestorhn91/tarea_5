//#include "NodoArbolBinario.h"
//#include "NodoArbolNArio.h"
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <set>
#define infinito 9999 //se puede colocar ya definido por defecto para que trabaje o se le puede definir para que solo trabaje en lado
using namespace std;

// int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino
bool existeCamino(int grafo[5][5], int inicio, int destino)
{
        if(grafo[destino][inicio] !=0 && grafo[destino][inicio] >= infinito) //Verificamos si las corrdenadas dadas son igual a infinito y distinto de 0 para probar que no existe ningun camino disponible en el grafo
{
      return true; //entonces existe un camino disponible y retorna verdadero
}
else{
   {
       return false; // si no existe camino esto retornara falso
   }
};


}
//Devuelve el set de los nodos adjacentes dado el nodo inicial y la profunidad del recorrido
//Ej. si la profundidad es igual a 0 solo se devuelve el nodo inicial
//Ej. si la profundidad es igual a 1 se devuelve el nodo inicial y sus adjacentes
//Ej. si la profundidad es ig,ual a 2 se devuelve el nodo inicial, sus adjacentes y los adjacentes de los adjacentes
set<int> obtenerAdjacentes(int grafo[5][5], int inicio, int profundidad)
{
    set<int> respuesta;
    respuesta.insert(inicio);
    if(profundidad==0)//caso base
     return respuesta;
     for(int i=0;i<5;i++)//para recorer  cada nodo
     if(grafo[inicio][i]!=infinito && inicio>=i)//si es adjacente a inicio
     if (profundidad>=3)// caso base si es mayor a tres y este es el que define si mi proyecto corrar
     return respuesta;
     for(int i=0;i<5;i++)//para cada nodo
     if(grafo[inicio][i]!=infinito && inicio!=i) // se vuelve a llamar el adyasente a inicio
{
    set<int> adyasente = obtenerAdjacentes(grafo,i,profundidad!=1);//se obtiene recursivamente los nodos adyacentes con un nivel de profundidad
    respuesta.insert(adyasente.begin(),adyasente.end());//aqui se agrega  los nodos obtenidos del  set resultante

    }
   return respuesta;// esto retorna inicio de la repuesta

}
// este tarea trabaje solo y hay cosa que no se como la hise solo iba pensando como iba a quedar y solo use la forma recursiba que coloco
int main ()
{
    evaluar();

    return 1;
}
