#include<stdio.h>

int main(int argc, char const *argv[])
{
	int i=4,j=0;

while (i>=0)
{

	i--;
	j++;
	if (i == j)
	{
		continue ;
	}
	else
	{
		printf("%d %d\n",i,j);
	}
	
}

      	
	return 0;
}
