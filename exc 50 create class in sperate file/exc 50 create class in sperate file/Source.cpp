#include"Marks.h"

void main() {
	Marks studant1("munther", 15, 16, 18);
	cout << "studant " << studant1.getName() << " have an average : ";
	cout << studant1.Average()<<endl;
}
