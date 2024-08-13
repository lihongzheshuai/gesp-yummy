#include<cstdio>
using namespace std;
int main(){
	int N;
	scanf("%d", &N);
	int r, R,vr,vR;
	for (int i = 1; i < N /4; i++){
		vr= 4 * i * i * i;
		for (int j = i+1; j < i * 2;j++){
			vR = 4 * j * j * j;
			if (vr + vR == N && (r == 0 || j - i <= R - r)) {
				r = i, R = j;
			}
		}
	}
	if (r == 0) {
		printf("NO");
	}else {
		printf("%d\n%d",r,R);
	}
	return 0;
}