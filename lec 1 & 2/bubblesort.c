#include<stdio.h>
#define length 10
enum {true = 1, false = 0};
#define swap(A, i, j) {  int temp = A[i]; \
                         A[i] = A[j];   \
                         A[j] = temp; } 
#define printarr(A) {   for (int i = 1; i <= length; i++) \
                            printf(" %d..%d ", i, (A)[i]);  }                         

void bubblesort(int A[], int n)
{    
    int flag;
    flag = true;

    for (int i = 1; i <= n-1 && flag == true; i++)
    {
        flag = false;
        for (int j = 1; j <= n-i; j++){
            if (A[j] > A[j+1]){
                swap(A, j, j+1);
                flag = true;
            }
        }
    }
}


main()
{    
    int A[] = {'s'/* the array to sort*/,   18,2,6,90,1,16,19,2,9,3};
    bubblesort(A, 10);
    printarr(A)
    //printf("\n ** %d ",sizeof((A)));
}