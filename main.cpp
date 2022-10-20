//Programa que: Implementa una solución para el "Knapsack Problem".
//Programadores: León Emiliano García Pérez [A00573074] y Carla Morales López [A01639225].
//Fecha de entrega: Jueves 19 de Octubre de 2022.

//Inclusión de librerías.
#include <iostream>
#include <vector>

//Ajuste a estandar.
using namespace std;

//Función que imprime un espacio en consola, no recibe valores, no tiene valor de retorno.
void espacio() { //Complejidad Computacional: O(1), es una ejecución lineal en el contenido de la función. 
    cout << endl;
}

//Función que comprueba qué número es mayor entre dos enteros, recibe dos valores enteros y retorna aquel que sea mayor.
int mayor(int x, int y) { //Complejidad Computacional: O(1), es una ejecución lineal en el contenido de la función.
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

//Función que implementa una solución para el Knapsack Problem, recibe el entero de capacidad, un vector de entero con los valores junto a su respectivo vector de pesos, la cantidad entera de elementos en la mochila. 
int mochila(int capacidad, vector<int> valores, vector<int> pesos, int n) { //Complejidad Computacional: O(2^n), siendo n la cantidad de elementos en la mochila. 
    if (n == 0 || capacidad == 0) {
        return 0;
    }
    else if (pesos[n - 1] > capacidad) {
        return mochila(capacidad, valores, pesos, n - 1);
    }
    else {
        return mayor(valores[n-1]+mochila(capacidad-pesos[n-1], valores, pesos, n-1),mochila(capacidad,valores,pesos,n-1));
    }
}

//Función main de ejecución del programa, no recibe valores, retorna un valor 0 al finalizar la ejecución.
int main() { //Complejidad Computacional: O(1), es una ejecución lineal en el contenido de la función. Dentro de la ejecución se encuentran dos ciclos for independientes, de Complejidad Computacional: O(n) cada uno [Siendo n la cantidad de elementos]. Dentro de la ejecución se encuentra el Algoritmo de Solución para el Knapsack Problem, con Complejidad Computacional: O(2^n) [Siendo n la cantidad de elementos].
    
    int n; //Cantidad de elementos en la mochila.
    int w; //Capacidad de la mochila. 
    vector<int> valores;
    vector<int> pesos;

    cin >> n;

    for (int i = 0; i < n; i++) { //Complejidad Computacional: O(n).
        int temporal;
        cin >> temporal;
        valores.push_back(temporal);
    }

    for (int j = 0; j < n; j++) { //Complejidad Computacional: O(n).
        int temporal;
        cin >> temporal;
        pesos.push_back(temporal);
    }

    cin >> w;

    cout << mochila(w,valores,pesos,n); //Complejidad Computacional: O(2^n).
    espacio();

    return 0;
}