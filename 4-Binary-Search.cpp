#include <iostream>

using namespace std;

const int N = 1e5 + 1;
int n, k, have[N],need[N];

/*
n 3 k 10 >> 1
need 2 1 4
have 10 3 16

x = 5 
*/

bool isOk(int x){
    int tmpk = k;///10
    for (int i=0;i<n;i++) {
        int curNeed = need[i] * x;
        if (have[i]<curNeed) {
            int diff = curNeed - have[i];
            if (tmpk>=diff){
                tmpk-=diff;
            } else {
                return false;
            }
        }
    }
    return true;
}



int binarySearch(){ /// O(logn) * O(isOK())
    int l = 0;
    int h = 2 * 1e3;///2000 >> 2*1e9

    while(l<h) {
        int mid = (h+l+1)/2;
        if (isOk(mid)) { /// true == 1
            l = mid;
        } else {//false
            h = mid-1;
        }
    }

    return l;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>need[i];
    }
    for(int i=0;i<n;i++){
        cin>>have[i];
    }

    cout<<binarySearch();

    return 0;
}