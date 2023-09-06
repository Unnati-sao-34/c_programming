#include<stdio.h>
#include<stdbool.h>
void swap(int *xp,int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}
void bubbleSort(int arr[],int n){
    int i,j;
    bool swapped;
    for(i = 0;i<n-1;i++){
        swapped = false;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped= true;
            }
        }
        if(swapped == false)
        break;
    }
}
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[5];
    int i,k;
    printf("enter the size of array to be sorted:");
    scanf("%d",&k);
    printf("enter the elements:");
    for(i = 0;i<k;i++){
    scanf("%d",&arr[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("bubble array: \n");
	printArray(arr, n);
	return 0;
}

#include<stdio.h>
void swap(int *xp,int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}

int main()
{
	int arr[5];
    int i,k;
    printf("enter the size of array to be sorted:");
    scanf("%d",&k);
    for(i = 0;i<k;i++){
    printf("enter the elements: \n");
    scanf("%d",&arr[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("bubble array:\n");
	printArray(arr, n);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//sorting
void  bubblesort(int a[], int n){
  bool swapped;
  for(int i=0;i<n-1;i++){
    swapped = false ;
    for(int j=0;j<n-1-i;j++){
      if(a[j]<a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        swapped = true;

      }
    }
    if(swapped == false)
    break;
  }
}
//print array
void printarray(int a[], int size){
for (int i = 0; i < size; ++i) {
    printf("%d  ", a[i]);
  }
  printf("\n");
}
int main(){
  int data[] = {-2, 45, 0, 11, -9};
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  bubblesort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printarray(data, size);
}