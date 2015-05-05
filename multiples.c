#include <stdio.h>

int main()
{
	int sum=0;

	for(int i=0;i<1000;i++)
	{
		if((i % 3==0) || (i % 5==0))
			sum+=i;
	}
	printf("The sum of all numbers less than or equal 1000 that are multiples of 3 & 5 is %i\n",sum);
	return 0;
}