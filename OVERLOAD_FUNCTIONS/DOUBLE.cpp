#include "DOUBLE.h"
//double-reliasation

double array_sum(double arr[], int n) {
	double amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

double min_value(double arr[], int n) {
	double minn = ULLONG_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

double max_value(double arr[], int n) {
	double maxx = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

int sort(double arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				double x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	print_array(arr, n);
	return 0;
}

int unique_random(double arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel + (double)(rand() % 10000) / 10000;
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

void shift(double arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	double* new_array = new double[n];
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

void print_array(double arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(double arr[], int n) {
	cout << "Repiats: ";
	double* povt = new double[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		double a = arr[i];
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

void FillRand(double arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		double result = rand() % predel;
		for (int j = 4; j < 100; j++)
			result += (double)(rand() % 10000) / pow(10, j);
		arr[i] = result;
		cout << arr[i] << "\t";
	}
	cout << endl << "Double worked;";
}