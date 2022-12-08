#pragma once
#include "stdafx.h"
#include "Constans.h"

//int_matrix
long long array_sum(int arr[ROWS][COLS], const int ROWS, const int COlS);
int min_value(int arr[ROWS][COLS], const int ROWS, const int COlS);
int max_value(int arr[ROWS][COLS], const int ROWS, const int COlS);
int sort(int arr[ROWS][COLS], const int ROWS, const int COlS);
int unique_random(int arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
void shift(int arr[ROWS][COLS], const int ROWS, const int COlS, int k, string w);
void print_array(int arr[ROWS][COLS], const int ROWS, const int COlS);;
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
int search(int arr[ROWS][COLS], const int ROWS, const int COlS);