#include "Math.h"
#include <cstdarg>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int Math::Add(int a, int b)
{
	return a + b;
}
int Math::Add(int a, int b, int c)
{
	return a + b + c;
}
int Math::Add(double a, double b)
{
	return a + b;
}
int Math::Add(double a, double b, double c)
{
	return a + b + c;
}
int Math::Mul(int a, int b)
{
	return a * b;
}
int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}
int Math::Mul(double a, double b)
{
	return a * b;
}
int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}
int Math::Add(int count, ...) // sums up a list of integers
{
	int sum = 0;
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; ++i) {
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}
char* Math::Add(const char* str1, const char* str2)
{
	int a = 0, b = 0, p = 1;
	for (int i = strlen(str1)-1; i >=0 ; i--)
	{
		a = a + p * ((int)str1[i]-48);
		p = p * 10;
	}
	p = 1;
	for (int i = strlen(str2) - 1; i >= 0; i--)
	{
		b = b + p * ((int)str2[i]-48);
		p = p * 10;
	}
	int sum = a + b;

	int numDigits = 1;
	int tempSum = sum;
	while (tempSum /= 10) {
		numDigits++;
	}

	char* result = new char[numDigits + 1];

	for (int i = numDigits - 1; i >= 0; i--) {
		result[i] = '0' + sum % 10;
		sum /= 10;
	}

	result[numDigits] = '\0';

	return result;
}