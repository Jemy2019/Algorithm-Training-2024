#include <bits/stdc++.h>

using namespace std;

int arr[101], n;

void swapAB(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
  //  cout<< "inside Func" <<a<<" " <<b<<endl;
}

void printArray(){
    cout<<"Array values: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion1(){ /// O(n^2)
    for (int i=1; i<n; ++i) { // O(n)
        int cur = arr[i]; /// cur => 2 
        //// 1 j=>4 5 (i => 5) 3 6 7
        int j;
        for (j=i-1; j>=0; --j) { // O(n)
            if (arr[j] > cur) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = cur;
    }
}

void insertionSort()
{
        for(int i=1;i<n;i++){
            int temp = arr[i];
            int j=i-1;
            for(; j>=0; j--){
                if(temp < arr[j]){
                    arr[j+1] = arr[j];
                }else {
                    break;
                }
            }
            arr[j+1] = temp;
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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray();
    insertion1();
    cout<<"After sort"<<endl;
    printArray();


    return 0;
}
