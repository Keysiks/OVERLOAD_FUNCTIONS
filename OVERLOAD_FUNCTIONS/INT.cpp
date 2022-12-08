//intenger-realisation
#include "INT.h"
long long array_sum(int arr[], int n) {
	long long amount = 0;
	for (int i = 0; i < n; i++)
		amount += arr[i];
	return amount;
}

int min_value(int arr[], int n) {
	int minn = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < minn) minn = arr[i];
	}
	return minn;
}

int max_value(int arr[], int n) {
	int maxx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) maxx = arr[i];
	}
	return maxx;
}

int sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	print_array(arr, n);
	return 0;
}


int unique_random(int arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel;
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
	print_array(arr, n);
	return 0;
}

void shift(int arr[], int n, int k, string w) {
	if (w == "right") k = k;
	else k = n - k;
	int* new_array = new int[n];
	for (int i = 0; i < n; i++) {
		if (i + k != 0)
			new_array[i] = arr[(i + k) % n];
		else new_array[n - 1] = arr[0];
	}
	print_array(new_array, n);
	delete[] new_array;

}

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int search(int arr[], int n) {
	cout << "Repiats: ";
	int* povt = new int[n];
	bool flag = true;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		int a = arr[i];
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

void FillRand(int arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (predel + 1);
		cout << arr[i] << "\t";
	}
	cout << endl; "Int worked;";
}