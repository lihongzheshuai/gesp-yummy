#include<cstdio>
using namespace std;
int main(){
//	定义变量，1个用于存储读入的数据，1个用于存储最大值
	double max, temp; 
     max = 0;
//  依次读入3个输入的值，分别跟当前最大值比较，如果读入的值大于当前最大值，则将数的值赋给最大值
	for(int i = 1; i <= 3; i++) {
	scanf ("%lf", &temp);
		if(max < temp){
		 max = temp;	
		}
	}
//  所有的变量比较后，输出最大值
	printf("%.7lf", max);
	return 0;
}