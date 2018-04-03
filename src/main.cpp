#include <stdlib.h>
#include <stdio.h>
#include "sorts.h"
#include "celebrity.hpp"

//argv[0] = program name
//argv[1] = his sort
//argv[2] = how many to make
int main(int argc, char** argv) {
	std::vector<Celebrity> celebs;
	int sort = std::stoi(argv[1]);
	int size = std::stoi(argv[2]);
	for (int i = 0; i < size; i++) {
	  	Celebrity* c1 =  new Celebrity();
		celebs.vector::push_back(*c1);
		//std::cout << celebs[i].name << std::endl;
		//std::cout << celebs[i].howBadly << std::endl;
	}
	std::cout << "the sort used is " << sort;
	switch(sort) {
		case 1:
			std::cout << ": bubble Sort!" << std::endl;
			bubble_sort(celebs);
			break;
		case 2:
			std::cout << ": selection Sort!" << std::endl;
			selection_sort(celebs);
			break;
		case 3:
			std::cout << ": insertion Sort!" << std::endl;
			insertion_sort(celebs);
			break;
		case 4:
			std::cout << ": merge Sort!" << std::endl;
			mergeSort(celebs);
			break;
		case 5:
			std::cout << ": quick Sort!" << std::endl;
			//quicksort(celebs);
			break;
	}
	for (int i = 0; i < size; i++) {
		//std::cout << celebs[i].name << std::endl;
		std::cout << celebs[i].howBadly << std::endl;
	}
	return 0;
}
