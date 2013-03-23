/*
ITS240-01
Lab 02
Ch3p129PE2
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	float tempFahrenheit, tempCelcius;

		//input the temperature in Celcius
	printf("Enter the temperature in degrees Celcius: ");
	scanf("%f", &tempCelcius);

	//convert to Fahrenheit
	tempFahrenheit = ((9.0  / 5.0) * tempCelcius) + 32.0;

	//display temperature
	printf("\n%f degrees Celcius is equivalent to %f degrees Fahrenheit\n", tempCelcius, tempFahrenheit);

	return 0;
}