#include<iostream>
using namespace std;

int numero=12; 
char a=´b´; 
int numero2=14; 
int *puntero;

int main(){
	puntero=&numero;
	cout<<"numero"<<puntero<<endl;
	cout<<"memoria char"<<&a<<endl;
	cout<<"memoria entero"<<&numero2<<endl;
	return 0;
}
# Apuntadores
