// "4-19.c"
#include <stdio.h>
main()
{
	int a, b, c;	// 三個非零的整數
	scanf("%d%d%d", &a, &b, &c);

	   /* 利用三角形特性：任兩邊邊長相加必定大於另一邊 之長度 */
	if ((a + b > c) && (b + c > a) && (a + c > b))	
		printf("1\n");

	else
		printf("0\n");
}