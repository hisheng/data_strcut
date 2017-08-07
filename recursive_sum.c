#include <stdio.h>

/*求和 1-m  《算法图解》*/ 

int sum(int m)
{
	int x,y;
	x = m;
	y = m - 1;
	if (y > 0) /*基线条件*/
		return x + sum(y); /*递归条件*/
	else
		return m;
}


int main(int argc, char const *argv[])
{
	/* code */
	printf("%d \n", sum(5));
	return 0;
}