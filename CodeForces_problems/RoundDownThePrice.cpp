// problem link
// https://codeforces.com/problemset/problem/1702/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<double> arr = {1, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9};

    while(t--){
        int n;
        cin >> n;
        int res = 0;

        for(int i = 0; i < 10;i++){
            if(n - arr[i] >= 0){
                res = n - arr[i];
            }
        }

        cout << res << endl;
    }
}
