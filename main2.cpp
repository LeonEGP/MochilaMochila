#include <iostream>

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

int knapsack (int capacidad, int valores[], int pesos[], int n) {
    
    int resultado;
    int mochila[n + 1][capacidad+1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacidad; j++) {
            if (i == 0 || j == 0) {
                mochila[i][j] = 0;
            }
            else if (pesos[i-1] <= j) {
                mochila[i][j] = mayor(valores[i-1] + mochila[i-1][j-pesos[i-1]],mochila[i-1][j]);
            }
            else {
                mochila[i][j] = mochila[i - 1][j];
            }
        }
    }

    resultado = mochila[n][capacidad];
    return resultado;
}

int main() {

    int n;
    int w;

    cin >> n;
    int valores[n];
    int pesos[n];

    for (int i = 0; i < n; i++) {
        int temporal;
        cin >> temporal;
        valores[i] = temporal;
    }

    for (int j = 0; j < n; j++) {
        int temporal;
        cin >> temporal;
        pesos[j] = temporal;
    }

    cin >> w;

    cout << knapsack(w, valores, pesos, n);
    espacio();

    return 0;
}

/*
REFERENCIAS:
    https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/ [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.tutorialspoint.com/cplusplus-program-to-solve-the-0-1-knapsack-problem [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.sanfoundry.com/cpp-program-solve-knapsack-problem-using-dynamic-programming/ [SI DA EL CASO DE PRUEBA DEL SITIO].
*/