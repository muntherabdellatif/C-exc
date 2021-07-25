#include<iostream>
#include <cmath>
using namespace std;
class Cpolygon {
	float ribsNumber;
	float side;
	float apothem;
protected:
	double pi = 22.0 / 7.0;
	float radius;
public:
	void setPolygon(float Radius,float RibsNumber ) {
		radius= Radius; ribsNumber = RibsNumber; 
		double angle = pi / RibsNumber;
		side = 2 * radius * sin(angle);
		apothem = radius * cos(angle);
	}
	float getRadius() {
		return radius;
	}
	float getRibsNumber() {
		return ribsNumber;
	}
	float getSide() { return side; }
	float getApothem() { return apothem; }
	float polygonArea() {
		return (0.5 * ribsNumber * side * apothem);
	}
	float polygonCirum() {
		return (side * ribsNumber);
	}
};

class circle : public Cpolygon {
public:
	circle(float r) {
		radius = r;
	}
	float circleCirum() {
		return (2 * pi * radius);
	}
	float circleArea() {
		return (pi * radius * radius);
	}
};
class Ccircum : public Cpolygon {


};
int main() {
	circle c(20);
	cout << " my circle radius is :" << c.getRadius() << endl;
	cout << " my circle area is :" << c.circleArea()<<endl;
	cout << " my circle cirum is :" << c.circleCirum()<<endl;
	cout << "\n------------------------------------------\n";
	Cpolygon p;
	p.setPolygon(20,7);
	cout << " my polygon Ribs Number is :" << p.getRibsNumber() << endl;
	cout << " my polygon radius is :"<<p.getRadius() << endl;
	cout << " my polygon side is :" << p.getRadius() << endl;
	cout << " my polygon apothem is :" << p.getApothem() << endl;
	cout << " my polygon area is :" << p.polygonArea() << endl;
	cout << " my polygon cirum is :" << p.polygonCirum() << endl;
}