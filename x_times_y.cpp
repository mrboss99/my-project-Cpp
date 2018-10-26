#include "pch.h"
#include <iostream>
using namespace std;
int main() {

	int x, y;
	float p;
	cout << "pleas enter integer number:" << "\n";
	cout << "x =";
	cin >> x;
	cout << "y =";
	cin >> y;
	p = y % x;
	if (p == 0) {
		cout << "y multiply x ";
	}
	else {
		cout << "y down`t multiply x";
	}
	cin.get();
	cin.get();
	return 0;
}
// test