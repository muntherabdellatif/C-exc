//write a program to copy array B to D ,B should be chosen by the user:-
#include<iostream>
void main()
{
	int a, b, c[5], d[5];
	for (a = 0; a < 5; a++)
	{
		std::cout << "c[" << a << "]=";
		std::cin >> c[a];
		d[a] = c[a];
	}
	for (a = 0; a < 5; a++)
		std::cout << "d[" << a << "]=" << d[a] << std::endl;
}