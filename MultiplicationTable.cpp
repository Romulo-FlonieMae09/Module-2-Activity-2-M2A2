#include <iostream>
using namespace std;
int main() {
   int n, r, i;
 
 	cout << "Enter an integer: ";
	cin >> n;
	cout << "Enter range: ";
	cin >> r;
		  
   for (i = 1; i <= r; i++)
   cout << n << " * " << i << " = " << n * i << endl;
   
   	cout << endl << "Programmed by: Flonie Mae P. Romulo";
   return 0;
}

