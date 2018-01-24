//
//  main.cpp
//  YearlyRainfall
//
//  Created by Soheil on 23/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include "Rainfall.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
	
	// array of rainfalls in 2016 from Jan to Dec
	const array<double, 12> rainfallData = {215.6, 167.8, 86.3, 85.5, 80.5, 62.4, 118.5, 112.5, 171.8, 48.7, 101.4, 129.6};
	Rainfall Rainfall2016(rainfallData);
	
	// get the rainfall value of second month (Februrary)
	cout << Rainfall2016.getMonthAmount(2) << endl;
	
	// change the rainfall value of second month (Februrary)
	Rainfall2016.setMonthAmount(13, -2);
	Rainfall2016.setMonthAmount(2, 122.9);
	cout << Rainfall2016.getMonthAmount(2) << endl;
	
	// show the highest rainfall
	Rainfall2016.getHighest();

	// show the lowest rainfall
	Rainfall2016.getLowest();
	
	return 0;
}
