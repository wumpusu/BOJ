#include <bits/stdc++.h>

using namespace std;

int main(){
    int apt[101][15];
    
    int t;
    int k,m;
    
    cin >> t;
    
    while(t--){
        cin >> k >> m;
    
        
        for(int i=0;i<=k;i++){
            for(int j=1;j<=m;j++){
                if(i == 0){
                    apt[0][j] = j;
                }
                else if(j==1){
                    apt[i][1] = 1;
                }
                else 
                     apt[i][j] = apt[i][j-1] + apt[i-1][j];
            }
        }
        cout << apt[k][m] << '\n';
    }
    
}