#include <stdio.h>
main()
{
	int i, j, k;
	int min = 0;
	scanf("%d%d%d", &i, &j, &k);

	if (i < j && i <k)
		min = i;
	else if (j < i && j < k)
		min = j;
	else if (k < i && k < j)
		min = k;
	
	printf("min = %d\n", min);
}