#include "FLOAT.h"

//float-reliasation

float array_sum(float arr[], int n) {
	float amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

float min_value(float arr[], int n) {
	float minn = ULLONG_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

float max_value(float arr[], int n) {
	float maxx = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

int sort(float arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				float x = arr[j];
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

int unique_random(float arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel + (float)(rand() % 1000) / 1000;
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

void shift(float arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	float* new_array = new float[n];
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

void print_array(float arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(float arr[], int n) {
	cout << "Repiats: ";
	float* povt = new float[n];
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

void FillRand(float arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (predel + 1) + (float)(rand() % 10000) / 10000;
		cout << arr[i] << "\t";
	}
	cout << endl << "Float worked;";
}