#include<stdlib.h>

void swap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

int bubble_sort(int *arr,int size){
    
    for(int i = 0; i < size; i++){
        //printf("RUn");
        for(int j = i+1; j < size; j++){
            
        //printf("Heddo");
            if(arr[i] > arr[j] ){

                swap(&arr[i],&arr[j]);
            
            }
        }
    }

}


void main(){

int arr[] = {5,2,12,32,1};
int size = 5;
bubble_sort(arr,size);

for(int i = 0; i < size; i++){
    printf("%d\t", arr[i]);
}

}