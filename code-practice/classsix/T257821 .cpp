#include<iostream>
using namespace std;
int main(){
	int a, b, n;
	cin >> n;
	a = 5 * n;
	b = 11 + 3 * n;
	if(a < b){
		cout << "Local";
	} else {
		cout << "Luogu";
	}
	return 0;
}