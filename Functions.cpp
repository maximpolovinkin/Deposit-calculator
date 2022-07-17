#include"Functions.h"
#include<cmath>


int counting( int babki, double years2) {

	int  years = -1;
	long double procent = 4.0;
	double b;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 4:  procent = 4.2; years = 122; break;
	case 6:  procent = 4.5; years = 181; break;
	case 1:  procent = 4.8; years = 367; break;
	case 2:  procent = 5.25; years = 731; break;
	default: procent = 5; years = 547;
	}

	if (babki >= 1000000) {
		procent += 0.05;
		procent += 0.000000000000002;
	}
	
	babki = babki + round(( double)(babki * procent * years) / 365 / 100);

	return babki;
	
}

double returnProcent(int babki, double years2) {

	int  years = -1;
	long double procent = 4.0;
	double b;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 4:  procent = 4.2; years = 122; break;
	case 6:  procent = 4.5; years = 181; break;
	case 1:  procent = 4.8; years = 367; break;
	case 2:  procent = 5.25; years = 731; break;
	default: procent = 5; years = 547;
	}

	if (babki >= 1000000) {
		procent += 0.05;
		procent += 0.000000000000002;
	}
	
	return procent;
}
	
int countingEuro(int babki, double years2) {

	int  years = -1;
	long double procent = 0.01;
	
	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 1:   years = 367; break;
	default:  years = 547; break;
	}

	babki = babki +  round((double)(babki * procent * years) / 365 / 100);

	return babki;
}

int countingDollar(int babki, double years2) {

	int  years = -1;
	long double procent = 0.01;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {

	case 6:   years = 181; break;
	case 1:   years = 367; break;

	}

	babki = babki + round((double)(babki * procent * years) / 365 / 100);

	return babki;

}

int countingForPensioners(int babki, double years2) {

	int  years = -1;
	long double procent = 4.0;
	
	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 4:  procent = 4.2; years = 122; break;
	case 6:  procent = 4.5; years = 181; break;
	case 1:  procent = 4.8; years = 367; break;
	case 2:  procent = 5.25; years = 731; break;
	default: procent = 5; years = 547;
	}

	if (babki >= 100000) procent += 0.1;

	if (babki >= 1000000) {
		procent += 0.05;
		procent += 0.000000000000002;
	}

	babki = babki + round((double)(babki * procent * years) / 365 / 100);
	return babki;

}

double returnProcentPensia(int babki, double years2) {

	int  years = -1;
	long double procent = 4.0;
	double b;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 4:  procent = 4.2; years = 122; break;
	case 6:  procent = 4.5; years = 181; break;
	case 1:  procent = 4.8; years = 367; break;
	case 2:  procent = 5.25; years = 731; break;
	default: procent = 5; years = 547;
	}

	if (babki >= 100000) procent += 0.1;

	if (babki >= 1000000) {
		procent += 0.05;
		procent += 0.000000000000002;
	}
	return procent;
}

int countingForPensionersEuro(int babki, double years2) {

	int  years = -1;
	long double procent = 0.01;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 1:   years = 367; break;
	default:  years = 547; break;
	}

	if (babki >= 1111) procent += 0.1;

	babki = babki + round((double)(babki * procent * years) / 365 / 100);

	return babki;

}

int countingForPensionersDollar(int babki, double years2) {

	int  years = -1;
	long double procent = 0.01;

	if (years2 == 1.5) years = years2 * 10;
	else years = years2;

	switch (years) {
	case 6:   years = 367; break;
	default:  years = 547; break;
	}

	if (babki >= 1335) procent += 0.1;

	babki = babki + round((double)(babki * procent * years) / 365 / 100);

	return babki;

}