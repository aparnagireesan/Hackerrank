#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int highest, lowest;
    highest = lowest = s[0];
    vector< int > result(2);
    for(int i = 1; i< s.size(); i++){
        if(s[i] > highest) {
            highest = s[i];
            result[0]++;
        }
        
        else if(s[i] < lowest){
            lowest = s[i];
            result[1]++;
        }
    }
    return result;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}

