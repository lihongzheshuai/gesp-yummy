#include<cstdio>
using namespace std;
int main(){
	int a, b;
	scanf("%d%d" , &a, &b);
	printf("%.2lf%%" , (b - (double)a) / a * 100);
	return 0;
}