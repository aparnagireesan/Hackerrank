#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int count = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        sum = s[i];
        for(int j = i+1; j < i+m; j++) {
            sum+=s[j]; 
        }
            if(sum == d)
              count++; 
        sum = 0;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
