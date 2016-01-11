#include <stdio.h>
main()
{
      int i;
      int i1, i2, i3, i4;
      
      scanf("%d", &i);   // 块俱计斗ざ"1 ~ 100"ぇ丁 
      
      i1 = i / 50;                                  // 眔"50じ"计秖  
      i2 = (i - (50 * i1)) / 10;                    // 眔"10じ"计秖
      i3 = (i - (50 * i1 + 10 * i2 )) / 5;          // 眔"5じ"计秖
      i4 = (i - (50 * i1 + 10 * i2 + 5 * i3)) / 1;  // 眔"1じ"计秖
      
      printf("%d\n", i1);
      printf("%d\n", i2);
      printf("%d\n", i3);
      printf("%d\n", i4);
}
