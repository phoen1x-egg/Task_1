/*
clear; gcc ex07.c -o ex07; ./ex07
*/
// Program to print all permutations of a string in sorted order.
// Program to print all permutations of a string in sorted order.
#include <stdio.h>
#include <stdbool.h>
void makeCombination(int arr1[], int data[], int st, int end,
                     int index, int r);

void CombinationDisplay(int arr1[], int n, int r)
{
    int data[r];
    makeCombination(arr1, data, 0, n-1, 0, r);
}

void makeCombination(int arr1[], int data[], int st, int end,
                     int index, int r)
{

    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d", data[j]);
        printf("\n");
        return;
    }
    for (int i=st; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr1[i];
        makeCombination(arr1, data, i+1, end, index+1, r);
    }
}
int main()
{
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int r;
    bool kek = false;
    while ( ! kek) {
      printf("Enter an integer: ");
      scanf("%d", &r);
      if (r > 0 && r < 10) {
        int n = sizeof(arr1)/sizeof(arr1[0]);
        //------------------------------------------------------
        CombinationDisplay(arr1, n, r);
        kek = true;
      }
      else {
        printf("integer should be greater than 0 and less than 10\n");
      }
   }
}
