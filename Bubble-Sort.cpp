#include <iostream>

using namespace std;

int arr[101],n;

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


void bubbleSort(){                                      /// O(n^2)
    bool flag = false;
    for(int j=0; j<n; j++){                         /// O(n)
            flag = false;
        for(int i=0; i<n-1; i++){                   /// O(n)   >>> change to <n-j-1
            if(arr[i]>arr[i+1]){
                swapAB(arr[i],arr[i+1]);
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
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
    bubbleSort();
    cout<<"After sort"<<endl;
    printArray();

    return 0;
}


