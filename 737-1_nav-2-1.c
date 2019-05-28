#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, n, min, i;
	min = 2147483647;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &x);
		if(x<=min){
			min = x;
		}
	}
	printf("%d", min);
	return 0;
}
