#include<cstdio>
using namespace std;
int main(){
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%.2lf\n",  a + b);
	printf("%.2lf\n",  a - b);
	printf("%.2lf\n",  a * b);
	printf("%.2lf", a / b);
	return 0;
}