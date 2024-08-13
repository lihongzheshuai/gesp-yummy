#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	// 定义min 最小值 mid 中间值，max 最大值
	double min, mid, max;
	// 如果 a < b， 此时 最小值是a，最大值是b, 否则 最小值是b，最大值是a
	if(a < b){
		min = a;
		max = b;
	}else{
		min = b;
		max = a;
	}
	if(c > max){
		mid = max;
	}else if(c < min){
		mid = min;
	}else{
		mid = c;
	}
	// 拿c跟最大最小分别比较，如果c 比最大值 大，则 中间值为原最大值 如果比最小值小，则原最小值是中间值。否则就是c是中间值
	cout << mid;
	return 0;
}