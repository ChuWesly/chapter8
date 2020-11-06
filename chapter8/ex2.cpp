#include "../../std_lib_facilities.h"

void print(const string& label, const vector<int>& integers) {
	cout << label << '\n';
	for (int x: integers) {
		cout << x << '\n';
	}

}

int main() {
	print("hallo", { 1,2,3,4, });
}


