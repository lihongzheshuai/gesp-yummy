#include<iostream>
using namespace std;
int main(){
	int a, b; //定义a元 b 角
	cin >> a >> b; 
	int c; // 定义c代表角数
	c = a * 10 + b;
	int d = 1 * 10 + 9; // d代表签字笔价格1元9角
	cout <<  c / d;// 能买几只
	return 0;
}