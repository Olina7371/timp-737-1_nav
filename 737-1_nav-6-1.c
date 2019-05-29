#include <stdio.h>
#include <stdlib.h>

int sorting_function(int *arr, int arr_len){
	if (arr && arr_len)
	{
		int value = arr_len;
		int i;
		int val_2 = 1;
		while(value > 1 || val_2)
		{
			if (value > 1)
			value /= 1.2473309;
				val_2 = 0;
			for (i = 0; i + value < arr_len; ++i)
			{
				if (arr[i + value] > arr[i])
				{
					int temp;
					temp = arr[i];
					arr[i] = arr[i + value];
					arr[i + value] = temp;
							val_2 = 1;
				}
			}
		}
	}
	return 1;
}

 int main() {
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	sorting_function(arr, n);

	for (i = 0; i < n; i++)
	{
//	printf("%d ", arr[i]);
        if(i == n-1) {
           printf("%d\n", arr[i]);
        }
        else {
              printf("%d ", arr[i]);
	}
	//printf("\n");
        }
	return 0;
 }