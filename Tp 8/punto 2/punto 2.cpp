#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char oracion[100];
	int contador=0;    
	cout<<"Ingrese una oracion: ";
	cin.getline(oracion,100);
	bool inPlb=false; // Indica si estamos en una palabra
	for (int i=0;oracion[i]!='\0';i++)
	{
		if(oracion[i]!=' ' && !enPalabra)
		{
    	    contador++;
			inplb=true; // Hemos entrado a una palabra
        }
		else if(oracion[i]==' ')
		{
			inplb=false; // Salimos de la palabra
    	}
	}
    cout << "Numero de palabras: " << contador << endl;
    return 0;
}
