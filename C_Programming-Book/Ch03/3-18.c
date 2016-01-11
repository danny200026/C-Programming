#include <stdio.h>
main()
{
      int i;
      int i1, i2, i3, i4;
      int total;
      
      scanf("%d", &i);
      
      i1 = i % 10;                          // 计 
      i2 = (i % 100 - i % 10) / 10;         // 计
      i3 = ((i % 1000) - (i % 100)) / 100;  // κ计
      i4 = i / 1000;                        // 计
      
      total = i1 + i2 + i3 + i4;
      
      printf("%d", total); 
}
