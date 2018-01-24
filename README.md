# Yearly Rainfall Statistics

This is a program that represents a yearly rainfall statistics. The main input values of this program are twelve numbers, which are the monthly rainfall amount (mm) for a single year. For example: the UK monthly rainfall amount (mm) in 2016 are: 215.6, 167.8, 86.3, 85.5, 80.5, 62.4, 118.5, 112.5, 171.8, 48.7, 101.4, 129.6.

This program has the following public functions:
- getMonthAmount – takes a single argument ( 1 for January, 2 for February, etc) and returns the rainfall amount for that month. Return –1 for an invalid month.
- setMonthAmount – takes an argument as the month and a second argument representing the rainfall amount to be set for that particular month. The function should set the rainfall figure for the given month to the given value. Display an error message for an invalid month or amount.
- getHighest – show the highest rainfall amount and its month.
- getLowest – show the lowest rainfall amount and its month.
- getMean – returns the mean monthly amount for the whole year.
- outputBarChart - display a chart of your data using *.
	amount<60, display one *.
	60<=amount<100, display two *.
	100<=amount<150, display three *.
	150<=amount<200, display four *.
	amount >= 200, display five *.