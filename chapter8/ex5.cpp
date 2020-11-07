/* ex 5 chapter 8
Write two functions that reverse the order of elements in a vector<int>.
For example, 1, 3, 5, 7, 9 becomes 9, 7, 5, 3, 1. The first reverse function
should produce a new vector with the reversed sequence, leaving its original 
vector unchanged. The other reverse function should reverse the
elements of its vector without using any other vectors (hint: swap).*/

#include "../../std_lib_facilities.h"

vector<int> reverse_new_vector(vector<int> v) {
	/*input is a vector of ints and reverses the input and rerturn a new vector*/
	vector<int> reverse;
	int len = v.size();
	for (int i = 0; i < len; i++) {
		int pos = len - i - 1; //calcultes reverse position
		reverse.push_back(v[pos]);
	}

	return reverse;
}

void reverse_inplace(vector<int>& v) {
	/*input is a vector of ints and reverses the input and rerturn a new vector*/
	int len = v.size();
	int mod2 = len / 2;
	cout << mod2;
	for (int i = 0; i < mod2; i++) {
		int pos = len - i - 1; //calcultes reverse position
		swap(v[i], v[pos]);
	}
}

void print(const string& label, const vector<int>& integers) {
	cout << label << '\n';
	for (int x : integers) {
		cout << x << '\n';
	}
}

int main() {

	vector<int> test{ 1, 3, 5, 7, 9 };
	vector<int> rev = reverse_new_vector(test);

	print("orignial", test);
	print("reverse", rev);
	reverse_inplace(test);
	print("original inplace", test);

}
