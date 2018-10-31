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

	template<typename T> T minOf(T a, T b) { // extract the smallest
		return (a < b ? a : b);
	}

	template<typename T> T sort(T a) { // 9 args
		for( i = 0; i <  i++)
			for (int j = 0; j < colours.size(); j++) {
		}
	}

	//a function that can print elements of a vector type string
	void printVectorString(std::vector<std::string> a) { //for a vector that you get
		std::cout << "Printing vector of type string: ";
		for (int i = 0; i < a.size(); i++) { // for every element
			std::cout << a.at(i) << " "; //print the element
		}
		std::cout << std::endl;
	}


	void printVectorDouble(std::vector<double> a) { //for a vector that you get
		std::cout << "Printing vector of type double: ";
		for (int i = 0; i < a.size(); i++) { // for every element
			std::cout << a.at(i) << " "; //print the element
		}
		std::cout << std::endl;
	}
	
	void sortVectorDouble(std::vector<double> a) { //for a vector that you get

		std::cout << std::endl << "SortVectorDouble: ";
		std::vector<double> tempVec;//create new empty vect
		
		//Primary loop to fill our tempVec (tor) onions are awesome.
		int loopvar = a.size();
		for (int i = 0; i < loopvar; i++) {
			double tempvar = a.at(0);
			int varpos = 0;
			int looppos = 0;

			//Iterating through all elements of the original vector list copy;
			for (std::vector<double>::iterator it = a.begin(); it != a.end(); ++it) {
				//Finding the largest value inside of the original vector list copy;
				if (tempvar < *it) {
					//updating our tempList variables
					tempvar = *it;
					varpos = looppos;
				}
				//updating position of iteration
				looppos++;
			}
			//erasing the original vector list copy element chosen for tempvar (largest variable)
			a.erase(a.begin()+varpos);
			tempVec.push_back(tempvar);
		}

		for (int i = 0; i < tempVec.size(); i++) {
			std::cout << tempVec.at(i) << " ";
		}

		std::cout << std::endl;
		}

	void sortVectorStrings(std::vector<std::string> a) {
		
	}

		int main() {

			std::cout << maxOf<int>(7, 9) << std::endl;
			std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
			printVectorString(colours);


			// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
			// 1) de vector in 2 nieuwe vectoren te splitsen, 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
			// 2) alle elementen UPPERCASE te maken.
			// 3) alle dubbele te verwijderen


			std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
			printVectorDouble(numbers);//print the elements of vector type double
			sortVectorDouble(numbers);//sort the elements of vector type double
			// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
			// 1) alle negatieve elementen te verwijderen
			// 2) voor alle elementen te bepalen of ze even of oneven zijn
			// 3) de som, het gemiddelde, en het product van alle getallen te berekenen

			std::cout << std::endl;
			system("PAUSE");
		
}

/*NEVER USED CODE
			if (a.at(i) != a.at(0)) {// if youre not the first element
				if (a.at(i) < a.at(i - 1)) {//if its smaller than the one one position less (left)
					a.push_back(a.at(i));//plonk it at the end of the vector
				}

			}*/
