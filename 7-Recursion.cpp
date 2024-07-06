#include <iostream>

using namespace std;
int x =1;

// O(n)  10^8
int fact(int n){
    // base case
    if (n == 1 || n == 0) return 1;
    // call
    return n * fact(n-1);
}

int main()
{
   /* if (x == 1000) return 56;
    cout<<x++<<endl;
    cout << main();
    */

   int n;
   cin>>n;
    /*
    int ans = 1;
    for (int i = n; i>2; i--){
        ans = ans * i; //6 * 5 * 4 * 3 * 2 * 1
    }
    cout<<ans;
    */
   cout<<fact(n)<<endl;

    return 0;
}
