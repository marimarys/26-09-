#include <iostream>
using namespace std;
int main() {
	/* //2
	int a;
	cin >> a;
	if (a > 0) {//true
		a += 1;
	}
	else ( a < 0 ) a -= 2; {// a = a - 2;
	}
	cout << a << endl;
	*/
	//3 
	/*
	int a;
	cin >> a;
	if (a > 0) {//true
		a += 1;
	}
	else if (a < 0) {
		a -= 2;
	}
	else if (a == 0) {
		a = 10;
	}
	cout << a << endl;
	*/
	//4
	/*
	int a, b, c;
	int k = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		k++;

	}

	cout << k << endl;
	*/
	//6
	/*
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
	}
	else if (b > a) {
		cout << b << endl;
	}
	else if (a == b) {
		cout << "equals" << endl;
	} */
	//7 Даны два числа. Вывести порядковый номер меньшего из них.
	/*
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
	}
	else if (b > a) {
		cout << b << endl;
		
	}
	*/
	//8  Даны два числа. Вывести вначале большее, а затем меньшее из них. 
	
	int a, b;
	cin >> a >> b;
	if (a > b) { cout << a << b << endl;
	}
	if (b > a) { cout << b << a << endl;
	
	}
}
