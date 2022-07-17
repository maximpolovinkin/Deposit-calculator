#include<iostream>
#include<cmath>
using namespace std;



void counting();
void countingForPensia();

int main(){
	counting();
}

void counting() {

	int  years=-1;
	double years2;
	long double procent=4.0;
	int babki;
	double b;

	cin >> years2  >> babki;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 4:  procent = 4; years = 122; break;
	case 6:  procent = 4.25; years = 181; break;
	case 1:  procent = 4.5; years = 367; break;
	case 2:  procent = 4.75; years = 731; break;
	default: procent = 4.7; years = 547;
	}

	if (babki >= 1000000) {
		procent += 0.05; 
		procent += 0.000000000000002;
	   // procent=ceil(procent*100)/100;
		//procent -= 0.5;
	}
	//if (years != 367 && years != 2) { procent /= 12; }
	//procent = round(procent * 1000)/1000;
//	babki = babki * pow((1 + procent / 100), years);
	babki = babki + (babki * procent * years) / 365 / 100;

	cout << ceil(babki);
	cout << "\n\n\n";

}