#include <iostream>

using namespace std;
int arr[101], frq[1001],n;
char charr[101];
void printArray(int arr[], int n){
    cout<<"Array values: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int q,x;
    char y;
    cin>>n>>q;
    for (int i=0;i<n;i++) {
        //cin>>arr[i];
        cin>>charr[i];
    }

    for (int i=0;i<n;i++) { /// O(n) 10^5
        //frq[arr[i]]++;
        frq[charr[i]-'a']++;
    }
    
    printArray(arr, n);
    /// O(n^2)
    while (q--){ /// O(q) 10^5
        //cin>>x;
        cin>>y;
        //for ()>>n ///O(n)
        //cout<<frq[x];
        cout<<frq[y-'a']; /// O(1)
    }
    

    cout<<"After Frq: ";
    printArray(arr, n);
    return 0;
}

