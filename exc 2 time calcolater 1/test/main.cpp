// write a program to convert the seconds to minutesand hours like 00:00:00 
#include<iostream>

int main ()
{ 
	int intersec;
	std::cout << "inter the number of secand :";
	std::cin >> intersec;
	int hour = intersec / 3600;
	int min = (intersec % 3600) / 60 ;
	int sec = (intersec % 3600) % 60 ;
	std::cout << hour << ":" << min << ":" << sec << std::endl;
	std::cout << "hh:mm:ss" << std::endl;
	std::cin.get();
}
