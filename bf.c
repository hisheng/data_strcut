/*字符串匹配 之 BF 算法 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EOS '\0'

int main(int argc, char const *argv[])
{
	// 文本
	char text[] = "hello , my name is  zhang hai sheng";
	 
	// 对比文本
	char m[] = "name"; 

	int i,len = strlen(m);

	for (int i = 0; *(text + i) != EOS; i++)
	{
		if (memcmp(m,text+i,len) == 0)
			printf("Match m at %d\n", i);
	}

	return 0;
}