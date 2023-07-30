//在一个有序数组中查找某个数字n。
//核心，二分查找


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//找七
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的个数
//	
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//第一次求中间值
//
//		if (arr[mid] < k)//左边
//			left = mid + 1;
//		else if (arr[mid] > k)//右边
//			right = mid - 1;
//		else
//		{
//			printf("找到了！\n下标是：");
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了\n");
//	return 0;
//}