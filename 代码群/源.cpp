#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将于一分钟内关机，如输入，熬夜搬砖，则取消关机\n");
	scanf("%c", input);
	if (strcmp(input, "熬夜搬砖") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	printf("primary a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after a=%d,b=%d", a, b);

	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a, count = 0;
	int ret;
	printf("Enter a:");
	scanf_s("%d", &a);
	if (a < 0)
		a = -a;
	while (a)
	{
		ret = a % 10;
		if (ret == 1)
		{
			count++;
		}
		a /= 10;
	}
	printf("count=%d\n", count);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int num, count = 0, i;
	scanf_s("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1)==1)
			count++;
	}
	printf("%d", count);
	return 0;
}*/
