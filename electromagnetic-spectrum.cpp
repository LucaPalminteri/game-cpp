#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;
void showInfo(string name, int frec1, int frec2, int longt1, int longt2);
void cuadratic(float a, float b, float c);

int main()
{
//	cout << "~~~~~~~~~~~~~~ Electromagnetic Spectrum ~~~~~~~~~~~~~~" << endl;
//	cout << "_____________________________________" << endl;
//	
//	showInfo("Radio",0,108,108,0);
//	
//	showInfo("Microwave",2,2,108,0);
//	
//	showInfo("Infrared",2,2,108,0);
//	
//	showInfo("Visible",2,2,108,0);
//	
//	showInfo("Ultraviolet",2,2,108,0);
//	
//	showInfo("X-ray",2,2,108,0);
//	
//	showInfo("Gamma ray",2,2,108,0);

	cuadratic(2,3,-5);
	
	return 0;
}

void showInfo(string name, int frec1, int frec2, int longt1, int longt2)
{
	cout << "~~ " << name << endl;
	cout << "Frecuency(Hz): 10" << frec1 << "Hz - " << frec2 << endl;
	cout << "Wavelength(m): " << longt1 << "m - " << longt2 << endl;
	cout << "_____________________________________" << endl;
	//cout << endl;
}

void cuadratic(float a, float b, float c)
{
	float x_1, x_2;
	x_1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
	x_2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
	printf("x1: %.2f\nx2: %.2f",x_1,x_2);
}
