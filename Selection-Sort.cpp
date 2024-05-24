#include <iostream>

using namespace std;

int arr[101],n;

void printArray(){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
}

void swapAB(int &a, int &b){
    int c = a;
    a = b; 
    b = c;
}

void selectionSort() { // O(n^2)
    int min;
    int mnidx; 
    int j = 0;
    while (j<n) { // O(n) /// 5 7 1 8 0
        min = arr[j];
        mnidx = j; 
        int a = j+1;
        for (int i = a; i<n; i++){ // O(n)
            if (arr[i] < min) {
                min = arr[i];
                mnidx = i;
            }
        }
        swapAB(arr[j], arr[mnidx]); // O(1)
        j++;
    }
}

int main()
{
/*
    int a=5, b=6;
    cout<<a<<" "<<b<<endl;
    swapAB(a,b);
    cout<<a<<" "<<b<<endl;
  */
  /// 5
  /// 1 4 9 3 8

    cin>>n;
    for(int i=0; i<n; i++){ ///i >>  0,1,2,3,4
        cin>>arr[i];
    }
    printArray();
    selectionSort();
    cout<<"After sort"<<endl;
    printArray();

    return 0;
}