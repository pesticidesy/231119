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

#define MAX(x,y) ((x)>(y)?(x):(y))

int main() {
	int a = 5;//6 7
	int b = 4;//5
	int m = MAX(a++, b++);
	//预处理:int m = (a++)>(b++)?(a++):(b++);
	printf("%d ", m);//6
	printf("%d %d\n", a, b );//7 5
	return 0;
}