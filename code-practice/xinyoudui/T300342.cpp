#include<cstdio>
using namespace std;
int main() {
//定义变量，一个用于存储读入的值，一个存储最小值。
	double small, temp;
	small = 999999999999999999999;
//依次读入三个输入的值，分别更当前最小值比，如果读入的值小于最小值，则将它的值赋给最小值。注意：整数如果不够二十一位，数前面用零占位。
	for(int i = 1; i <= 3; i++) {
		scanf("%lf", &temp);
		if(temp < small) {
			small = temp;
		}
	}
	printf("%021d",(int)small);
	return 0;

}