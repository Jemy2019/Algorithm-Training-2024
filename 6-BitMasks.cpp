#include <iostream>

using namespace std;
int arr[100],n,t;

bool isOn(int k, int x) {
    return ((x>>k) & 1);
}

bool bitMask(int target){
    int sum = 0;
    for(int mask=0; mask < (1<<n); mask++) { /// (2^n)-1
        /// mask =  7
        for (int k=0; k<n; k++){
            if (isOn(k, mask)){
                sum += arr[k];
            }
        }
        //cout<<sum<<endl;
        if (sum == target) return true;
        sum = 0;
    }
    return false;
}




int main()
{   
    cin>>n;
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }

    cin>>t;

    if (bitMask(t)) cout << "YES";
    else cout << "NO";

    return 0;
}
