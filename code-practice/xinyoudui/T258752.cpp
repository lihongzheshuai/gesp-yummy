#include<iostream>
using namespace std;
int main(){
	double h, m;
	cin >> m >> h;
	double n;
	n = m / (h * h);
	if(n < 18.5){
		cout << "Underweight";
	}else if(18.5 <= n && n < 24){
		cout << "Normal";	
	}else{
		cout << n << endl << "Overweight";
	}
	return 0;
}