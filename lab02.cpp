/************************************
 * Выполнил: Чепуштанов Е.П.        *
 * Группа: ПИ-231                   *
 * Лаба 2, вариант 25               *
 * https://onlinegdb.com/6EfCn-miX  *
*************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double R, R0, B, T, T0, temp1, temp2;
  
  cout << "Введите T0 = ";
  cin >> T0;
  cout << "Введите B = ";
  cin >> B;
  cout << "Введите R0 = ";
  cin >> R0;
  cout << "Введите первое значение T = ";
  cin >> T;
  cout.precision(4);
  
  do {
    temp1 = T + 273;
    temp2 = ( B * (T0 - temp1) ) / (T0 * temp1);
    R = R0 * exp(temp2);
    
    cout << "При T = " << T << " R = " << R << endl;
    
    T += 10;  
  } while (T < 50);
  
  while (T < 201) {
    temp1 = T + 273;
    temp2 = ( B * (T0 - temp1) ) / (T0 * temp1);
    R = R0 * exp(temp2);
    
    cout << "При T = " << T << " R = " << R << endl;
    
    T += 25;
  }
  
  return 0;
}
