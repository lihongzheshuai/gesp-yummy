#include<cstdio>
using namespace std;
int main(){
	int a;
	scanf("%d" , &a);
	if(a == 1){
		printf("Today, I ate 1 apple.");
	}else if(a > 1) {
		printf("Today, I ate %d apples." , a);
	}else{
		printf("Today, I ate 0 apple.");
	}
	return 0;	
}