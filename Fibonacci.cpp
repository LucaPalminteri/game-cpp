#include<conio.h>
#include<stdio.h>
#include<math.h>

int main(){
	
	int const ITERATE = 30;
	long int n[ITERATE];
	double phi;
	n[0] = 1;
	n[1] = 1;
	
	double goldn = (1+sqrt(5))/2;
	
	printf("\n\t~~~~~~~~~~~~ FIBONACCI ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t|\t\t\t\t\t\t\t|\n");
	
	for(int i=0;i<ITERATE;i++)
	{
		if(i >= 2) 
		{
			n[i] = n[i-2] + n[i-1];
			phi = (double) n[i]/n[i-1];
		}
		
		printf("\t|\t%d\t%d\t%.20f\t\t|\n",i+1,n[i],phi);	
	}
	
	printf("\t|\t\t\t\t\t\t\t|\n");
	printf("\t---------------------------------------------------------\n");
	
	printf("\n\t\t\t%.20f",goldn);
	
	getch();
	return 0;
}
