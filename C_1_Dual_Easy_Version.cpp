#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int neg_count = 0, pos_count = 0;
    int min_neg = LLONG_MAX, max_pos = LLONG_MIN;
    int idx_min_neg = -1, idx_max_pos = -1;

    for(int i=0;i<n;i++){
        if(a[i]<0){
            neg_count++;
            if(a[i]<min_neg){
                min_neg = a[i];
                idx_min_neg = i;
            }
        }
        else if(a[i]>0){
            pos_count++;
            if(a[i]>max_pos){
                max_pos = a[i];
                idx_max_pos = i;
            }
        }
    }

    if(neg_count==0 && pos_count==0){
        cout << 0 << "\n";
        return;
    }

    vector<pii> res;
    if(pos_count >= neg_count){
        while(max_pos < 20){
            max_pos += max_pos;
            res.push_back({idx_max_pos+1, idx_max_pos+1});
        }
        a[idx_max_pos] = max_pos;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                a[i] += max_pos;
                res.push_back({i+1, idx_max_pos+1});
            }
        }
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                a[i] += a[i-1];
                res.push_back({i+1,i});
            }
        }
    }
    else{
        while(min_neg > -20){
            min_neg += min_neg;
            res.push_back({idx_min_neg+1, idx_min_neg+1});
        }
        a[idx_min_neg] = min_neg;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                a[i] += min_neg;
                res.push_back({i+1, idx_min_neg+1});
            }
        }
        for(int i = n-2; i>=0; i--){
            if(a[i]>a[i+1]){
                a[i] += a[i+1];
                res.push_back({i+1, i+2});
            }
        }
    }

    cout << (int)res.size() << "\n";
    for(auto &p : res) cout << p.first << " " << p.second << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
