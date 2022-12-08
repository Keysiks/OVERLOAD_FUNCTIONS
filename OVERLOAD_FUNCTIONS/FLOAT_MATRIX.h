#pragma once

#include "stdafx.h"
#include "Constans.h"

//float_matrix
double array_sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
float min_value(float arr[ROWS][COLS], const int ROWS, const int COLS);
float max_value(float arr[ROWS][COLS], const int ROWS, const int COLS);
int sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
int unique_random(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
void shift(float arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w);
void print_array(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel);
int search(float arr[ROWS][COLS], const int ROWS, const int COLS);