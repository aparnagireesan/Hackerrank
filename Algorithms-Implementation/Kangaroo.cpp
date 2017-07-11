#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
     int c2 = x2, c1 = x1, flag = 0;
    string char1 = "YES", char2 = "NO";
    if(x2 > x1 && v2 > v1){
         return char2;
    }
       
    else {
        for(int i = 0; i < 10000; i++) {
            c1 = c1 + v1;
            c2 = c2 + v2;
            
            if(c1 == c2) {
                flag++;
                break;
            }
        }
        if(flag != 0)
            return char1;
        else
            return char2;
    }
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
