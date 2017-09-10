#include <iostream>
using namespace std;

void for_recur(int n, int m=0){
	if (n==m)
		return;
	cout << "hi!";
	return for_recur(n, ++m);
}

void crec(int n, int m=0){
	if (n==m)
		return;
	cout << m;
	return crec(n, ++m);
}

void decre(int n, int m=0){
	if (n==m)
		return;
	return decre(n, ++m);
	cout << m;	
}

void num_pri(int n, int m=2){
	if (m==n){
		cout << "Es primo";
		return;
	}
	else if (n%m==0){
		cout << "No es primo";
		return;
	}return num_pri(n, ++m);
}
int main(){
//	for_recur(5);
//	cout << "\n1\n";
	decre(5);
	cout << "\n2\n";
//	crec(5);
//	cout << "\n3\n";
//	num_pri(5);
//	cout << "\n4\n";
	return 0;
}
