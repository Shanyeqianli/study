#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

///////初始化为零！！！
//1.  void init(int* shou,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(shou + i) = 0;
//	}
//}
// 2..
//void init(int arr[], int sz)
//{
//	int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			arr[i] = 0;
//		}
// }
///////倒置元素
//  1....void reverse(int* arr, int sz)
//{
//	int i = 0;
//	while ((arr + i)< (arr + sz - i - 1))
//	{
//		//实现倒置！！！
//		int tmp = *(arr + i);
//		*(arr + i) = *(arr + sz - i - 1);
//		*(arr + sz - i - 1) = tmp;
//		i++;
//	}
//}
//2.....
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
////////写一个print函数
//void print(int* arr, int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", *(arr + a));
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	/*init(arr,sz);*/
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
 
//void change(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	while (i<sz)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		i++;
//	}
//	printf("\n");
//}
//int main()
//{
//	//交换两个数组的元素
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	print(arr2, sz);
//	change(arr1, arr2, sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

////////统计二进制中1的个数
//int count_bit_one(int a)
//{
//	int count = 0;
//	int  i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (((a>>i) & 1) == 1)
//		{
//			count++;
//		}
//    }
//	return count;
//}
//
//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;//其实a/2就相当于a的二进制位向右移动1位
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d ", count);
//	return 0;
//}
////////计算两个数二进制不同的位数
//int count_difference(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int b = 3;
//	int result = count_difference(a, b);
//	printf("%d ", result);
//	return 0;
//}

//void get_ji(int a)
//{
//	printf("奇数位 ");
//    for(int i=30;i>=0;i-=2)
//	{
//		if ((a >> (i)) & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//	}
//	printf("\n");
//}
//void get_ou(int a)
//{
//	printf("偶数位 ");
//	for (int i = 31; i >=1; i -= 2)
//	{
//		if ((a >> (i)) & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 3;
//	 get_ou(a);
//	 get_ji(a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	int b = 9;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

void print(int* p, int sz)
{
	for (int a = 0; a < sz; a++)
	{
		printf("%d,", *(p + a));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}