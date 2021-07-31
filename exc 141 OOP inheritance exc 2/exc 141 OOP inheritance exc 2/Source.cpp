#include"Shape.h"
#include"Rectangle.h"
#include"Circle.h"

int main() {
	Rectangle r(4, 5);
	Rectangle rec(10, 12);
	cout <<"you have " << Rectangle::getCounter() << " rectangle" <<endl;
	Circle c1(2.5);
	cout << "you have " << Circle::getCounter() << " circle with area :" << c1.getArea();
}