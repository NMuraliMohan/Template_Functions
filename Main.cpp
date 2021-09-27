

#include <iostream>

//int add(int firstArgument, int secondArgument) 
//{
//	int result = 0;
//	result = firstArgument + secondArgument;
//	return result;
//}
//
//double add(double firstArgument, double secondArgument)
//{
//	double result = 0;
//	result = firstArgument + secondArgument;
//	return result;
//}





// Generic template functions
template <typename T>
T add(T t1, T t2)
{
	T result;
	result = t1 + t2;
	return result;
}

int main() 
{
	std::cout << add(5, 10) << '\n';

	std::cout << add(25.6, 25.5) << '\n'; // Narrow conversion 25.5 is converted to 25

	std::cout << add(std::string("Murali"), std::string(" Mohan")) << '\n';

	Fruit apple("apple", 10);
	Fruit banana("banana", 2);
	std::cout << add(apple, banana) << '\n';
}
















