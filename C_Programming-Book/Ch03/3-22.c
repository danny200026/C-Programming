#include <stdio.h>
main()
{
      int a, b, c, d;
      int area, length;
      
      printf("�Ф��O��J�|�Ӿ��\n");
      printf("�����n�O�� c > a �M d > b\n"); 
      
      printf("a = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
      printf("c = ");
      scanf("%d", &c);
      
      printf("d = ");
      scanf("%d", &d);
      
      
      area = (c-a) * (d-b);            // �p�⭱�n
      length = 2 * ((c-a) + (d-b));    // �p��P�� 

      printf("���n���G%d\n", area);
      printf("�P�����G%d", length); 
}
