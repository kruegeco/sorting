// Header Guards 
#ifndef __AUDS__
#define __AUDS__

// Includes
#include <iostream>
#include <stdio.h>  //Used for rand 
#include <stdlib.h> //Used for rand, srand
#include <time.h>   //Used for rand seed 
#include <string>

Class Celebrity
{
public:

	/*
	 *Default constructor
	 */
	Celebrity() { }

	/*
	 *Constructor
	 */
	Celebrity(std::string name, int howBadly, std::string area, bool met) {
		this -> name = name;
		this -> howBadly = howBadly;
		this -> area = area;
		this -> met = met;
	}

	/*
	 *Destructor
	 */
	~Celebrity() { }

	/*
	 *overloads less than
	 */
	Celebrity operator<(const Celebrity& c1, const Celebrity& c2) 
	{
		if (c1.howBadly < c2.howBadly) {
			return true;
		}
		else if (c1.howBadly > c2.howBadly) {
			return false;
		}

		if (c1.met < c2.met) {
			return true;
		}
		else if (c1.met > c2.met) {
			return false;
		}

		if (c1.name < c2.name) {
			return true;
		}
		else if (c1.name > c2.name) {
			return false;
		}
		else {
			return true;
		}
	}
	Celebrity operator<=(const Celebrity& c1, const Celebrity& c2)
	{
		if (c1.howBadly <= c2.howBadly) {
			return true;
		}
		else if (c1.howBadly > c2.howBadly) {
			return false;
		}

		//The code below in this method will never be reached, 
		// since there is no value that is not less than, greater than, or equal to, not covered
		if (c1.met <= c2.met) {
			return true;
		}
		else if (c1.met > c2.met) {
			return false;
		}

		if (c1.name <= c2.name) {
			return true;
		}
		else if (c1.name > c2.name) {
			return false;
		}
		else {
			return true;
		}
	}
	/**
	Random Vector Creator
	@param size of celebrity vector
	*/
	Celebrity& randomVector(unsigned long size) {
		//Initialize random seed
		srand (time(NULL));
		
		//Inititialize vector
		testVec = new Celebrity[size]
	}
	
private:
	std::string name;
	int howBadly;
	std::string area;
	bool met;
	
	// Vector for Celebities
	Celebrity* testVec;
	
};

#endif
