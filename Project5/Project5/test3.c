#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

int char_math(char arr[])
{
	int i = 0;
	while(1)
	{
		if (arr[i] != '\0')
		{
			i++;
		}
		else
			break;
	}
	return i;
}


void my_strcpy(char arr1[], char arr2[], int end1, int end2)
{
	int i = 0;
	int j = end1 < end2 ? end1 : end2;
	for (i = 0;i < j; i++)
	{
		arr1[i] = arr2[i];
	}
}

//简单版本
void my_strcpy_s(char* arr1, char* arr2)
{
	while (*arr1++ = *arr2++)//'\0' 的ASCII值为0；顶级理解！！！
	{
		;
	}

	//while (*arr2 != '\0')
	//{
	//	/**arr1 = *arr2;
	//	arr1++;
	//	arr2++;*/
	//	*arr1++ = *arr2++;
	//}
	//*arr1++ = *arr2;
	//while (*arr1 != '\0')
	//{
	//	/**arr1 = ' ';
	//	if (*arr1 != '\0')
	//	{
	//		arr1++;
	//	}
	//	*/
	//	
	//}
	
}