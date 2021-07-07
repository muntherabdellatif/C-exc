#include"Rectangular.h"
Rectangular::Rectangular(int l, int w) {
	if (l <= 20 && l > 0 && w <= 20 && w > 0)
	length = l; width = w;
}
float Rectangular::getWidth() {
	return width;
}
float Rectangular::getLength() {
	return length;
}
void Rectangular::setLength(float l) {
	if (l <= 20 && l>0) { length = l; }
}
void Rectangular::setWidth(float w) {
		if (w <= 20 && w>0) { length = w; }
}
float Rectangular::getArea() {
	return (width * length);
}
float Rectangular::getperimeter() {
	return (width * 2 + length * 2);
}
void Rectangular::printInfo() {
	cout << "Rectangular width is " << getWidth() << endl;
	cout << "Rectangular length is " << getLength() << endl;
	cout << "Rectangular Area is " << getArea() << endl;
	cout << "Rectangular perimeter is " << getperimeter() << endl;
}
void Rectangular::printShape() {
	for (int i = 0; i < width; i++) {
		for (int i = 0; i < length; i++) {
			cout << "*";
		}
		cout << endl;
	}
}