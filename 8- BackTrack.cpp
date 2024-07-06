#include <iostream>

using namespace std;
int x = 1;

// O(n)  10^8
int fact(int n){
    // base case
    if (n == 1 || n == 0) return 1;
    // call
    --n; // do
    int ret = fact(n); // recurse
    n++; // undo
    //cout<<x<<endl;
    return n * ret;
}



int ans = 0, tr, tc, rr = 0, rc = 0,n,m;
char maze[101][101];

bool isValid (int r, int c){
    return (r < n && c < m && maze[r][c] != '#');
}

void backtrack(int r=0, int c=0){
    // base case
    if (r == tr && c == tc){
        ans++;
        return;
    }

    // op1 : go right
    c++; // do 
    if (isValid(r,c)) backtrack(r,c);// recurse
    c--;// undo

    // op2 : go down
    r++;// do 
    if (isValid(r,c)) backtrack(r,c);// recurse
    r--;// undo

}

int main()
{
   /* if (x == 1000) return 56;
    cout<<x++<<endl;
    cout << main();
    */
/*
   int n;
   cin>>n;
   
   cout<<fact(n)<<endl;
*/

    
    cin>> n >> m;
    for (int i=0; i<n; i++) {
        for (int j = 0; j<m; j++)
            cin >> maze[i][j];
    }


    cin >> tr >> tc;

    backtrack(rr,rc);

    cout<<ans<<endl;

    return 0;
}
