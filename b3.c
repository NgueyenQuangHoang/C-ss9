#include<stdio.h>

int main(){
    int arr[100];
    int currentIndex;
    int removeIndex;
    printf("Enter the number of elements: ");
    scanf("%d", &currentIndex);
    int size = currentIndex;
    for (int i = 0; i < currentIndex; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the index to remove: ");
    scanf("%d", &removeIndex);

    if (removeIndex < 0 || removeIndex >= currentIndex)
    {
        printf("Index out of range\n");
    }else{
        for (int i = removeIndex; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }size--;
    }    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}