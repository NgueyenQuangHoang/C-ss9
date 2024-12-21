#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6};
    int size = 6;
    int editIndex, newValue;
     for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }printf("\n");

    printf("Enter the index to edit: ");
    scanf("%d", &editIndex);
    printf("Enter the new value: ");
    scanf("%d", &newValue);
    
    if (editIndex < 0 || editIndex >= size)
    {
        printf("Index out of range\n");
        }else{
            arr[editIndex] = newValue;
        }
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}