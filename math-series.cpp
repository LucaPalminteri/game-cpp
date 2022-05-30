#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>

void infiniteSerie(int powN);
double seriesPi(int powN);
void fractionSimplifier(int a, int b);
int calcDiv(int x);

using namespace std;

int main()
{
	
//	float result = seriesPi(2);
//	cout << result << endl;
//	
//	cout << sqrt(6*result);

	int count = 0;

	for(int i=2; i<=1000; i++)
	{
		if(
			i == 2 ||
			i == 3 ||
			i == 5 ||
			i == 7 ||
			i % 2 == 1 && 
			i % 3 != 0 && 
			i % 4 != 0 && 
			i % 5 != 0 && 
			i % 6 != 0 && 
			i % 7 != 0 && 
			i % 8 != 0 && 
			i % 9 != 0
		)
			
		{
			count++;
			cout << count << ": " << i << endl;
		}
		
		if(i == 100 || i == 1000 || i == 10000)
		{
			cout << "Porcentage: " << count << "/" << i << " = "<< (float)count/(float)i << endl;
			fractionSimplifier(count,i);
		}
	}
	
	return 0;
}

void infiniteSerie(int powN)
{
	float n = 0;
	for(int i=1; i<=10000; i++)
	{
		n += 1/(float)pow(i,powN);
		printf("\nPow %d: + 1 / %d = %f\n",powN,i,n);
	}
}

double seriesPi(int powN)
{
	double n = 0;
	for(int i=1; i<=10000; i++)
	{
		n += 1/(float)pow(i,powN);
	}
	return n;
}

void fractionSimplifier(int a, int b)
{
	int x = calcDiv(a), z = calcDiv(b), res;
	if(a % x == 0 && b % x == 0) res = x;
	else{
		if(a % z == 0 && b % z == 0) res = z;
		else res = 1;	
	}
	
	int resA = a/res, resB = b/res;
	printf("\n--- %d - %d --(result = %d) ---\n\n",a/res,b/res,res);
}

int calcDiv(int x)
{
	for(int i=9; i>1; i--)
	{
		if(x % i == 0) return i;
	}
}
