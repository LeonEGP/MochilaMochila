#include <iostream>
#include <vector>

using namespace std;

void espacio() {
    cout << endl;
}

int mayor(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int mochila(int capacidad, vector<int> valores, vector<int> pesos, int n) {
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

int main() {
    
    int n;
    int w;
    vector<int> valores;
    vector<int> pesos;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temporal;
        cin >> temporal;
        valores.push_back(temporal);
    }

    for (int j = 0; j < n; j++) {
        int temporal;
        cin >> temporal;
        pesos.push_back(temporal);
    }

    cin >> w;

    cout << mochila(w,valores,pesos,n);
    espacio();

    return 0;
}

/*
REFERENCIAS:
    https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/ [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.tutorialspoint.com/cplusplus-program-to-solve-the-0-1-knapsack-problem [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.sanfoundry.com/cpp-program-solve-knapsack-problem-using-dynamic-programming/ [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.tutorialspoint.com/cplusplus-program-to-solve-knapsack-problem-using-dynamic-programming [SI DA EL CASO DE PRUEBA DEL SITIO].
*/