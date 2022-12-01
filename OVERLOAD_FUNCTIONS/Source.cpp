#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//intenger
long long array_sum(int arr[], int n);
int min_value(int arr[], int n);
int max_value(int arr[], int n);
int sort(int arr[], int n);
int unique_random(int arr[], int n, int predel);
void shift(int arr[], int n, int k, string w);
void print_array(int arr[], int n);;
void FillRand(int arr[], int n, int predel);
int search(int arr[], int n);

//float
float array_sum(float arr[], int n);
float min_value(float arr[], int n);
float max_value(float arr[], int n);
int sort(float arr[], int n);
int unique_random(float arr[], int n, int predel);
void shift(float arr[], int n, int k, string w);
void print_array(float arr[], int n);
void FillRand(float arr[], int n, int predel);
int search(float arr[], int n);

//double
double array_sum(double arr[], int n);
double min_value(double arr[], int n);
double max_value(double arr[], int n);
int sort(double arr[], int n);
int unique_random(double arr[], int n, int predel);
void shift(double arr[], int n, int k, string w);
void print_array(double arr[], int n);
void FillRand(double arr[], int n, int predel);
int search(double arr[], int n);

//char
int array_sum(char arr[], int n);
int min_value(char arr[], int n);
int max_value(char arr[], int n);
int sort(char arr[], int n);
int unique_random(char arr[], int n, int predel);
void shift(char arr[], int n, int k, string w);
void print_array(char arr[], int n);;
void FillRand(char arr[], int n, int predel);
int search(char arr[], int n);

//int_matrix
long long array_sum(int arr[][], int n, int k);
int min_value(int arr[][], int n, int k);
int max_value(int arr[], int n);
int sort(int arr[], int n);
int unique_random(int arr[], int n, int predel);
void shift(int arr[], int n, int k, string w);
void print_array(int arr[], int n);;
void FillRand(int arr[], int n, int predel);
int search(int arr[], int n);

//#define INT
//#define FLOAT
//#define DOUBLE
//#define CHAR

int main() {
	srand(time(NULL));
#ifdef INT
	cout << "---------------------------------------------------------------|INT|----------------------------------------------------------------------------------" << endl;
	const int n = 10;
	int arr[n];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + 1;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //INT

#ifdef DOUBLE
	cout << "--------------------------------------------------------------|Double|--------------------------------------------------------------------------------" << endl;
	const int n = 10;
	double arr[n] = {};
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + (double)(rand() % 1000)/10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //DOUBLE

#ifdef FLOAT
	cout << "--------------------------------------------------------------|Float|--------------------------------------------------------------------------------" << endl;
	const int n = 10;
	float arr[n] = {};
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + (float)(rand() % 1000) / 10000;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //FLOAT

#ifdef CHAR
	cout << "--------------------------------------------------------------|CHAR|----------------------------------------------------------------------------------" << endl;
	const int n = 10;
	char arr[n];
	int limit; cout << "Enter limit for unique_random: "; cin >> limit;
	string w; int k; cout << "Enter where You want move array(w or l): "; cin >> w; cout << "Enter k: "; cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 256;
	print_array(arr, n); cout << endl;
	cout << "Array_sum = " << array_sum(arr, n) << endl;
	cout << "Minimal value = " << min_value(arr, n) << endl;
	cout << "Maximum value = " << max_value(arr, n) << endl;
	int counter = search(arr, n);
	cout << "Count of repitions = " << counter << endl;
	cout << "UniqueRandom:  "; unique_random(arr, n, limit); cout << endl;
	cout << "SortedArray:   "; sort(arr, n); cout << endl;
	cout << "Shift:         ";  shift(arr, n, k, w); cout << endl;
	cout << "FillRand:      ";  FillRand(arr, n, limit); cout << endl;
#endif //CHAR
}

//intenger-realisation
long long array_sum(int arr[], int n) {
	int amount = 0;
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
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
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
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
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
	for (int i = 0; i < n; i++) {
		cout << new_array[i] << "\t";
	}
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
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}

int unique_random(double arr[], int n, int predel) {
	for (int i = 0; i < n; i++) {
		bool flag;
		do
		{
			arr[i] = rand() % predel + (double)(rand() % 10000) /10000;
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