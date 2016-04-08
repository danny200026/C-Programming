// "4-18.c"
#include <stdio.h>
main()
{
	int a, b, c;	// 三個非零的整數
	scanf("%d%d%d", &a, &b, &c);

	   /* 利用判別式： "b * b - 4 * a * c"  */
	if (b * b - 4 * a * c < 0)	// 判斷是否為兩相異虛根
		printf("-1\n");

	else if (b * b - 4 * a * c == 0)	// 判斷是否為重根
		printf("0\n");

	else if (b * b - 4 * a * c > 0)	// 判斷是否為兩相異實根
		printf("1\n");
}