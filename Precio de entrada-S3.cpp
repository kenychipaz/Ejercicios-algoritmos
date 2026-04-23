
#include "iostream"


using namespace std;

int main()
{
    int N1;
    //entrada
    cout << "Ingresa tu edad : ";
    cin >> N1;
    if ( N1 < 18 )
    //salida 
    cout << endl << "Pagara 7 soles ";
    else if ( N1 >= 18 && N1 <= 50 )
    {
        
        // salida
        cout << endl << "Pagara 15 soles";
        
    }
    else if (  N1 > 50 )
    {
        //salida 
        cout << endl << " Pagara 5 soles";
    
    }


        system("pause>0");
    return 0;
}
