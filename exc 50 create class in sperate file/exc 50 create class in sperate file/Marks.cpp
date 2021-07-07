#include"Marks.h"

Marks::Marks(string c, float m1, float m2, float m3) {
	mark1 = m1; mark2 = m2; mark3 = m3; name = c;
}
float Marks::Average() {
	return ((mark1 + mark2 + mark3) / 3);
}
string Marks::getName() {
	return name;
}