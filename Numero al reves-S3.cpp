
#include "iostream"


using namespace std;

int main()
{
    int N;
    int U, D, C;
    //entrada
    cout << "Ingrese un numero de 3 cifras : ";
    cin >> N;
    //operaciones
    U = N % 10;
    D = (N / 10) % 10;
    C = ((N / 10) / 10) % 10;
    //salida
    cout << endl << "Al reves: " << U << D << C;


        system("pause>0");
    return 0;
}
