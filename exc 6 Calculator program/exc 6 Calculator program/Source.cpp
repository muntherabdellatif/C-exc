// Calculator program
#include <iostream>
float a, b, c;
char sign;
void main()
{
	std::cin >> a;
	std::cin >> sign;
	std::cin >> b;
	switch (sign)
	{
	case '+': c = a + b; break;
    case '/': c = a / b; break;
	case '-': c = a - b; break;
	case '*': c = a * b; break;
	}
	std::cout << "=" << c << std::endl;
}