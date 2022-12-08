#include "FLOAT_MATRIX.h"

//float_matrix

double array_sum(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	double amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += arr[i][j];
	}
	return amount;
}

float min_value(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	float minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < minn) minn = arr[i][j];
	}
	return minn;
}

float max_value(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	float maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > maxx) maxx = arr[i][j];
	}
	return maxx;
}

int sort(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	float temp;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int a = 0; a < ROWS; a++) {
				for (int b = 0; b < COLS; b++) {
					if (arr[a][b] > arr[i][j])
					{
						temp = arr[a][b];
						arr[a][b] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;

}


int unique_random(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	bool flag;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			flag = true;
			float random = rand() % predel + (rand() % 10) / 100.0;
			for (int k = 0; k < ROWS; k++) {
				for (int x = 0; x < COLS; x++) {
					if (random == arr[k][x])
						flag = false;
				}
			}
			while (flag == false) {
				flag = true;
				float random = rand() % predel + (rand() % 10) / 100.0;
				for (int k = 0; k < ROWS; k++) {
					for (int x = 0; x < COLS; x++) {
						if (random == arr[k][x])
							flag = false;
					}
				}
			}
			arr[i][j] = random;
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;
}

void shift(float arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	float temp;
	for (int i = 0; i < k; i++) {
		temp = arr[0][0];
		for (int j = 0; j < ROWS; j++) {
			for (int a = 0; a < COLS; a++) {
				arr[j][a] = arr[j][a + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;
	}
	cout << endl;
	print_array(arr, ROWS, COLS);
}

void print_array(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

int search(float arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Repiats: ";
	int counter = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i + 1; k < ROWS; k++) {
				for (int x = j + 1; x < COLS; x++) {
					if (arr[k][x] == arr[i][j]) {
						counter += 1;
						cout << arr[i][j] << "\t";
					}
				}
			}
		};
	}
	cout << endl;

	return counter;
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % (predel + 1) + (rand() % 10) / 100.0;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << "Float worked;";
}