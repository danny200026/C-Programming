#include <stdio.h>
main()
{
      int i;
      int i1, i2, i3, i4;
      
      scanf("%d", &i);   // ��J����ƶ�����"1 ~ 100"���� 
      
      i1 = i / 50;                                  // ���o"50��"���ƶq  
      i2 = (i - (50 * i1)) / 10;                    // ���o"10��"���ƶq
      i3 = (i - (50 * i1 + 10 * i2 )) / 5;          // ���o"5��"���ƶq
      i4 = (i - (50 * i1 + 10 * i2 + 5 * i3)) / 1;  // ���o"1��"���ƶq
      
      printf("%d\n", i1);
      printf("%d\n", i2);
      printf("%d\n", i3);
      printf("%d\n", i4);
}
