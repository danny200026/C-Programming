#include <stdio.h>
main()
{
      int a, b, c, d;
      int A, B, A1, B1;
      int result = 0;
      
      printf("請分別輸入正整數\n"); 
      
      printf("a = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
      printf("c = ");
      scanf("%d", &c);
      
      printf("d = ");
      scanf("%d", &d);      
      
      
      // 判斷"商" 
      A = (d-b)/(c-a);
      B = (b-0)/(a-0);
      
      // 判斷"餘數" 
      A1 = (d-b)%(c-a);
      B1 = (b-0)%(a-0);
      
      result = ((A == B) && (A1 == B1));    // 利用"商"跟"餘數"來判斷斜率是否相同
      printf("%d", result);
}
