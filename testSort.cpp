#include <iostream>
#include <vector>
//#include <cstdlib>

#include "sortAlgs.h"

#define MAX 20000

// ********************************************************************
// ***
// ********************************************************************

void initArray(std::vector<int>& v, unsigned int N) {

    srand ( time(NULL) );
    for (unsigned int i=0; i < v.size(); i++) 
        v.at(i) = rand() % (N*10);        
}

// ********************************************************************
// ***
// ********************************************************************

void printArray(std::vector<int> v) {

	std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "conteudo de v: " << std::endl << "=============" << std::endl;
    for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
       std::cout << ' ' << *it << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

// ********************************************************************
// ********************************************************************
// ********************************************************************
// ********************************************************************
int main (int argc, char * argv[]) {

unsigned int 	maxElem;

algOrd::algOrdenacao sortAlg;

	if (argc > 1)
		maxElem = atoi(argv[1]);
	else
		maxElem = MAX;

	if (argc > 2)
		sortAlg = (algOrd::algOrdenacao) atoi(argv[2]);
	else
		sortAlg = algOrd::SELECTION_SORT;

	std::vector<int> v(maxElem);

	initArray(v, maxElem);

	printArray(v);    	

	switch (sortAlg) {
		case algOrd::SELECTION_SORT : 	std::cout << "Ordenando por Selecao" << std::endl;
										algOrd::selectionSort(v);
										break;

		case algOrd::INSERT_SORT 	: 	std::cout << "Ordenando por Insercao" << std::endl;
										algOrd::insertSort(v);
										break;

		case algOrd::BUBBLE_SORT 	: 	std::cout << "Ordenando por BubbleSort" << std::endl;
										algOrd::bubbleSort(v);
										break;

		case algOrd::MERGE_SORT 	: 	std::cout << "Ordenando por MergeSort" << std::endl;
										algOrd::mergeSort(v, 0, v.size()-1);
										break;

		case algOrd::QUICK_SORT 	: 	std::cout << "Ordenando por QuickSort" << std::endl;
										algOrd::quickSort(v, 0, v.size()-1);
										break;
		}

	printArray(v);
    	
 	return 0;        
}