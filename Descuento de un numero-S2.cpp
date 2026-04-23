
#include "iostream"


using namespace std;

int main()
{
    int N1;
    int N2, N3;
    int N21, N31;
    //entrada 
    cout << "Ingresa el monto : ";
    cin >> N1;

    if ( N1 > 10000)
    {
    //operacion
    N2 = (N1 * 20 ) / 100;
    N21 = N1 - N2;

    //salida 
    cout << endl << " Descuento : " << N2;
    cout << endl << " El nuevo monto es : " << N21;
    }
    else 
    {
        if ( N1 < 10000 )

        { 
            //operacion
            N3 = (N1 * 10) / 100;
            N31 = N1 - N3;
            //salida
            cout << endl << "Descuento : " << N3;
            cout << endl << "El nuevo monto es : " << N31;

        }
    }
    
    
        cin.ignore();
        cin.get();

    
        return 0;
}
