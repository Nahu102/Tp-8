#include <iostream>
#include <string.h>
using namespace std;

void esAnagrama(char plb1[100],char anagrama[100])
{
	int contador;	char caracter,caracter2;
	int long1=strlen(anagrama);
	int long2=strlen(plb1);
	if(long1==long2)
	{
		for(int i=0;i!=long1;i++)
		{
			caracter=anagrama[i];
			for(int x=0;x!=long2;x++)
			{
				caracter2=plb1[x];
				if(caracter==caracter2)
				{
					contador++;
					break;
				}
			}
		}	
	}
	if(contador==long1)
	{
		cout<<"si es un anagrama";
	}
	else
	{
		cout<<"no es un anagrama";
	}
}
int main()
{
	char plb1[100],anagrama[100];
	cout<<"ingrese el anagrama: ";
	cin.getline(anagrama,100);
	cout<<"ingrese la palabra: ";
	cin.getline(plb1,100);
	esAnagrama(plb1,anagrama);
	return 0;
}
