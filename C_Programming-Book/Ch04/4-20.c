// "4-20.c"
#include <stdio.h>
main()
{
	int a, b, sum = 0;
	scanf("%d%d", &a, &b);

	if ( a > b)
		for ( ; b <= a; b++)
			sum += b;

	else if ( b > a)
		for ( ; a <= b; a++)
			sum += a;

	printf("%d\n", sum);
}