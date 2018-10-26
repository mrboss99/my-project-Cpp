#include "pch.h"
#include <iostream>
using namespace std;
int main() {

	int x, y;
	float p;
	cout << "lotfan Aadad sahih vared konid:" << "\n";
	cout << "x =";
	cin >> x;
	cout << "y =";
	cin >> y;
	p = y % x;
	if (p == 0) {
		cout << "y mazrabi az x ast";
	}
	else {
		cout << "y mazrabi az x nist";
	}
	cin.get();
	cin.get();
	return 0;
}