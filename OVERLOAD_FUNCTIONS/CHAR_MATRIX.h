#pragma once
#include "stdafx.h"
#include "Constans.h"

//char_matrix
long long array_sum(char arr[ROWS][COLS], const int ROWS, const int COlS);
int min_value(char arr[ROWS][COLS], const int ROWS, const int COlS);
int max_value(char arr[ROWS][COLS], const int ROWS, const int COlS);
int sort(char arr[ROWS][COLS], const int ROWS, const int COlS);
int unique_random(char arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
void shift(char arr[ROWS][COLS], const int ROWS, const int COlS, int k, string w);
void print_array(char arr[ROWS][COLS], const int ROWS, const int COlS);;
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COlS, int predel);
int search(char arr[ROWS][COLS], const int ROWS, const int COlS);