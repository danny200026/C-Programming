#include <stdio.h>
main()
{
      int i;
      int i1, i2, i3, i4;
      int total;
      
      scanf("%d", &i);
      
      i1 = i % 10;                          // ���Ӧ�� 
      i2 = (i % 100 - i % 10) / 10;         // ���Q���
      i3 = ((i % 1000) - (i % 100)) / 100;  // ���ʦ��
      i4 = i / 1000;                        // ���d���
      
      total = i1 + i2 + i3 + i4;
      
      printf("%d", total); 
}
