#include<cstdio>
using namespace std;
int main(){
	int a;
	scanf("%d" , &a);
	if(a > 0){
		printf("positive");
	}else if(a == 0){
		printf("zero");
	}else{
		printf("negative");
	}
	return 0;
}