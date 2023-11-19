#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//宏
//#define SQUARE(X) X*X
//写宏的时候该有（）尽量加上
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
//	//预处理:int m = (a++)>(b++)?(a++):(b++);
//	printf("%d ", m);//6
//	printf("%d %d\n", a, b );//7 5
//	return 0;
//}

//《c语言深度解剖》
//《程序员的自我修养》


//百度面试题
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
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