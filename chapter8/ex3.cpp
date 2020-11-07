/* Excerise 3 of chapter 8
Create a vector of Fibonacci numbers and print them using the function
from exercise 2. To create the vector, write a function, fibonacci(x,y,v,n),
where integers x and y are ints, v is an empty vector<int>, and n is the
number of elements to put into v; v[0] will be x and v[1] will be y.
A Fibonacci number is one that is part of a sequence where each element is the
sum of the two previous ones. For example, starting with 1 and 2, we get
1, 2, 3, 5, 8, 13, 21, . . . . Your fibonacci() function should make such a
sequence starting with its x and y arguments.*/

#include "../../std_lib_facilities.h"

void print(const string& label, const vector<int>& integers) {
	cout << label << '\n';
	for (int x : integers) {
		cout << x << '\n';
	}

}

 void fibonacci(int x, int y, vector<int>& v, int n) {
	//Function to creat  a fibonacci like sequence qith x and y as starting
	// numbers and length n+2 and empty vector v to store it in
	 if (n < 0) {
		 error("length smaller than zero");
	 }

	 if (v.size() != 0) {
		 error("non empty vector");
	 }

	 v.push_back(x);
	 v.push_back(y);
	 for (int i = 0; i < n; i++) {
		 if (v.end()[-1] < v.end()[-2]) {
			 cout << v.end()[-1] << "int " << v.end()[-2] << '\n';
			 error("integer overflow");
		 }
		 int num = v.end()[-2] + v.end()[-1];
		 v.push_back(num);
	 }
}

 int main() 
 try {
	 string label{ "proto" };
	 vector<int> test;
	 fibonacci(1, 1, test, 200);
	 print(label, test);
}

 catch (exception& e) {
	 cerr << "exception: " << e.what() << endl;
	 char c;
	 while (cin >> c && c != ';');
	 return 1;
 }
 catch (...) {
	 cerr << "exception\n";
	 char c;
	 while (cin >> c && c != ';');
	 return 2;
 }