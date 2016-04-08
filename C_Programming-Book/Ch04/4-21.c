// "4-21.c"
#include <stdio.h>
main()
{
	int a, b, c;	// 三個非零的整數 (3個三角形的邊長)
	int i, tmp = 0;
	scanf("%d%d%d", &a, &b, &c);

	   // 利用三角形勾股定理特性來判別三角形的種類 (三角形最長邊，預設為 "c > b" 同時 "c > a")
	
	if (b > c) {
		tmp = b;  b = c;  	c = tmp;
		if (a > c) {
			tmp = a;  a = c;  c = tmp;
		}
	}

	if (a > c) {
		tmp = a;  a = c;  c = tmp;
		if (b > c) {
			tmp = b;  b = c;  	c = tmp;
		}
	}
	
	if (a * a + b * b > c * c)	// 判定是否為銳角三角形
		printf("此為銳角三角形：1\n");

	else if (a * a + b * b < c * c)	// 判定是否為鈍角三角形
		printf("此為鈍角三角形：2\n");

	else if (a * a + b * b == c * c)	// 判定是否為直角三角形
		printf("此為直角三角形：3\n");
}