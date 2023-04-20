#include "class.h"
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

Circle::Circle() {
	x = 0; y = 0;
	radius = 1;
}

Circle::Circle(double x1, double y1, double r1) {
	x = x1; y = y1;
	radius = r1;
}

void Circle::SetX(double x1) {
	x = x1;
}

void Circle::SetY(double y1) {
	y = y1;
}

void Circle::SetRadius(double r1) {
	radius = r1;
}

double Circle::GetX() {
	return x;
}

double Circle::GetY() {
	return y;
}
double Circle::GetRadius() {
	return radius;
}
double Circle::Lenght() {
	return 2 * radius * M_PI;
}

void Circle::printCircle() {
	cout << "Coordinates: ";
	cout << "(" << x << ", " << y << ")"<< endl;
	cout << "Radius: " << radius << endl;
	cout << "Circle lenght: " << 2 * M_PI * radius << endl;
	cout << "-------------------------" << endl;
}

Circle& Circle::operator++() {
	this->x = ++x;
	return *this;
}

Circle& Circle::operator++(int notused) {
	this->y = ++y;
	return *this;
}

/*
Circle& Circle::operator++(int notused) {
	Circle temp = *this;
	this->y = ++y;
	return temp;
}
*/


Circle& Circle::operator*(double n) {
	this->radius = radius * n;
	return *this;
}