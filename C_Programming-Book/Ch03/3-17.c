#include <stdio.h>
main()
{
      int i;
      
      scanf("%d", &i);
      
      i = ((i % 2 == 0)) && (!(i % 2 == 1));
      
      printf("%d", i);
}
