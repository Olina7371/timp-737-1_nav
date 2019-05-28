#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, x, sum, i;
	sum = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &x);
		sum += x*x;
	}
	printf("%d", sum);
	return 0;
}
