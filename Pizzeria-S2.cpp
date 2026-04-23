#include <iostream>
#include <iomanip>
using namespace std;



int main() 
{
    //Definir función de precio por diámetro
   float N, N2;
    float ingredientes, diametro, total;
    //entrada
    cout << "Ingresa el diametro de tu pizza : ";
    cin >> N;
    
    cout << "Ingresa catidad de ingredientes : ";
    cin >> N2;

    //operaciones
    diametro = N * 1.5;
    ingredientes = N2 * 2.5;
    total = diametro + ingredientes;

    cout << fixed << setprecision(2);
    
    //salida
    cout << endl << "Precio de pizza : s/" << diametro;
    cout << endl << "Precio de ingredinetes : s/" << ingredientes;
    cout << endl << " Total a pagar : s/" << total;


    system("pause>0");
    return 0;
}