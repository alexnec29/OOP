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
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);
	size_t resultLen = len1 + len2 + 1; // +1 for the null terminator

	char* result = new char[resultLen];
	strcpy(result, str1);
	strcat(result, str2);

	return result;
}