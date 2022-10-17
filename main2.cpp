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

int knapsack(int capacidad, int valores[], int pesos[], int n) {
    mochila[n+1][capacidad+1];

    for (int i = 0; i <= n; i++){
        for (int j = 0; i <= n; )
    }

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
        pesos[i] = temporal;
    }

    cin >> w;

    espacio();
    cout << knapsack(w,valores,pesos,n);
    espacio();

    return 0;
}

/*
REFERENCIAS:
    https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/ [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.tutorialspoint.com/cplusplus-program-to-solve-the-0-1-knapsack-problem [SI DA EL CASO DE PRUEBA DEL SITIO].
    https://www.sanfoundry.com/cpp-program-solve-knapsack-problem-using-dynamic-programming/ [SI DA LOS CASOS DE PRUEBA DEL SITIO].
*/