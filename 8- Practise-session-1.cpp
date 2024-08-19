#include <bits/stdc++.h>
#define N (int)(2e1+1)
#define ll long long

using namespace std;
//const int N = 1e3+1;
int t,T,p, arr[N],ans;
bool flag=false;
vector<int> v;
vector<vector<int>> ansV;
//set<vector<int>> st;// increasing
//set<vector<int>, greater<vector<int>>> st;// decreasing
void solve(int i=0, int sum=0){
    /// basecase
    //if (flag)return;
    if(i==p){
        if (sum == T){
            flag = true;
            //ans++;
            ansV.push_back(v);
        }
        return;
    }

    /// op2: leave
    solve(i+1, sum);/// if valid recurse

    /// op1: take
    //i++; sum+= arr[i];/// do
    v.push_back(arr[i]);
    solve(i+1, sum + arr[i]);/// if valid recurse
    //i--; sum-=arr[i];/// undo
    v.pop_back();

}

int main()
{ 
    scanf("%d", &t);
    //printf("%d", t);
    while(t--){
        flag=false;
        scanf("%d%d", &T, &p);
        //printf("%d %d", T, p);
        for(int i=0;i<p;i++){
            scanf("%d", arr+i);
        }

        solve();

        if (flag)printf("YES\n");
        else printf("NO\n");

        for(vector<int> e:ansV){
            for(int i:e){
                printf("%d ", i);
            }
            printf("\n");
        }
    }
   

    return 0;
}
