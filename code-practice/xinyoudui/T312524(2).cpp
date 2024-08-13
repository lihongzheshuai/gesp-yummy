#include<cstdio>
using namespace std;
int main(){
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%.2lf\n%.2lf\n%.2lf\n%.2lf", a + b, a - b, a * b, a / b);
	return 0;
}