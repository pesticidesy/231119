#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��
//#define SQUARE(X) X*X
//д���ʱ����У�����������
//#define SQUARE(X) (X)*(X)
//
//int main() {
//	/*int r = SQUARE(5);*/
//	int r = SQUARE(5 + 1);
//	printf("%d\n", r);
//	return 0;
//}

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main() {
//	int a = 5;//6 7
//	int b = 4;//5
//	int m = MAX(a++, b++);
//	//Ԥ����:int m = (a++)>(b++)?(a++):(b++);
//	printf("%d ", m);//6
//	printf("%d %d\n", a, b );//7 5
//	return 0;
//}

//��c������Ƚ��ʡ�
//������Ա������������


//�ٶ�������
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
#include <stddef.h>
struct S {
	char c1;
	int i;
	char c2;
};

#define OFFSETOF(type,m_name)    (size_t)&(((type*)0)->m_name)
int main() {
	struct S s = { 0 };
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));  
	printf("%d\n", OFFSETOF(struct S, c2));
	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i));
	//printf("%d\n", offsetof(struct S, c2));
	return 0;
}