#include<iostream>
using namespace std;
int main() {
	//定义整数变量a,b,c,代表三个数字
	int a, b, c;
	//读入变量a,b,c
	cin >> a >> b >> c;
	// a,c比，若a大，c，b比，c大， acb.
	if(a >= c) {
		if(c >= b) {
			cout << b << " " << c << " " << a;
		}else {// 若b大，
			if(a >= b){
			cout << c << " " << b << " " << a;	
			}else{
			cout << c << " " << a << " " << b;	
			}
		}
	}else {//若c大，a,b比，若a大，cab,若b大，c,b比,若c大，cba,若b大，bca
		if(a >= b) {
			cout << b << " " << a << " " << c;
		}else {
				if(c >= b) {
					cout << a << " " << b << " " << c;
				} else {
					cout << a << " " << c << " " << b;
				}
			}
		}
	return 0;
}