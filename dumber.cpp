#include <iostream>
using namespace std;

// function declaration
int dumb(int);
int dumber(int);
int dumberer(int);

int main () {

	int y = 1;
	int n = 4;
	
	// function call
	cout << dumberer(n) << endl;
	
	return 0;
}

// function definition
int dumb(int x) {
	int n = 5;
	return n + x;
}

int dumber(int n) {
	n = dumb(n);
	return ++n;
}

int dumberer(int n) {
	int y = dumber(dumb(n));
	return dumb(y);
}