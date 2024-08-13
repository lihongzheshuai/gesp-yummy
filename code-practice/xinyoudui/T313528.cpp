#include<cstdio>
using namespace std;
int main() {
	int a;
	scanf("%d", &a);
	if(a < 2000) {
		printf("%.2lf",(double) a * 0.2);
	} else if(a >= 2000 && a <= 4000) {
		printf("%.2lf", 2000 * 0.2 + ((double) (a - 2000)) * 0.3);
	} else {
		printf("%.2lf",2000 * 0.2 + 2000 * 0.3 + ((double)(a - 4000)) * 0.5);
	}
	return 0;
}