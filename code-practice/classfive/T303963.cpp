#include<cstdio>
using namespace std;
int main(){
	int a, b;
	scanf("%d%d", &a ,&b);
	printf("%.3lf%%", (double)b * 100 / a);
	return 0;
}