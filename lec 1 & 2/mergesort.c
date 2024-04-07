#include<stdio.h>
#define length 10
#define INF 1000
#define printarr(A) {   for (int i = 1; i <= length; i++) \
                            printf(" %d ", (A)[i]);  }

void merge(int A[], int p, int q, int r)
{
    int n1, n2, i, j, k;
    n1 = q - p + 1;
    n2 = r - q;
    int L[n1+1  +1], R[n2+1   +1];
    for (i = 1; i <= n1; i++)
        L[i] = A[p+i-1];
    for (j = 1; j <= n2; j++)
        R[j] = A[q+j];
    L[n1+1] = INF;
    R[n2+1] = INF;
    i = 1;
    j = 1;
    for (k = p; k <= r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i = i + 1;
        }
        else {
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void mergesort(int A[], int p, int r)
{
    if (p < r){
        int q = (p + r)/2;
        mergesort(A, p, q);
        mergesort(A, q+1, r);
        merge(A, p, q, r);
    }
}

main()
{    
    int A[] = {'s'/* the array to sort*/,   18,2,6,90,1,16,19,2,9,3};
    mergesort(A, 1, 10);
    printarr(A)
    //printf("\n ** %d ",sizeof((A)));
}