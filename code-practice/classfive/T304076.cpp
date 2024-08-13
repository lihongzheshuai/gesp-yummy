#include<cstdio>
using namespace std;
int main(){
	int a, b;
	scanf ("%d%d" , &a ,&b);
	int f;
	f = b / (a * a * a);
	int y;
	y = b % (a * a * a);
	if(y > 0){
		printf("%d" , f + 1);
	} else {
		printf("%d" , f);
	}
}