#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;
void showInfo(string name, int frec1, int frec2, int longt1, int longt2);

int main()
{
	cout << "~~~~~~~~~~~~~~ Electromagnetic Spectrum ~~~~~~~~~~~~~~" << endl;
	cout << "_____________________________________" << endl;
	
	showInfo("Radio",0,108,108,0);
	
	showInfo("Microwave",2,2,108,0);
	
	showInfo("Infrared",2,2,108,0);
	
	showInfo("Visible",2,2,108,0);
	
	showInfo("Ultraviolet",2,2,108,0);
	
	showInfo("X-ray",2,2,108,0);
	
	showInfo("Gamma ray",2,2,108,0);
	
	return 0;
}

void showInfo(string name, int frec1, int frec2, int longt1, int longt2)
{
	cout << "~~ " << name << endl;
	cout << "Frecuency(Hz): " << frec1 << "Hz - " << frec2 << endl;
	cout << "Wavelength(m): " << longt1 << "m - " << longt2 << endl;
	cout << "_____________________________________" << endl;
	//cout << endl;
}
