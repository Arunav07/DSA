#include <stdio.h>
void insertionSort(int[], int);
int main(void) {
 int n;
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	insertionSort(ar, n);
	for(int i=0;i<n;i++){
		printf("%d \t",ar[i]);
		}
}

void insertionSort(int arr[], int n){
	int i, j, temp;
	for(i=1;i<n;i++){ // starting from the second element,
		temp=arr[i];
		for(j = i-1;j>=0&&arr[j]>temp;j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = temp;
	}
}

// Best Time Complexity = O(n)
// Worst Time COmplexity = O(n^2)
//arr = 16,3,5,2,1
// i goes from 1 to (n-1) i.e. 4
//first iteration => arr = 3,16,5,2,1; i=1; temp = 3
//second iteration => arr = 3,5,16,2,1; i=2; temp = 5
//third iteration => arr = 2,3,5,16,1 i = 3; temp = 2
//fourth iteration => arr = 1,2,3,5,16; i = 4; temp = 1
//
