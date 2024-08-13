#include<iostream>;
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	if(x == y){
		cout << 90 * x;
	}else if(y > x){
		cout << (90 * x) + (y - x) * 40;
	}else{
		cout << 90 * y + (x - y) * 60;
	}
	return 0;
}