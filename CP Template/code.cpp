#include <bits/stdc++.h>
using namespace std;


bool f(vector<int>& arr,int k){

    bool sorted = true;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            sorted = false;
            break;
        }
    }

    if(sorted || k > 1){
        return true;
    } else {
        return false;
    }
}


void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin>>nums[i];
        }
        bool res = f(nums,k);
        if(res){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }


    }

}

int main() {
    // Redirecting input and output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    solve();

    return 0;
}
