#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

int main()
{
	int t1 = test1();
	printf("text1: %d\n", t1);
	// �ݹ�
	int i = 0;
	int j = 0;
	printf("������>:(test1_2)");
	scanf("%d", &i);
	int t1_2 = test1_2(i, j);
	printf("test1_2: %d\n", t1_2);



	//test3  ��������
	char a = 3;
	char b = 127;
	char c = a + b;

	printf("����������%d\n", c);

	//ʵ��init���� ��ʼ������ȫΪ0
	int arr[10] = { 0 };
	init(arr);
	//��ӡ
	DisplayInit(arr);
	//����
	reverse(arr);
	printf("\n");
	DisplayInit(arr);
	printf("\n");
	//���������С
	int sz = sizeof(arr) / sizeof(arr[0]);
	//

	char arr1[50] = "xxxxxxxxxxxxxxxxxxxxxxxx";
	char arr2[] = "I want to play ys!";
	//ģ����������С
	int arr1_end = char_math(arr1);
	int arr2_end = char_math(arr2);
	//ģ��strcpy��������
	
	DisplayInit_c(arr1,arr1_end);
	DisplayInit_c(arr2,arr2_end);
	

	
	/*my_strcpy(arr1, arr2, arr1_end, arr2_end);
	DisplayInit_c(arr1);
	DisplayInit_c(arr2);*/
	
	//�򵥰汾
	my_strcpy_s(arr1, arr2);
	DisplayInit_c(arr1, arr1_end);
	DisplayInit_c(arr2, arr2_end);

	return 0;
}