/*
//必须放在第一行，不然不生效
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	int a = 0;
	int b = 0;
	//scan蜜汁报错
	scanf("%d %d",&a ,& b);
	int sum = 0;
	sum = a + b;
	printf("sum = %d\n",sum );
	
	return 0;

}//严重性	代码	说明	项目	文件	行	禁止显示状态
//误	C4996	'scanf': This function or variable may be unsafe.Consider using scanf_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.See online help for details.Project1	Q : \c++\project1\Project1\Project1\text2.c	8
*/