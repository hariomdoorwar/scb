#include <bits/stdc++.h>

using namespace std;
cout<<changes by hariom>>endl;
int commonChild(string s1, string s2) {
    int n = s1.length(), m = s2.length();
    vector<vector<int>> arr(n+1,vector<int>(m+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i-1] == s2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else{
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }
    return arr[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t--){

   string s1,s2;
   cin>>s1>>s2;

    int result = commonChild(s1, s2);

    cout << result << "\n";

    }
    return 0;
}
