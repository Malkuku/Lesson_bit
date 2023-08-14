#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"

void reverse(char*right, char*left)
{
	
	while (*right > *left)
	{
		*right ^= *left;
		*left ^= *right;
		*right ^= *left;
		right++;
		left--;
	}
}