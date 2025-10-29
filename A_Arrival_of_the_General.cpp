#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    int mxpos=0, mnpos=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>a[mxpos]) mxpos=i;
        if(a[i]<=a[mnpos]) mnpos=i;
    }
    int res=mxpos+(n-1-mnpos)-(mxpos>mnpos?1:0);
    cout<<res<<"\n";
}
