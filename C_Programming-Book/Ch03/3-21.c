#include <stdio.h>
main()
{
      int a, b, c, d;
      int A, B, A1, B1;
      int result = 0;
      
      printf("�Ф��O��J�����\n"); 
      
      printf("a = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
      printf("c = ");
      scanf("%d", &c);
      
      printf("d = ");
      scanf("%d", &d);      
      
      
      // �P�_"��" 
      A = (d-b)/(c-a);
      B = (b-0)/(a-0);
      
      // �P�_"�l��" 
      A1 = (d-b)%(c-a);
      B1 = (b-0)%(a-0);
      
      result = ((A == B) && (A1 == B1));    // �Q��"��"��"�l��"�ӧP�_�ײv�O�_�ۦP
      printf("%d", result);
}
