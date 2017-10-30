# selection_sort-0.0.1

#include <iostream>
#include <sstream>

using namespace std;

bool read_numbers(int & n, int * array)
{
	string string;
	getline(cin, string);
	istringstream stream(string);
	bool success = true;
	for (int i = 0; i < n; ++i) {
		if (!(stream >> array[i])) {
			success = false;
			break;
		}
	}
	return success;
}

int main() {
	int n = 5;
	int * array = new int;
	int min;

	string str;
	getline(cin, str);
	istringstream stream(str);
	if (stream >> n) {
		if (read_numbers(n, array)) {
			int min_i;
			for (int i = 0; i < n; i++) {
				min = array[i];
				min_i = i;
				for (int j = i; j < n; j++) {
					if (array[j] < min) {
						min = array[j];
						min_i = j;
					}
				}
				swap(array[i], array[min_i]);
			}
			for (int i = 0; i < n; i++) {
				cout << array[i] << " ";
			}
		}
		else {
			cout << "An error has occured while reading input data.";
		}
	}

	cin.get();
	cin.get();
	return 0;
}
