#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
	float n = 0;
	
	for(int i=1; i<=10000; i++)
	{
		n += 1/(float)pow(i,2);
		printf("\n+ 1 / %d = %f\n",i,n);
	}
	
	getch();
	return 0;
}
