//#include<stdio.h>
//
//int main(){
//	//输入密码
//	char password[20] = {0};
//	printf("请输入密码：");
//	scanf_s(&password);
//	
//	//清除缓存区
//	int imp = 0;
//	while ((imp = getchar()) != '\n')
//	{
//		;
//	}
//
//
//	//确认密码
//	printf("请确认密码（Y/N）:");
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功！\n");
//	else
//		printf("已取消确认！\n");
//
//
//
//	//用于实现反复输入密码
//
//	return 0;
//}