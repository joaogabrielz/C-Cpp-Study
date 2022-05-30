#include <stdio.h>
#include <stdlib.h>

main()
{
	int *v = (int*) malloc( 3 * sizeof(int) ); 
	if (v)
{
	v[0] = 10;  v[1] = 20;  v[2] = 30;
	printf("%d %d %d\n", v[0], v[1], v[2]);
	
	
	v = (int*) realloc(v, 4 * sizeof(int) );
	if (v)
	{
		v[3] = 40;
		printf("%d %d %d %d\n", v[0], v[1], v[2], v[3]); 
		free(v);
	}
  }
}
