//��һ�����������в���ĳ������n��
//���ģ����ֲ���


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����
//	int sz = sizeof(arr) / sizeof(arr[0]);//����ĸ���
//	
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//��һ�����м�ֵ
//
//		if (arr[mid] < k)//���
//			left = mid + 1;
//		else if (arr[mid] > k)//�ұ�
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ�\n�±��ǣ�");
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����\n");
//	return 0;
//}