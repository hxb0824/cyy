//二级分类

/**#include<stdio.h>
int  main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int z=0, k;
	int ze = sizeof(arr) / sizeof(arr[0]);
	int y = ze - 1;
	scanf_s("%d", &k);
	while (z <=y)
	{
		int zo = (z + y) / 2;
		if (arr[zo] > k)
		{
			y = zo - 1;
		}
		else if (arr[zo] < k)
		{
			z = zo + 1;
		}
		else
			printf("zhao dao l %d", zo);
		break;
	}

	return 0;
}/**/