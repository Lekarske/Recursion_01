#include <iostream>
using namespace std;

void for_recur(int n, int m=0){
	if (n==m)//
		return;
	cout << "hi!";//imprime hasta que 'm' llegue al valor de n
	return for_recur(n, ++m);
}

void crec(int n, int m=0){
	if (n==m)
		return;
	cout << m;//imprime desde 0 hasta llegar al valor n-1
	return crec(n, ++m);
}

void decre(int n, int m=0){
	if (n==m)
		return;
	cout << n;	//imprime n hasta que llegue al volor de 1
	return decre(--n, m);
}

void num_pri(int n, int m=2){
	if (m==n/2){//solo es necesario probar hasta n/2
		cout << "Es primo";
		return;
	}
	else if (n%m==0){//si se cumple significa que tiene un divisor exacto sin contar 1 y n
		cout << "No es primo";
		return;
	}return num_pri(n, ++m);
}
int main(){
	int x;
	cout << "ingrese un numero para hallar todas las funciones: ";cin >> x;
	for_recur(x);
	cout << "\n1\n";
	decre(x);
	cout << "\n2\n";
	crec(x);
	cout << "\n3\n";
	num_pri(x);
	cout << "\n4\n";
	return 0;
}
