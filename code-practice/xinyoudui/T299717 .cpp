#include<iostream>
using namespace std;
int main(){
	int A, B;
	cin >> A >> B;
	if(A > B){
		cout << "Big";
	}else if(A == B){
	cout << "Equal";
	}else{
		cout << "Small";
	}
	return 0;
}