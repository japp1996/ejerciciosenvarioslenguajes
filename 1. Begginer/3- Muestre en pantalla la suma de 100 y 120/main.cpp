#include<iostream>

using namespace std; // If you comment o delete this line you must call cout like this: std::cout<<value;

int main(void)
{
	int num1 = 100;
	int num2 = 120;
	// cout is used cause we are using iostream, if we were using <stdio.h> we call printf() function
	cout << num1 + num2; // Don't confuse ´<<´ with ´<<>>´. It is only two greater equal sign!!
}