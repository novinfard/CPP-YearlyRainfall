//
//  Rainfall.hpp
//  YearlyRainfall
//
//  Created by Soheil on 23/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Rainfall_hpp
#define Rainfall_hpp

#include <stdio.h>
#include <string>
#include <array>

class Rainfall {
	
public:
	// constructor initialises array of rainfalls
	Rainfall(const std::array<double, 12> &);
	double getMonthAmount(int);
	void setMonthAmount(int, double);
	void getHighest();
	void getLowest();
	
	/* call function outputBarChart to print mark distribution chart*/
	void outputBarChart();
	
private:
	std::array<double, 12> rainfalls;
	std::string getMonthNameByNumber(int);
};

#endif /* Rainfall_hpp */
