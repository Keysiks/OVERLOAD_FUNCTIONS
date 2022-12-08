#pragma once

#include "Constans.h"
#include "stdafx.h"

//double_matrix
double array_sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
double min_value(double arr[ROWS][COLS], const int ROWS, const int COLS);
double max_value(double arr[ROWS][COLS], const int ROWS, const int COLS);
int sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
int unique_random(double arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
void shift(double arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w);
void print_array(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
int search(double arr[ROWS][COLS], const int ROWS, const int COLS);
