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

	template<typename T> T sort(T a, T b) { // 9 args
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

		std::cout << std::endl << "Initiating function sortVectorDouble ==========================" << std::endl;
		std::vector<double> tempVec{ a.at(0), a.at(1) }; //copy the original vector values
		std::cout << "Original vector looks like this: ";
		for (int i = 0; i < 9; i++) {
			std::cout << a.at(i) << " ";
		}
		std::cout << std::endl;

		std::cout << "TempVec takes first two values of the original vector: " << tempVec.at(0) << " " << tempVec.at(1) << std::endl;//check which variables tempvec has
		//std::cout << "the second last element is: ";
		//std::cout << tempVec.at(tempVec.size() - 2); // -2 not 1, because the actuall last element isnt an element
		std::cout << std::endl;

		//for as long as the original vector is lon
		int orVecLeng = a.size();
		//std::cout << "Size of original vector is: " << orVecLeng<<std::endl;
		for (int i = 2; i < orVecLeng; i++) {

			//print what the vector currently holds.
			std::cout << "Elements in tempVec currently: ";
			int tempVecLength = tempVec.size();
			for (int i = 0; i < tempVecLength; i++) {
				std::cout << tempVec.at(i) << " ";
			}
			std::cout << std::endl;
			std::cout << "the second last element is: ";
			std::cout << tempVec.at(tempVec.size() - 2);
			std::cout << std::endl;


			//now actually sort the tempVec, larger to smaller value:
			std::cout << "Sorting..." << std::endl << std::endl;

				if (tempVec.at(tempVec.size()-2) < tempVec.at(tempVec.size()-1)) { //if the values are not in decending order
					double tempVar = tempVec.at(tempVec.size()-2);//save the first to temporary variable
					tempVec.erase(tempVec.end()-2);//remove the first
					tempVec.push_back(tempVar);//add it to the back of the tempVector
					//std::cout << "The new order is: " << tempVec.at(0) << " " << tempVec.at(1) << std::endl;
				}
				else { std::cout << "The first value is already greater than the second" << std::endl; }

				//now add new elements to the tempVec from the original one.
				std::cout << "Adding next element from original vector into thempVec..." << std::endl;
				tempVec.push_back(a.at(i));
				//std::cout << std::endl;
			}
		std::cout << "Completed adding, final list: ";
		for (int i = 0; i < tempVec.size(); i++) {
			std::cout << tempVec.at(i) << " ";
		}
		std::cout << std::endl;
		}

		int main() {

			std::cout << maxOf<int>(7, 9) << std::endl;
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
