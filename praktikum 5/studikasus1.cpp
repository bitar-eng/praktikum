#include <iostream>
using namespace std;
int calculateSquare(int number) {
return number * number;
}
int main() {
int num = 5;
int hasil = calculateSquare(num);
cout << "Kuadrat dari " << num << " adalah " << hasil << endl;
return 0;
}