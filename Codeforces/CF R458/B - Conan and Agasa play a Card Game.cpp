#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,n) for(int i=a;i<n;++i)
#define PER(i,a,n) for(int i=n-1;i>=a;--i)
#define SNUKE(c, a, itr) for(__typeof(std::begin(c)) itr = std::begin(c); itr != std::end(c); itr++)
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define v vector
#define pq priority_queue
const int mod = 1000000007;
vector<vector<int>> ed={{1,0},{0,1},{-1,0},{0,-1}};

bool myComp(int i, int j){return i>j;} //Need to be written outside the class (Why?)

int main(){
    int n;
    cin>>n;

    v<int> arr(100001);
    REP(i,0,n){
        int a;
        cin>>a;
        ++arr[a];
    }

    PER(i,0,100001){
        if(arr[i]%2==1){
            cout<<"Conan"<<endl;
            return 0;
        }
    }

    cout<<"Agasa"<<endl;
return 0;
}