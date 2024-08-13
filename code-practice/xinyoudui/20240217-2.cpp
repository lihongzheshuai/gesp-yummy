#include<cstdio>
using namespace std;
int main() {
	int n,m,a;
	scanf("%d %d %d",&n,&m,&a);
	int h, rh[n] = {0},ridx[n];
	for (int i = 0; i < n; i++) {
		ridx[i] = i + 1;
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &h);
			rh[j] += h;
		}
	}
	int p,pidx;
	for (int k = 0; k < n; k++) {
		for (int l = k + 1; l < n; l++) {
			if (rh[k] < rh [l]) {
				pidx = ridx[k], ridx[k] = ridx[l], ridx[l] = pidx;
				p = rh[k], rh[k] = rh[l], rh[l] = p;
			}
		}
	}
	for (int i = 0; i < m; i++){
		printf("%d ",ridx[i]);
	}
	return 0;
}