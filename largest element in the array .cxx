#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Entet a number of elements: ");
	scanf("%d",&n);
	int arr[10],i,max=0;
	for(i=0;i<n;i++){
		printf("Enter a element:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		while(i<n){
		if(max<arr[i]){
			max = arr[i];
		}
		i++;
	 	}
	}
		for(i=0;i<n;i++){
			printf("%d\t ",arr[i]);
		}
		printf("\nLargest element is tha array is: ");
		printf("%d \n",max);
	return 0;
}