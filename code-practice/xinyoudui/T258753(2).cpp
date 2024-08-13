#include<iostream>
using namespace std;
int main(){
	int a, b, c, n;
	cin >> a >> b >> c;
	if(a < 60){
		n = n + 1;
	}
	if(b < 60){
		n = n + 1;
	}
	if(c < 60){
		n = n + 1;
	}
	if(n == 1){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}