#include<stdio.h>
const int MAX_SIZE = 100;
int main(){
    int arr[MAX_SIZE];

    int currentIndex;
    printf("Enter the number of elements: ");
    scanf("%d", &currentIndex);
    for (int i = 0; i < currentIndex; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < currentIndex; i++)
    {
        printf("%d ", arr[i]);
    }


    int addIndex;
    printf("\nEnter the index to add: ");
    scanf("%d", &addIndex);


    int addValue;
    printf("Enter the value to add: ");
    scanf("%d", &addValue);
    
    if (addIndex > 100)
    {
        printf("Index out of range\n");
    }else{
        if(addIndex > currentIndex){
            arr[addIndex] = addValue;
            currentIndex = addIndex + 1;
        }else if (addIndex < 0){
            addIndex = 0;
        }else{
            for ( int i = currentIndex - 1; i >= addIndex; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[addIndex] = addValue;
            currentIndex++;
        }
        
    }
    for (int i = 0; i < currentIndex; i++)
    {
        printf("%d ", arr[i]);
    }
    
} 