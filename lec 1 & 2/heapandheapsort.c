#include<stdio.h>
#define left(i) i<<1
#define right(i) (i<<1) + 1
#define parent(i) i>>1
//#define length(A) sizeof(A)/sizeof(int)
#define swap(A, i, j) {  int temp = A[i]; \
                         A[i] = A[j];   \
                         A[j] = temp; } 


#define printarr(A) {   for (int i = 1; i <= length; i++) \
                            printf(" %d ", (A)[i]);  }

int heapsize;
int length = 9;
void maxheapify(int A[], int i)
{
    if (i > length/2)
        return;
    int l, r, largest; 
    l = left(i);
    r = right(i);
    if (l <= heapsize && A[l] > A[i])
            largest = l;
    else largest = i;
    if (r <= heapsize && A[r] > A[largest] )
        largest = r;
    if (largest != i){
        swap(A, i, largest)
        maxheapify(A, largest);
    }
}

void buildmaxheap(int A[])
{
    heapsize = length;
    for (int i = length/2; i > 0; i--)
        maxheapify(A, i);

}

void heapsort(int A[])
{
    buildmaxheap(A);
    for (int i = length; i > 1; i--){
        swap(A, 1, i)
        heapsize = heapsize - 1;
        maxheapify(A, 1);
    }

}

main()
{    
    int A[] = {2,6,5,18,1,2,9,3,5,6};
    heapsort(A-1);
    //buildmaxheap(A-1);
    printarr(A-1)
    printf("\n ** %d ", 5);
}
