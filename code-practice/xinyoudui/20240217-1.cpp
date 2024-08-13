#include<cstdio>
using namespace std;
int main() {
    int a, b, c;
    scanf("%d%d%d" , &a, &b, &c);
    int n;
    scanf("%d" , &n);
    int x, y, z;
    for(int i; i < n; i++) {
		scanf("%d%d%d" , &x, &y, &z);
        if (x > a && y > b && z > c) {
            printf("%d %d %d", x, y, z);
            return 0;
        }
    }
    printf("-1 -1 -1");
    return 0;
}