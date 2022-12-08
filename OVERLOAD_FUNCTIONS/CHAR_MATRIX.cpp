#include "CHAR_MATRIX.h"

//char_matrix


long long array_sum(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	long long amount = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			amount += (int)arr[i][j];
	}
	return amount;
}

int min_value(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	int minn = INT_MAX;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if ((int)arr[i][j] < minn) minn = (int)arr[i][j];
	}
	return minn;
}

int max_value(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	int maxx = INT_MIN;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			if ((int)arr[i][j] > maxx) maxx = (int)arr[i][j];
	}
	return maxx;
}

int sort(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char temp;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int a = 0; a < ROWS; a++) {
				for (int b = 0; b < COLS; b++) {
					if ((int)arr[a][b] > (int)arr[i][j])
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


int unique_random(char arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	bool flag;
	predel %= 256;
	if (predel < ROWS * COLS) predel = ROWS * COLS + 1;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			flag = true;
			int random = rand() % predel;
			for (int k = 0; k < ROWS; k++) {
				for (int x = 0; x < COLS; x++) {
					if (random == (int)arr[k][x])
						flag = false;
				}
			}
			while (flag == false) {
				flag = true;
				int random = rand() % predel;
				for (int k = 0; k < ROWS; k++) {
					for (int x = 0; x < COLS; x++) {
						if (random == (int)arr[k][x])
							flag = false;
					}
				}
			}
			arr[i][j] = (char)random;
		}
	}
	print_array(arr, ROWS, COLS);
	return 0;
}

void shift(char arr[ROWS][COLS], const int ROWS, const int COLS, int k, string w) {
	char temp;
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

void print_array(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

int search(char arr[ROWS][COLS], const int ROWS, const int COLS) {
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

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int predel) {
	predel %= 256;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = (char)(rand() % (predel + 1));
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl; "Char worked;";
}