#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a, b, S;
	cout << "¬ведите стороны \n a= ";
	cin >> a;
	cout << "b=";
	cin >> b;
	S = a * b;
	cout << S;
	return 0;
}