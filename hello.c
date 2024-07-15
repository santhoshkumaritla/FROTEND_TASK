#include<stdio.h>
void BubbleSort(int arr[],int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void InsertionSort(int arr[],int size){
    int temp;
    for(int i = 1 ;i<size;i++){
        temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void SelectionSort(int arr[],int size){
    for(int i = 0;i<size-1;i++){
        int min = i;
        for(int j = i+1;j<size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++){
        printf("Array[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int choice;
        
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
              BubbleSort(arr,size);
              break;
            case 2:
              InsertionSort(arr,size);
              break;
            case 3:
              SelectionSort(arr,size);
              break;
            default :
                printf("Invalid choice!Enter valid choice\n");
            
        }
    }while(choice!=-1);
}