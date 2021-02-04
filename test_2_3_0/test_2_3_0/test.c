#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//#include <stdio.h>
//enum sex
//{
//	male,
//	female,
//	non,
//};
//int main()
//{
//	//enum sex s = male; 
//	printf("%d\n",male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", non);// 2
//
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[]= {'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}
//#include <stdio.h>
//int main()
//{
//	/*printf("c:\test\32\test.c\n");
//	printf("c:\\test\\32\\test.c\n");
//	printf("c:\\\test\\32\\test.c\n");
//	printf("%c\n", 'a');
//	printf("%c\n",'\'');*/
//	printf("%s\n","abc");
//	printf("%s\n", "\"");
//	printf("%s\n", "\\\\");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%d\n", strlen("c:\\test\\32\\test.c"));
//	printf("%c\n",'\32');
//	printf("%d\n", '\32');
//	printf("%s\n","'");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗?（1/0）>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("走向人生巅峰！！！\n");
//	else
//		printf("回家卖红薯，淦\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("赶快好好学习吧骚年！！！\n");
//	while (line < 2000)
//	{
//		printf("写一行代码啊啊啊啊啊啊:%d\n",line);
//			line++;
//	}
//	if (line>=2000)
//		printf("给你一个好offer！！！！！！\n");
//	return 0;
//}

#include<stdio.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int a = 300;
//	int b = 505;
//	int sum1 = 0;
//	int sum2 = 0;
//	sum1 = add(num1, num2);
//	sum2= add(a, b);
//	printf("num1+num2=%d\n", sum1);
//	printf("a+b=%d\n", sum2);
//	return 0;
//
//}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int a = 300;
	int b = 505;
	int sum = 0;
	sum = add(num1, num2);
	printf("num1+num2=%d\n", sum);
	sum = add(a, b);
	printf("a+b=%d\n", sum);
	sum = add(54545, 64566456);
	printf("sum=%d\n", sum);
	return 0;

}