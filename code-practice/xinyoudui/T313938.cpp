#include<iostream>
using namespace std;
int main() {
	int a;
	char c;
	cin >> a >> c;
	if (a <= 1000){
		if (c == 'y') {
			cout << 13;
		} else {
			cout << 8;
		}
	} else if( a > 1000 && a <= 1500) {
		if (c == 'y') {
			cout << 17;
		} else {
			cout << 12;
		}
	} else {
		int x = (a - 1000) / 500;
		if ( (a - 1000) % 500 != 0) {
			x += 1;
		}
		if (c == 'y') {
			cout << 5 + 8 + x * 4;
		} else {
			cout << 8 + x * 4;
		}      
		return 0;      
	}         
}