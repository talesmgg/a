#include <vector>
#include <iostream>

#include "sortAlgs.h"


/// ***********************************************************************
/// **  Ordenacao por Selecao - SelectionSort
/// ***********************************************************************

void algOrd::selectionSort (std::vector<int>& v) {
	
int i, j,
	n = v.size();
	
	for (i = 0 ; i < n-1 ; i++) {
		
		int min = i;
		
		for (j = i+1; j < n; j++) 
			if (v[j] < v[min]) 
				min = j;
			
		int aux = v[min];
		v[min] 	= v[i];
		v[i] 	= aux;
		}
}

/// ***********************************************************************
/// **  Ordenacao por Insercao - InsertSort
/// ***********************************************************************

void algOrd::insertSort (std::vector<int>& v) {

int i,
	n = v.size();
	
	for (i = 1 ; i < n ; i++) {
		
		int k = v[i];
		int j = i - 1;
		
		while ( (j >= 0) && (k < v[j]) ) {
			v[j+1] = v[j];
			j--;
			}
		v[j+1] = k;			
		}
}

/// ***********************************************************************
/// **  Ordenacao pelo Metodo da Bolha - BubbleSort
// ***********************************************************************

void algOrd::bubbleSort (std::vector<int>& v) { 
	
int i=0, j;
int n = v.size()-1;
bool troca = true;

	while ( (troca) && (i < n) ) { 
		troca = false;
		for (j = 0; j < (n - i); j++) 		
			if (v[j] > v[j+1]) {
				int aux = v[j];
				v[j] 	= v[j+1];
				v[j+1] 	= aux;
				troca 	= true;
				}
		i++;
		}	
}

/// ***********************************************************************
/// **  Ordenacao por Mistura - MergeSort
/// ***********************************************************************

void algOrd::mergeSort(std::vector<int>& v, int e, int d) {

	std::cout << "+==================================+" << std::endl; 
	std::cout << "+=          Em construcao         =+" << std::endl; 
	std::cout << "+==================================+" << std::endl; 

} 

/// ***********************************************************************
/// **  Algoritmo de Mistura - Merge
/// ***********************************************************************

void algOrd::merge (std::vector<int>& v, int e, int m, int d) {
	
} 

/// ***********************************************************************
/// **  Algoritmo QuickSort
/// ***********************************************************************

void algOrd::quickSort(std::vector<int>& v, int e, int d) {

	std::cout << "+==================================+" << std::endl; 
	std::cout << "+=          Em construcao         =+" << std::endl; 
	std::cout << "+==================================+" << std::endl; 
	
} 
