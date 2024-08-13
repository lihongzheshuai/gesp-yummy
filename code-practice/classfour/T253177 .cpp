#include<cstdio>
using namespace std;
int main(){
	int x, a, y, b;
	scanf("%d%d%d%d", &x, &a, &y, &b);
	double z;
	z = (x * (double) a - y * b)/((double) a - b);
	printf("%.2lf", z);
	return 0;
}