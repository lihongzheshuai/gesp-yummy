#include<iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	int n;
	if(x % 3 == 0){
		n = n + 1;
	}
	if(x % 5 == 0){
		n += 1;
	}
	if(x % 7 == 0){
		n += 1;
	}
	cout << n;
	return 0;
}