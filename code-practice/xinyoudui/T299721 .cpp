#include<iostream>
using namespace std;
int main(){
	int A, B, C, D, E, n;
	cin >> A >> B >> C >> D >> E;
	if(A > B){
		n = n + 1;
	}
	if(A > C){
		n = n + 1;
	}
	if(A > D){
		n = n + 1;
	}
	if(A > E){
		n = n + 1;
	}
	cout << n;
	return 0;
}