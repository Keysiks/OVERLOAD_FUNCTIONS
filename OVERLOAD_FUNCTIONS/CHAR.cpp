#include "CHAR.h"

//char-relesation
int array_sum(char arr[], int n) {
	int amount = 0;
	for (int i = 0; i < n; i++)
		amount += (int)arr[i];
	return amount;
}

int min_value(char arr[], int n) {
	float minn = ULLONG_MAX;
	for (int i = 0; i < n; i++) {
		if ((int)arr[i] < minn) minn = (int)arr[i];
	}
	return minn;
}

int max_value(char arr[], int n) {
	int maxx = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		if ((int)arr[i] > maxx) maxx = (int)arr[i];
	}
	return maxx;
}

int sort(char arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				char x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}

int unique_random(char arr[], int n, int predel) {
	if (predel > 256) predel = 256;
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = (char)(rand() % predel);
			flag = true;
			for (int j = 0; j < i; j++) {
				if (arr[i] == arr[j])
				{
					flag = false;
					break;
				}
			}
		} while (flag == false);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	return 0;
}

void shift(char arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	char* new_array = new char[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	for (int i = 0; i < n; i++) {
		cout << new_array[i] << "\t";
	}
	delete[] new_array;

}

void print_array(char arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(char arr[], int n) {
	cout << "Repiats: ";
	char* povt = new char[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		float a = arr[i];
		flag = true;
		for (int j = 0; j < n; j++) {
			if (a == povt[j]) {
				flag = false;
				counter += 1;
				cout << a << "\t";
				break;
			}
		}
		if (flag == true) povt[i] = a;
	}
	cout << endl;

	return counter;
}

void FillRand(char arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = char((rand() % predel) % 256);
		cout << arr[i] << "\t";
	}
	cout << endl << "Char worked;";
}