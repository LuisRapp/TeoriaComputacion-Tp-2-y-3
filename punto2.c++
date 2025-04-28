#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/**
 * Función de búsqueda binaria
 * lista: Vector de enteros ordenado donde buscar
 * valor: Valor a buscar
 * return: Índice del valor si se encuentra, -1 si no está presente
 * Complejidad temporal: O(log n) en el peor caso
 * Complejidad espacial: O(1) - usa espacio constante
 */
int busquedaBinaria(const vector<int>& lista, int valor) {
    int inicio = 0;
    int fin = lista.size() - 1;
    
    while (inicio <= fin) {
        // Evita posible overflow
        int puntero = inicio + (fin - inicio) / 2;
        
        if (valor == lista[puntero]) {
            return puntero;
        } else if (valor < lista[puntero]) {
            fin = puntero - 1;
        } else {
            inicio = puntero + 1;
        }
    }
    
    return -1;
}

int main() {
    vector<int> lista;
    string entrada;
    int valor;
    
    cout << "Ingrese los números separados por comas: ";
    getline(cin, entrada);
    
    stringstream ss(entrada);
    string token;
    while (getline(ss, token, ',')) {
        lista.push_back(stoi(token));
    }
    
    sort(lista.begin(), lista.end());
    
    cout << "Lista ordenada: ";
    for (int num : lista) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Ingrese el valor que desea buscar: ";
    cin >> valor;
    
    int resultado = busquedaBinaria(lista, valor);
    
    if (resultado != -1) {
        cout << "El nro " << valor << " se encuentra en la posición " << resultado << endl;
    } else {
        cout << "El valor " << valor << " no se encuentra dentro de la lista" << endl;
    }
    
    return 0;
}