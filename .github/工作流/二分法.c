#include <stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	printf("输入你想找的数字：\n");
	scanf("%d", &n);
	int left = 0, right = sz-1;
	while (left<right)
	{
		int mid = (left+right) / 2;
		if (n < arr[mid])
			right = mid - 1;
		else if (n > arr[mid])
			left = mid + 1;
		else {
			printf("这个数字的为置在arr[%d]:\n", mid);
			break;
		}
	}
	if (left == right)
	{
		printf("找不到这个数字！");
	}
	return 0;
}
