//
//  Rainfall.cpp
//  YearlyRainfall
//
//  Created by Soheil on 23/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//
#include <iostream>
#include <iomanip>

#include "Rainfall.hpp"
using namespace std;

// constructor
Rainfall::Rainfall(const array<double, 12>&rainfallArray):
rainfalls(rainfallArray){
	
};

double Rainfall::getMonthAmount(int monthNumber) {
	if(monthNumber>12 or monthNumber<1) {
		return -1;
	} else {
		return rainfalls[monthNumber-1];
	}
};

void Rainfall::setMonthAmount(int monthNumber, double rainfallValue) {
	if(monthNumber>12 or monthNumber<1 or rainfallValue<0) {
		cout << "Entered value(s) are not valid: ";
		
		if(rainfallValue<0) {
			cout << "'wrong rainfall value' ";
		}
		if(monthNumber>12 or monthNumber<1) {
			cout << "'wrong month number' ";
		}
		
		cout << endl;
	} else {
		rainfalls[monthNumber-1] = rainfallValue;
	}
}

// show the highest rainfall amount and its month
void Rainfall::getHighest() {
	double temp = 0;
	int index = 0;
	for (int i=0; i<12; i++) {
		if(rainfalls[i] > temp) {
			temp = rainfalls[i];
			index = i;
		}
	}
	
	cout << "The highest rainfall amount is " << temp << " in " << getMonthNameByNumber(index+1) << endl;
}

// show the lowest rainfall amount and its month
void Rainfall::getLowest() {
	double temp = rainfalls[0];
	int index = 0;
	for (int i=1; i<12; i++) {
		if(rainfalls[i] < temp) {
			temp = rainfalls[i];
			index = i;
		}
	}
	
	cout << "The lowest rainfall amount is " << temp << " in " << getMonthNameByNumber(index+1) << endl;

}

// return month name by its number
string Rainfall::getMonthNameByNumber(int monthNumber) {
	string months [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	return months[monthNumber-1];
}


