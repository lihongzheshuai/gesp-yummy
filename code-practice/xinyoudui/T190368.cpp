#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if(a <= 150){
		cout << (double)a * 0.4463;
	}else if(a >= 151 && a <= 400){
		cout << (double)a * 0.4463 + (double) a * 0.4663;
	}else{
		cout << (double)a * 0.5663 + (double) a * 0.4463 + (double) a * 0.4663;
	}
	return 0;	
}