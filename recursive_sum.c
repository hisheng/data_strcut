#include <stdio.h>

/*求和 1-m */ 

int sum(int m)
{
	m--;
	if (m > 0)
		return m + sum(m--)
	else
		return m;
}


int main(int argc, char const *argv[])
{
	/* code */
	printf("%d \n", sum(5));
	return 0;
}