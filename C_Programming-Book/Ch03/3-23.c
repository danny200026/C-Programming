#include <stdio.h>
main()
{
      int a, b, c;
      int result;
      
      printf("�Ф��O��J�T�Ӿ��\n");
      printf(" 'a' ���ର0\n"); 
      
      printf("a = ");
      scanf("%d", &a);
      
      printf("b = ");
      scanf("%d", &b);
      
      printf("c = ");
      scanf("%d", &c);
      
      
      // �Q�� b*b - 4*a*c �����ӧP�O��{���O�_������ 
      result = (b * b - 4 * a * c) == 0;


      printf("%d", result); 
}
