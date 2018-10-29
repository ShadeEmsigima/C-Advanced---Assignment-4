#include "stdafx.h"
#include <iostream>

#include <vector>
#include <algorithm>
#include <functional>
#include "SplitVector.h"
#include "UppercaseItem.h"
#include "RemoveDoubles.h"

//voeg toe aan vector, kijk of jij groter bent dan de laatste, mag jij voor de laatste gaan staan

	//1) Make one template-function that can sort arrays of strings and floats
	template<typename T> T maxOf(T a, T b) {
		return (a > b ? a:b);
	}

	template<typename T> T sort(T a, T b) { // 9 args
		for( i = 0; i <  i++)
			for (int j = 0; j < colours.size(); j++) {
		}
	}

	//a function that can print elements of a vector type string
	void printVectorString(std::vector<std::string> a) { //for a vector that you get
		for (int i = 0; i < a.size(); i++) { // for every element
			std::cout << a.at(i) << " "; //print the element
		}
		std::cout << std::endl;
	}

	//a function that can print elements of a vector type double
	void printVectorDouble(std::vector<double> a) { //for a vector that you get
		for (int i = 0; i < a.size(); i++) { // for every element
			std::cout << a.at(i) << " "; //print the element
		}
		std::cout << std::endl;
	}

int main() {

	std::cout << maxOf<int>(7, 9)<<std::endl;
	std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	printVectorString(colours);
	

	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) de vector in 2 nieuwe vectoren te splitsen, 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
	// 2) alle elementen UPPERCASE te maken.
	// 3) alle dubbele te verwijderen

	

	/*for (std::vector<string>::const_iterator i = colours.begin(); i != colours.end(); ++i) {
		std::cout << *i << ' ';
	}*/

	/*for (int i = 0; i < colours.size; i++) {
		std::cout << colours;
	}*/

	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	printVectorDouble(numbers);//print the elements of vector type double
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) alle negatieve elementen te verwijderen
	// 2) voor alle elementen te bepalen of ze even of oneven zijn
	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen

	system("PAUSE");
}