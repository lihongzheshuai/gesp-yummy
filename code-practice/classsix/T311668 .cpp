#include<cstdio>
using namespace std;
int main(){
	int a, b;
	scanf("%d%d", &a, &b);													
	if(a >= 60 && b >= 60){
		printf("0");
	} else if((a >= 60 && b < 60) || (a < 60 && b >=60)){
		printf("1");
	} else {
		printf("2");
	}
	return 0;
}