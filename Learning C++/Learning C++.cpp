#include <iostream>
#include<math.h>

int main()
{
	double a, b, h;
	std::cout << "Enter side a: ";
	std::cin >> a;
	std::cout << "Enter side b: ";
	std::cin >> b;
	h = sqrt((a * a) + (b * b));
	std::cout << "Hypotenuse is: " << h;
}
