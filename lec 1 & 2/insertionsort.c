#include<stdio.h>
#define length 10
#define printarr(A) {   for (int i = 1; i <= length; i++) \
                            printf(" %d ", (A)[i]);  }

void insertionsort(int A[])
{
    
    int key, i, j;
    for(j = 2; j <= length; j++){
        key = A[j];
        // insert A[j] into the sorted sequence A[1..j-1]
        i = j - 1;
        while (i > 0 && A[i] > key){
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}


main()
{    
    int A[] = {'s'/* the array to sort*/,   18,2,6,90,1,16,19,2,9,3};
    insertionsort(A);
    printarr(A)
    printf("\n ** %d ",sizeof((A)));
}