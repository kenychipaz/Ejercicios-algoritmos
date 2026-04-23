#include <iostream>
using namespace std;

// Mostrar departamento
void mostrarDepartamento(int codigo) 
{
    if (codigo == 1)
        cout << "TUMBES";
    else if (codigo == 2)
        cout << "AREQUIPA";
    else if (codigo == 3)
        cout << "PUNO";
    else
        cout << "DESCONOCIDO";
}

// SI o No, paradas
void mostrarParadas(int codigo) 
{
    if (codigo == 1)
        cout << "Si";
    else if (codigo == 2)
        cout << "No";
    else
        cout << "DESCONOCIDO";
}

int main() 
{
    int N;

    // Ingreso de codigo
    cout << "Ingrese su codigo de salida (4 digitos): ";
    cin >> N;

    // Validar el codigo
    if (N < 1000 || N > 9999) 
    {
        cout << "Error: el codigo debe tener exactamente 4 digitos." << endl;
        return 1;
    }

    // Extraer los dígito
    int digito1   = N / 1000;
    int digitos23 = (N / 10) % 100;
    int digito4   = N % 10;

    // Mostrar
    cout << endl; cout << "Departamento de destino: ";
    mostrarDepartamento(digito1); cout << endl;
    cout << "Hora de salida: " << digitos23 << endl; cout << "Realizan paradas: ";
    mostrarParadas(digito4); cout << endl;

    system("pause>0");
    return 0;
}