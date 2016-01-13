#include <stdio.h>
main()
{
      int a, b, c;
      int result;
      
      printf("請分別輸入三個整數\n");
      printf(" 'a' 不能為0\n"); 
      
      printf("a = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
      printf("c = ");
      scanf("%d", &c);
      
      
      // 利用 b*b - 4*a*c 公式來判別方程式是否為重根 
      result = (b * b - 4 * a * c) == 0;


      printf("%d", result); 
}
