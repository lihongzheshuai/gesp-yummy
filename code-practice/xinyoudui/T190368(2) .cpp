#include<cstdio>
using namespace std;
int main(){
	int a;
	scanf("%d", &a);
	if(a <= 150){
		printf("%.1lf", (double)a * 0.4463);
	}else if(a >= 151 && a <= 400){
		printf("%.1lf", 150 * 0.4463 + ((double)a - 150) * 0.4663);
	}else{
		printf("%.1lf", 150 * 0.4463 + (400 - 150) * 0.4663 + ((double)a - 400)* 0.5663);
	}
	return 0;
}