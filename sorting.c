#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void bubbleSort (int arr[], int n) 
{
    for ( int i=0; i<=n-1;i++)// N elements => (N-1) pass
    {
    
        int flag =0;
        for ( int j=0;j<=n-1;j++ )// Execute the pass
        {
            if ( arr [j] > arr[j+1] )
            { 
                swap( &arr[j], &arr[j+1] );
                flag=1;
            }
        }
        if (flag=0) // exit the loop
            break;
    }
}

void quickSort(int arr[],int first,int last){

int i, j, pivot, temp;

if(first<last){

pivot=first;

i=first;

j=last;

while(i<j){

while(arr[i]<=arr[pivot]&&i<last)

i++;

while(arr[j]>arr[pivot])

j--;

if(i<j){

temp=arr[i];

arr[i]=arr[j];

arr[j]=temp;

}

}

temp=arr[pivot];

arr[pivot]=arr[j];

arr[j]=temp;

quickSort(arr,first,j-1);

quickSort(arr,j+1,last);

}

}
int main()
{
    int k,n;
    printf("enter the option(1 2 3 4 5): ");
    scanf("%d",&k);
    printf("size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    switch(k){
        case 1:
        insertionSort(a,n);
        break;
         case 2:
        selectionSort(a,n);
        break;
        case 3:
        bubbleSort(a,n);
        break;
        case 4:
        quickSort(a,0,n-1);
        break;
        default:
        
    printf("not sorted\n");

    }
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
    return 0;
}