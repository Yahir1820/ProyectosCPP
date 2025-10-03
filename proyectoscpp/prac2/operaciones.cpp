// Programa que solicite dos números y unsigno de opeación
// +, -, y *; y muestre el resultado de la operacion de las formas
// 5 - 2 = 3
#include <iostream>
using namespace std;

int main () {
   short int num1 = 0;
   short int num2 = 0;
   char signo;

   cout << "Ingresa dos numeros enteros: ";
   cin >> num1 >> num2; 
   cout << "Ingresa u signo de operacion + ó - ó *:  ";
   cin >> signo;

   cout << "num1= " << num1 << "\nnum2= " << num2<< "\nsigno: "<< signo;

 return 0;
}