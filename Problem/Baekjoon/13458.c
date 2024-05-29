#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int n, b, c;
	long long sup = 0; // 최소 감독관의 수

	scanf("%d", &n);

	int *a = (int *)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	scanf("%d%d", &b, &c);

	for (int i = 0; i < n; i++) {
		sup += 1;
		a[i] -= b;
        
		if (a[i] > 0) {
			sup += ceil(a[i] * 1.0 / c);
		}
	}
	printf("%lld", sup);

	free(a);
    
}
