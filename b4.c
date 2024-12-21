#include<stdio.h>

int main(){
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    while (1)
    {
        printf("==================menu==================\n");
        printf("1. import to array\n");
        printf("2. show array\n");
        printf("3. add to array\n");
        printf("4. edit from array\n");
        printf("5. remove from array\n");
        printf("6. exit\n");
    
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 6)
        {
            printf("Invalid choice\n");
            continue;
        }
        
        switch (choice)
        {
        case 1:
            
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            size = n;
            for (int i = 0; i < size; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            printf("Import successfully\n");
            break;
        case 2:
            if (size == 0)
            {
                printf("Array is empty\n");
            }else{
                for (int i = 0; i < size; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
            break;
        case 3:
            int addIndex;
            printf("Enter the index to add: ");
            scanf("%d", &addIndex);
            int addValue;
            printf("Enter the value to add: ");
            scanf("%d", &addValue);
            if (addIndex < 0)
            {
                addIndex = 0;
            }else if (addIndex > size)
            {
                addIndex = size;
            }else{
                for (int i = size; i >= addIndex; i)
                {
                    arr[i + 1] = arr[i];
                }arr[addIndex] = addValue;
                size++;
            }
            printf("Add successfully\n");
            break;
        case 4:
            int editIndex, newValue;
            printf("Enter the index to edit: ");
            scanf("%d", &editIndex);
            printf("Enter the new value( Old Value is: %d): ", arr[editIndex]);
            scanf("%d", &newValue);
            if (editIndex < 0 || editIndex >= size)
            {
                printf("Index out of range\n");
            }else{
                arr[editIndex] = newValue;
                printf("Edit successfully\n");
            }
            break;
        case 5:
            int removeIndex;
            printf("Enter the index to remove: ");
            scanf("%d", &removeIndex);
            if (removeIndex < 0 || removeIndex >= size)
            {
                printf("Index out of range\n");
            }else{
                for (int i = removeIndex; i < size; i++)
                {
                    arr[i] = arr[i + 1];
                }size--;
                
            }
            printf("Remove successfully\n");
            break;
        default:
            printf("Bye\n");
            break;
        }
    }
    
}