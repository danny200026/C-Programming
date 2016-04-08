// "4-17.c"
#include <stdio.h>
main()
{
	int a = 0, b = 0;		// 點 (a, b) 
	int c = 0, d = 0;		// 點 (c, d)
	int length = 0;	// 由 (a, b) 和 (c, d) 兩對角所組成的長方形周長

	printf("請輸入 '點 (a, b)' 的資料：");
	scanf("%d%d", &a, &b);
	printf("請輸入 '點 (c, d)' 的資料：");
	scanf("%d%d", &c, &d);

	if ((a == c) || (b == d))	// 判斷是否為"垂直共線"(x軸) 或 "水平共線"(y軸)
	{
		length = 0;
		printf("點 (a, b) 和 點 (c, d) 互為'垂直'或'水平'共線");
	}

	else if ((c - a) < 0 || (d - b) < 0)	// 判斷兩邊邊長是否為負
	{
		if ((c - a) < 0 && (d - b) > 0)	// 如果 x 座標相減為負
			length = 2 * ((-1) * (c - a) + (d - b));

		else if ((c - a) > 0 && (d - b) < 0)	// 如果 y 座標相減為負
			length = 2 * ((c - a) + (-1) * (d - b));

		else if ((c - a) * (d - b) > 0)	// 如果 x、y 座標相減皆為負
			length = - 2 * ((c - a) + (d - b));

		printf("周長為：%d\n", length);
	}
		
	else	// 如果 x、y 座標相減皆為正
	{
		length = (c - a) * (d - b);		
		printf("周長為：%d\n", length);
	}
}