/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 David La Rosa
 */

using namespace std;

#include <iostream>
#include <string> 

int main() {

	int a, b, c;
	int discriminant, result;
	int x1, x2;

	cout << "A cuadratic equations is expresed a * x^2 + b * x + c = 0\n";
	cout << "Insert a quadratic equation elements a, b, c: ";

	cin >> a;
	cin >> b;
	cin >> c;


	discriminant = (b * b) - (4 * a * c);

	if (discriminant < 0) {
	
		cout << "No real result\n";
		return 1;
	}

	x1 = (discriminant - b) / (2 * a);
	x2 = (-discriminant - b) / (2 * a);

	cout << "The result is x1:" << x1 << "  x2:" << x2;

}