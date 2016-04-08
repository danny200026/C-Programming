#include <stdio.h>
main()
{
	int a1, a2, la;	// 點 a(a1, a2)、與原點距離 la
	int b1, b2, lb;	// 點 b(b1, b2)、與原點距離 lb
	int c1, c2, lc;	// 點 c(c1, c2)、與原點距離 lc

	printf("輸入a點的座標 : ");	scanf("%d%d", &a1, &a2);
	printf("輸入b點的座標 : ");	scanf("%d%d", &b1, &b2);
	printf("輸入c點的座標 : ");	scanf("%d%d", &c1, &c2);

	la = (a1 * a1 + a2 * a2);		// 判斷 a 的距離
	lb = (b1 * b1 + b2 * b2);	// 判斷 b 的距離
	lc = (c1 * c1 + c2 * c2);		// 判斷 c 的距離

	if (la <= lb && la <= lc)
	{
		printf("min = a(%d, %d)\n", a1, a2);
	}
	else if (lb <= la && lb <= lc)
	{
		printf("min = b(%d, %d)\n", b1, b2);
	}
	else if (lc <= la && lc <= lb)
	{
		printf("min = c(%d, %d)\n", c1, c2);
	}		
}