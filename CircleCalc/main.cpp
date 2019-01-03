#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
	cout << "Circle Calculator" << endl << endl;

	//get radius from user
	double radius = 0.0;
	cout << "Enter radius: ";
	cin >> radius;

	// make calculations

	double pi = 3.14159;
	double diameter = 2.0 * radius;
	double circumference = pi * diameter;
	double area = pi * radius * radius;
	
	// round to one decimal place
	circumference = round(circumference * 10.0) / 10.0;
	area = round(area * 10.0) / 10.0;

	// write to console
	cout << "Diameter: " << diameter << endl
		<< "Circumference: " << circumference << endl
		<< "Area " << area << endl;
	

	system("pause");
	return 0;
}