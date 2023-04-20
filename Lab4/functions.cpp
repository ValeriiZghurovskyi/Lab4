#include "functions.h"
#include "class.h"
#include <iostream>

using namespace std;


Circle* createCircles() {
	Circle* Circles = new Circle[3];
	double x = 0, y = 0, r = 0;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " circle:" << endl;
		cout << "Enter X: ";
		cin >> x;
		cout << "Enter Y: ";
		cin >> y;
		cout << "Enter Radius: ";
		cin >> r;
		Circles[i].SetX(x);
		Circles[i].SetY(y);
		Circles[i].SetRadius(r);
	}
	return Circles;
}

void PrintCircles(Circle* Circles, int num) {
	for (int i = 0; i < num; i++){
		cout << i + 1 << " circle:" << endl;
		Circles[i].printCircle();
	}
}

void PrintMaxCircle(Circle* Circles, int num) {
	int max_index = 0;

	for (int i = 1; i < num; i++) {
		if (Circles[i].Lenght() > Circles[max_index].Lenght()) {
			max_index = i;
		}
	}

	cout << "\nCircle with the max lenght - Circle " << max_index + 1 << ":" << endl;
	Circles[max_index].printCircle();
}