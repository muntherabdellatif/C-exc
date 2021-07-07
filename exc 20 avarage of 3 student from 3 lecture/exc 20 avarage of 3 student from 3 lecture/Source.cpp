//write a program to find the avarage of 3 student from 3 lecture:-
#include <iostream>

class student
{
public:
	float mark[3] = { 0.0,0.0,0.0 };
	float average=0;
	void findAverage() {
		average = ((mark[0] + mark[1]+ mark[2]) / 3);
	}
};
void main() {
	student stu1; student stu2; student stu3;
	for (int i = 0; i < 3; i++) {
		std::cout << "input student 1 mark number" << i+1 << " :";
		std::cin >> stu1.mark[i];
		std::cout << "input student 2 mark number" << i+1 << " :";
		std::cin >> stu2.mark[i];
		std::cout << "input student 3 mark number" << i+1 << " :";
		std::cin >> stu3.mark[i];
	}
	stu1.findAverage(); stu2.findAverage(); stu3.findAverage();
	std::cout << "studant 1 average :" << stu1.average << std::endl;
	std::cout << "studant 2 average :" << stu2.average << std::endl;
	std::cout << "studant 3 average :" << stu3.average << std::endl;
}