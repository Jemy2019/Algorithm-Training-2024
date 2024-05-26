
#include <iostream>

using namespace std;
int arr[101],n, pre[101],r,l,q, kad[101];
void printArray(int arr[], int n){
    cout<<"Array values: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    printArray(arr, n);
    pre[0] = arr[0];
    // O(n)
    for (int i=1;i<n;i++) {
        //code
        pre[i] = pre[i-1] + arr[i];
    }
    cout<<"After Prefix: ";
    printArray(pre, n);

    kad[0] = (arr[0]>0)? arr[0] : 0;
    // O(n)
    for (int i=1;i<n;i++) {
        //code
        kad[i] = kad[i-1] + arr[i];
        if(kad[i]<0) kad[i]=0;
    }
    cout<<"After kaddane: ";
    printArray(kad, n);

    cin>>q;
    while(q--) {
        cin>>l>>r;
        if (l==0) cout<<pre[r];
        else cout<< pre[r] - pre[l-1];
    }
    return 0;
}
