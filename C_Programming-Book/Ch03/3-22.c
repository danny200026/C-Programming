#include <stdio.h>
main()
{
      int a, b, c, d;
      int area, length;
      
      printf("請分別輸入四個整數\n");
      printf("必須要保證 c > a 和 d > b\n"); 
      
      printf("a = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
      printf("c = ");
      scanf("%d", &c);
      
      printf("d = ");
      scanf("%d", &d);
      
      
      area = (c-a) * (d-b);            // 計算面積
      length = 2 * ((c-a) + (d-b));    // 計算周長 

      printf("面積為：%d\n", area);
      printf("周長為：%d", length); 
}
