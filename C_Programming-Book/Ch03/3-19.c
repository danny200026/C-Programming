#include <stdio.h>
main()
{
      int i = 0;
      
      scanf("%d", &i);
      
      i = (!(i % 3) && (i % 5)) || (!(i % 5) && (i % 3));
      
      printf("%d", i); 
}
