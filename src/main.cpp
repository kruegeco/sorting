#include <stdlib.h>
#include <stdio.h>
#include "sorts.h"
#include "celebrity.hpp"
//argv[0] = program name
//argv[1] = his sort
//argv[2] = how many to make
int main(int argc, char** argv) {
	std::vector<Celebrity*> celebs;
	int sort = std::stoi(argv[1]);
	int size = std::stoi(argv[2]);
	for (int i = 0; i < size; i++) {
		celebs.vector::push_back(new Celebrity());
		std::cout << celebs[i]->name << std::endl;
		std::cout << celebs[i]->howBadly << std::endl;
	}
	std::cout << "the sort used is " << sort;
	switch(sort) {
		case 1:
			std::cout << ": bubble Sort!" << std::endl;
			bubble_sort(celebs);
		case 2:
			std::cout << ": bubble Sort!" << std::endl;
			
		case 3:
			std::cout << ": bubble Sort!" << std::endl;
			
		case 4:
			std::cout << ": bubble Sort!" << std::endl;
			
		case 5:
			std::cout << ": bubble Sort!" << std::endl;
			
	}
	for (int i = 0; i < size; i++) {
		std::cout << celebs[i]->name << std::endl;
		std::cout << celebs[i]->howBadly << std::endl;
	}
	return 0;
}
