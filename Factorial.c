#include <stdio.h>

//int Fac1(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//---↓递归
int Fac2(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
		return n * Fac2(n - 1);
}


int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//ret = Fac1(n);
	ret = Fac2(n);
	printf("%d\n", ret);

	return 0;
}