//#include <stdio.h>//std-standard input output
//
//int main()//������-��������-main��������ֻ��һ��
//{
//	//int�����͵���˼
//	//void main�ǹ�ʱ��д��
//	printf("hehe\n");//c���Ա����ṩ������ʹ�õĺ���
//	//ʹ��Ҫ���к�-ʹ��#include
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n",ch);
//	printf("%d\n",ch);
//	return 0;
//	//%d-��ӡ����
//	//%c-��ӡ�ַ�
//	//%f����ӡС��
//	//%p-�Ե�ַ����ʽ��ӡ
//	//%x-��ӡʮ������
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
//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ�����ڲ��ı���
//	int num2 = 30;
//	printf("%d\n",num1);
//	printf("%d\n",num2);
//	return 0;
//}
//�����������ĺ�
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�棡��������
	scanf_s("%d%d", &num1, &num2);//&-ȡ��ַ����
	sum = num1 + num2;
	printf("sum=%d\n",sum);
	return 0;
}