#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//1��
void string_left_rotate_1(char arr[], int k, int n)
{
	int imp = 0;
	
	while(k)
	{
		//һ������
		int x = 0;
		imp = arr[x];
		
		while(n-1 > x)
		{
			arr[x] = arr[x + 1];
			x++;
		}

		arr[x] = imp;
		k--;
	}
}


//�Ե�����
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;
		left++;
		right--;
	}
	
}


//����:������ת��
void string_left_rotate_2(char* arr, int k)
{
	//ָ�뱣��
	assert(arr);

	int n = strlen(arr);
	//��Ե�
	reverse(arr, arr + k - 1);
	//�ҶԵ�
	reverse(arr + k, arr + n - 1);
	//����Ե�
	reverse(arr, arr + n - 1);
}

//�ж�һ���ַ����Ƿ�Ϊ��һ����ת����
int is_string_rotate_1(char* arr1, char* arr2)
{
	//��ת����һ������
	int n1 = strlen(arr1);//strlen�ǲ������'\0'��
	for (int j = 0; j < n1; j++)
	{
		//int tmp = arr1[0];
		for (int i = 0; i < n1 - 1; i++)//��ʵ��ֻҪ��򽻻�4��
		{
			arr1[i] ^= arr1[i + 1];
			arr1[i + 1] ^= arr1[i];
			arr1[i] ^= arr1[i + 1];
		}
		//arr1[n1 - 2] = tmp;
		if (strcmp(arr1, arr2) == 0)
			return 1;
	}

	return 0;
}

int main()
{
	//char arr[] = { "ABCDEFG" };
	//int k = 0;

	//while(1)
	//{
	//	printf(">:");
	//	scanf("%d", &k);

	//	//Ҳ�����ˡ�\0��,����-1��ȡԪ�ظ���
	//	//bug���޸�
	//	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	//	//�ַ�������
	//	string_left_rotate_2(arr, k);
	//	for (int i = 0; i < n; i++)
	//	{
	//		printf("%c", arr[i]);
	//	}
	//	printf("\n");
	//}

	//�ж�һ���ַ����Ƿ�Ϊ��һ����ת����
	char arr1[] = "ABCDE";
	char arr2[] = "CDEAB";
	int ret = is_string_rotate_1(arr1, arr2);
	if (ret == 1)
	{
		printf("true");
	}
	else
	{
		printf("flase");
	}

	return 0;
}