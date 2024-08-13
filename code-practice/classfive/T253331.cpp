#include<cstdio>
using namespace std;
int main(){
	double a, b, r;
	int k;
	scanf("%lf%lf" , &a , &b);
	k = a / b;
	r = a - (k * b);
	printf("%.5lf" , r);
	return 0;  
}