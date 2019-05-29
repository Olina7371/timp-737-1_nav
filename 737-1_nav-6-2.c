#include <stdio.h>
#include <stdlib.h>

void sorting_function(int *arr, int arr_len){
	int i, j, temp, value;
	for (value = arr_len / 2; value > 0; value /= 2){
		for (i = value; i < arr_len; i++)
		{
			temp = arr[i];
			for (j = i; j >= value; j -= value)
			{
				if (temp < arr[j - value])
					arr[j] = arr[j - value];
					else
						break;
			}
			arr[j] = temp;
		}
	}
}

int main() {
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	sorting_function(arr, n);
         
        for(i = 0; i<n; i++) {
	//printf("%d ", arr[n-1]);
	  if (i == n-1) {
		printf("%d\n", arr[i]);
	}
        else {
              printf("%d ", arr[i]);
        }
	//printf("\n");
        }
	return 0;
 }