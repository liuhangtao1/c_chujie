#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i, temp;
	int arr1[] = { 0 };
	printf("请任意输入整数arr1=:");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int arr2[] = { 0 };
	printf("请任意输入整数arr2=:");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr2[i]);
	}

	int arr[10] = { 0 };
	for (i = 0; i <= sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
