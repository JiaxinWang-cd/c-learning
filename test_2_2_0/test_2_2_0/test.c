//#include <stdio.h>//std-standard input output
//
//int main()//主函数-程序的入口-main函数有且只有一个
//{
//	//int是整型的意思
//	//void main是过时的写法
//	printf("hehe\n");//c语言本身提供给我们使用的函数
//	//使用要打招呼-使用#include
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n",ch);
//	printf("%d\n",ch);
//	return 0;
//	//%d-打印整型
//	//%c-打印字符
//	//%f—打印小数
//	//%p-以地址的形式打印
//	//%x-打印十六进制
//
//}
//#include <stdio.h>
//int main()
//{
//	printf("sizeof(char)=%d\n", sizeof(char));
//	printf("sizeof(short)=%d\n", sizeof(short));
//	printf("sizeof(int)=%d\n", sizeof(int));
//	printf("sizeof(long)=%d\n", sizeof(long));
//	printf("sizeof(long long)=%d\n", sizeof(long long));
//	printf("sizeof(float)=%d\n", sizeof(float));
//	printf("sizeof(double)=%d\n", sizeof(double));
//	printf("sizeof(long double)=%d\n", sizeof(long double));
//	return 0;
//}
//#include <stdio.h>
//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块内部的变量
//	int num2 = 30;
//	printf("%d\n",num1);
//	printf("%d\n",num2);
//	return 0;
//}
//计算两个数的和
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面！！！！！
	scanf_s("%d%d", &num1, &num2);//&-取地址符号
	sum = num1 + num2;
	printf("sum=%d\n",sum);
	return 0;
}