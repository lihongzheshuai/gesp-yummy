#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	// 先1和2比较：(1) 如果2大，2和3比较，如果3大，2是中间数，如果3小，3和1比较，如果1大，1是，否则3是 ；
	//   a b 
	if ( a < b) {
		if ( b < c) {
			cout << b;
		} else {
			if(a > c) {
				cout << a;
			} else {
				cout << c;
			}
		}
	} else {
		//  c b  a 
		// (2) 如果1大，1和3比较，如果3大，1是中间数，如果3小，3和2比较，如果2大，2是，否则3是；
		if(a < c) {
			cout << a;
		} else {
			if(b > c) {
				cout << b;
			} else {
				cout << c;
			}
		}
	}

	return 0;
}