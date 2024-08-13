#include<cstdio>
using namespace std;
int main(){
	int a, b, c, d, e, f;
	double v;
	scanf("%d%d%d%d%d%d" , &a ,&b ,&c ,&d ,&e ,&f);
	v = ((double)d * a / 100) + ((double)e * b / 100) + ((double)f * c / 100);
	printf("%.2lf" , v);
	return 0; 
}