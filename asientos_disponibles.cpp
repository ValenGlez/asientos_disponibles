#include <iostream>
#include <vector>
using namespace std;


void asientosDisponible(const vector<int>& asientosDisponibles, int asientoSolicitado) {

    for (int asiento : asientosDisponibles) {
        if (asiento == asientoSolicitado) {
            cout << "El asiento " << asientoSolicitado << " esta disponible.";
            return;
        }
    }
    cout << "El asiento " << asientoSolicitado << " no esta disponible.";
}

int main() {

    vector<int> asientosDisponibles = {1, 2, 3, 5, 7, 8, 10};

    int asientoSolicitado;
    cout << "Ingrese el numero del asiento que desea ocupar: ";
    cin >> asientoSolicitado;

    asientosDisponible(asientosDisponibles, asientoSolicitado);

    return 0;
}
