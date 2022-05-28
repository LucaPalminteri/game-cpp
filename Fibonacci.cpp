#include<conio.h>
#include<stdio.h>

int main(){
	
	int const ITERATE = 20;
	int n[ITERATE];
	n[0] = 1;
	n[1] = 1;
	
	printf("\n");
	
	for(int i=0;i<ITERATE;i++)
	{
		if(i >= 2) n[i] = n[i-2] + n[i-1];
		printf("\t%d: \t%d\n",i,n[i]);	
	}
	
	getch();
	return 0;
}
