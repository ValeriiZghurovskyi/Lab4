#pragma once
#include <iostream>


class Circle
{
	double x;
	double y;
	double radius;
public:
	Circle();
	Circle(double x1, double y1, double r1);

	void SetX(double x1);
	void SetY(double y1);
	void SetRadius(double r1);

	double GetX();
	double GetY();
	double GetRadius();
	double Lenght();

	void printCircle();

	Circle& operator++();
	Circle& operator++(int notused);
	Circle& operator*(double n);

};


