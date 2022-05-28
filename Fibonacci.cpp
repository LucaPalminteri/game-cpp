#include<conio.h>
#include<stdio.h>
#include<math.h>

void calcPhi(int iter);

double const PHI = (1+sqrt(5))/2;

int main(){
	
	int const ITERATE = 30;
	long int n[ITERATE];
	double phiCount;
	n[0] = 1;
	n[1] = 1;
	
	printf("\n\t~~~~~~~~~~~~ FIBONACCI ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t|\t\t\t\t\t\t\t|\n");
	
	for(int i=0;i<ITERATE;i++)
	{
		if(i >= 2) 
		{
			n[i] = n[i-2] + n[i-1];
			phiCount = (double) n[i]/n[i-1];
		}
		
		printf("\t|\t%d\t%d\t%.20f\t\t|\n",i+1,n[i],phiCount);	
	}
	
	printf("\t|\t\t\t\t\t\t\t|\n");
	printf("\t---------------------------------------------------------\n");
	
	printf("\n\t\t\t%.20f\n\n",PHI);
	
	calcPhi(10);
	
	
	getch();
	return 0;
}

void calcPhi(int iter)
{
	double h,a=1;
	
	for(int i=0;i<iter;i++)
	{
		h = a * PHI;
		printf("\n\t%.8f \tx \t%.8f\n",a,h);
		a = h;
	}
}
