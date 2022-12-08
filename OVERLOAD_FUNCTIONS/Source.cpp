#include "stdafx.h"
#include "Constans.h"
#include "INT.h"
#include "FLOAT.h"
#include "DOUBLE.h"
#include "CHAR.h"
#include "INT_MATRIX.h"
#include "FLOAT_MATRIX.h"
#include "DOUBLE_MATRIX.h"
#include "CHAR_MATRIX.h"



//#define INT
//#define FLOAT
//#define DOUBLE
//#define CHAR
//#define INT_MATRIX
//#define FLOAT_MATRIX
//#define DOUBLE_MATRIX
//#define CHAR_MATRIX

int main() {
	srand(time(NULL));
#ifdef INT
	cout << "---------------------------------------------------------------|INT|----------------------------------------------------------------------------------" << endl;
	const int n = 10;
	int arr[n];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + 1;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //INT

#ifdef DOUBLE
	cout << "--------------------------------------------------------------|Double|--------------------------------------------------------------------------------" << endl;
	const int n = 10;
	double arr[n] = {};
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + (double)(rand() % 1000)/10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //DOUBLE

#ifdef FLOAT
	cout << "--------------------------------------------------------------|Float|--------------------------------------------------------------------------------" << endl;
	const int n = 10;
	float arr[n] = {};
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + (float)(rand() % 1000) / 10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //FLOAT

#ifdef CHAR
	cout << "--------------------------------------------------------------|CHAR|----------------------------------------------------------------------------------" << endl;
	const int n = 10;
	char arr[n];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 256;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //CHAR

#ifdef INT_MATRIX
	cout << "------------------------------------------------------------|MATRIX INT|------------------------------------------------------------------------------" << endl;
	int arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w;
	int k; cout << "Enter on how many move array: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % (limit + 1);
	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	cout << "Shift:         ";  shift(arr, ROWS, COLS, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //INT_MATRIX

#ifdef FLOAT_MATRIX
	cout << "------------------------------------------------------------|MATRIX FLOAT|----------------------------------------------------------------------------" << endl;
	float arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) 
			arr[i][j] = (float)(rand() % (limit + 1)) + (rand() % 10) / 100.0;
	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	//cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //FLOAT_MATRIX

#ifdef DOUBLE_MATRIX
	cout << "-----------------------------------------------------------|MATRIX DOUBLE|----------------------------------------------------------------------------" << endl;
	double arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			double random = rand() % limit;
			for (int k = 0; k < 50; k++)
				random += (rand() % 10) / pow(10, k);
			arr[i][j] = random;
		}	

	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	//cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;
#endif //DOUBLE_MATRIX

#ifdef CHAR_MATRIX
	cout << "------------------------------------------------------------|MATRIX CHAR|-----------------------------------------------------------------------------" << endl;
	char arr[ROWS][COLS];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % (limit + 1);
	}
	print_array(arr, ROWS, COLS); cout << endl;
	cout << "Array_sum = " << array_sum(arr, ROWS, COLS) << endl;
	cout << "Minimal value = " << min_value(arr, ROWS, COLS) << endl;
	cout << "Maximum value = " << max_value(arr, ROWS, COLS) << endl;
	int counter = search(arr, ROWS, COLS);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:\n"; unique_random(arr, ROWS, COLS, limit); cout << endl;
	cout << "SortedArray:\n"; sort(arr, ROWS, COLS); cout << endl;
	//cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:     \n";  FillRand(arr, ROWS, COLS, limit); cout << endl;

#endif //CHAR_MATRIX
}


