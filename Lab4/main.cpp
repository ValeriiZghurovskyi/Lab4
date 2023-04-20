#include "class.h"
#include "functions.h"
using namespace std;



int main() {

	Circle* Circles = createCircles();
	cout << "\n\nCircles before changes:" << endl;
	PrintCircles(Circles, 3);

	++Circles[0];
	Circles[1]++;
	Circles[2] * 3;

	cout << "\n\nCircles after changes:" << endl;
	PrintCircles(Circles, 3);

	PrintMaxCircle(Circles, 3);

	return 0;
}