#include<stdio.h>

int main()
{
    //declaring variables
    int count, temp, arr[20];

    //taking size of array from user
    printf("Enter number of elements: ");
    scanf("%d",&count);

     printf("Enter %d elements:\n", count);
    //using for loop to take inputs for array
    for(int i = 0; i < count; i++)
        scanf("%d",&arr[i]);

    //logic for insertion sort
    for(int i = 0; i < count; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1]) //for decending order change "arr[j]>arr[j-1]"
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else
                break;
        }
    }

    //printing sorted array
    printf("sorted array in acending order\n");
    for(int i = 0; i < count; i++)
        printf("%d\t",arr[i]);
    printf("\n");

    return 0;
}


/*

Output:

Enter number of elements: 4
Enter 4 elements:
4 3 2 1
sorted array in acending order
1   2   3   4   


*/