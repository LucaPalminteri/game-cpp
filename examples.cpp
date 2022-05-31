#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float n = 0;

	for(int i=1;i<4192;i*=2)
	{
		if(i != 1)n+=1/(float)i;	
	}
	
	cout << endl;
	cout <<"n= " << n;
	cout << endl;
	
	return 0;
}
