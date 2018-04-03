// Header Guards 
#ifndef __Celebrity__
#define __Celebrity__

// Includes
#include <iostream>
#include <stdio.h>  //Used for rand 
#include <stdlib.h> //Used for rand, srand
#include <time.h>   //Used for rand seed 
#include <string>

class Celebrity
{
public:

	/*
	 *Default constructor
	 */
	//Celebrity() { }

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
	 *Constructor 2
	 */
	Celebrity(std::string name, int howBadly, bool met) {
		this -> name = name;
		this -> howBadly = howBadly;
		area = "";
		this -> met = met;
	}	

	/*
	 *Destructor
	 */
	~Celebrity() { }

	/*
	 *overloads less than
	 */
	bool operator<(const Celebrity & c2) 
	{
		if (howBadly < c2.howBadly) {
			return true;
		}
		else if (howBadly > c2.howBadly) {
			return false;
		}

		if (met < c2.met) {
			return true;
		}
		else if (met > c2.met) {
			return false;
		}

		if (name < c2.name) {
			return true;
		}
		else if (name > c2.name) {
			return false;
		}
		else {
			return true;
		}
	}
	bool operator<=(const Celebrity & c2)
	{
		if (howBadly <= c2.howBadly) {
			return true;
		}
		else if (howBadly > c2.howBadly) {
			return false;
		}

	}
	/**
	Random Vector Creator
	@param size of celebrity vector
	*/
	/*
	Celebrity& randomVector(unsigned int size) {
		//Initialize random seed
		srand (time(NULL));
		
		//Inititialize vector
		testVect = new std::vector<Celebrity>;
		//Initialize variables for celebrity (FIXME; need description? remove that var?)
		std::string tName[8];
		int tHowBad;
		bool tMet;
		
		for (int j=0; j<size; j++) {
			//random char (90-64) + 65
			for (int i=0; i<8; i++) {
				tName[i] = (char)(rand() % 25) + 65;
			}
			tHowBad = (rand() % 10);
			tMet = (bool)(rand() % 1);
			
			testVect.push_back(new Celebrity(tName, tHowBad, tMet));
		}
		
		return testVect;
	}
	*/
	/**
	Random Celebrity Creator
	*/
	Celebrity() {		
		//Declare temporary variables for celebrity
		std::string tName = "        ";
		int tHowBad;
		bool tMet;
			
		//random char (90-64) + 65
		for (int i=0; i<8; i++) {
			tName[i] = (rand() % 25) + 65;
		}
		tHowBad = (rand() % 10);
		tMet = (bool)(rand() % 2);
		name = tName;
		howBadly = tHowBad; 
		met = tMet;
	}
	
	/*
	void setTestVect(&Celebrity) {
		testVect = &Celebrity;
	}
	
	// Vector for Celebities
	std::vector <Celebrity>* testVect;
	*/
	
	int howBadly;
	std::string name;
private:
	std::string area;
	bool met;
	
};

#endif
