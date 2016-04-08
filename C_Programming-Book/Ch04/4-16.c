// "4-16.c"
#include <stdio.h>
main()
{
	int a = 0, b = 0;		// 點 (a, b) 
	int c = 0, d = 0;		// 點 (c, d)
	int area = 0;	// 由 (a, b) 和 (c, d) 兩對角所組成的長方形面積

	printf("請輸入 '點 (a, b)' 的資料：");
	scanf("%d%d", &a, &b);
	printf("請輸入 '點 (c, d)' 的資料：");
	scanf("%d%d", &c, &d);

	if ((a == c) || (b == d))	// 判斷是否為"垂直共線"(x軸) 或 "水平共線"(y軸)
		area = 0;
	else if ( (c - a) * (d - b) < 0)	// 判斷面積是否為負
		area = - (c - a) * (d - b);
	else
		area = (c - a) * (d - b);

	printf("面積為：%d\n", area);
}