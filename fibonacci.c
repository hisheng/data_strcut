/*斐波那契数列*/

// F[O] = 0;
// F[1]  = 1;
// F[n] = F[n-1] + F[n-2] (n>=2)

#include <stdio.h>
#include <stdlib.h>


fibonacci(n)
{
	if (n < 2 )
		return n == 1 ? 1 : 0;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char const *argv[])
{ 
	int i;
	i = atoi(argv[1]); //字符串转 int
	printf("%d  %d\n",i,fibonacci(i));
	return 0;
}