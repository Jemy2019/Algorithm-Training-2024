#include <iostream>

using namespace std;

void printArray(int arr[], int n){
    cout<<"Array values: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//int arr[]={3,7,10,mid=>11   ,5,7,9},n=7;
// O(n+m) => O(n)
void merge(int arr[], int l, int mid, int h) {
    int i=l;
    int szA = mid-l+1; // l=0 , mid = 3, h= 6 
    int n= mid+1;

    int j= mid+1; 
    int szB = h-mid;
    int m=h+1;

    int C[szA+szB];
    int k = 0;
    while (i<n && j<m){
        if (arr[i]<arr[j])
            C[k++] = arr[i++];
        else 
            C[k++] = arr[j++];
    }
    while (i<n) C[k++] = arr[i++];
    while (j<m) C[k++] = arr[j++];
    //printArray(C, szA+szB); 
   
    int a=l;
    k=0;
    while (k<(szA+szB))
        arr[a++] = C[k++];
    
}

// O(nlog(n))
void MS(int arr[], int l, int h) { /// MS (7 5)
    if (l<h) {
        int mid= (h-l)/2; 
        MS(arr, l, mid); /// left  7
        MS(arr, mid+1, h); /// right 5
        merge(arr, l=0,mid=0,h=1); /// merge => O(n)
    }
}


void simpleMerge(int A[], int B[], int szA, int szB) {
    int i,j,k, C[szA+szB];
    i=j=k=0;
    while (i<szA && j<szB){
        if (A[i]<B[j])
            C[k++] = A[i++];
        else 
            C[k++] = B[j++];
    }
    while (i<szA) C[k++] = A[i++];
    while (j<szB) C[k++] = B[j++];
    printArray(C, szA+szB); 
}

int main()
{

    int arr[]={3,7,10,11,5,7,9},n=7;
    //int A[]={3,7,10,11},B[]={5,7,9};
    simpleMerge2(arr,0,3,6);

    //mergeSort(arr, 0, n-1);
    cout<<"From main: ";
    printArray(arr, n);
    return 0;
}