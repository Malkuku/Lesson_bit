//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//
////void Swap(int x, int y)//void,表示函数不返回任何值，return一般只能返回一个值
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////
////}//x,y与a,b的地址不同，所以这个函数没有起效，所以应该用指针
//
//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}//指针，一般要改变外部的值如a,b
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int b = 20;
//	int* pb = &b;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	// 函数，交换两个整形的值
//	Swap( &a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}