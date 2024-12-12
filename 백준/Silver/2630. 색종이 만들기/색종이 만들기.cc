#include <bits/stdc++.h>

using namespace std;

bool paper[129][129];
int w,b=0;


void dfs(int x,int y,int k){
    int fc = paper[x][y];
    int cut=false;
    for(int i=x;i<x+k;i++){
        for(int j=y;j<y+k;j++){
            if(fc != paper[i][j]){
                cut = true;
                break;
            }
        }
    }
    if(cut == true){
        dfs(x, y, k / 2); 
        dfs(x, y + k / 2, k / 2); 
        dfs(x + k / 2, y, k / 2); 
        dfs(x + k / 2, y + k / 2, k / 2);
    }
    else{
        if(fc == 1){
            b++;
        }
        else{
            w++;
        }
    }
    
}


int main(){
    int n;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin >> paper[i][k];
        }
    }
   
    dfs(0,0,n);
    
    cout << w << '\n' << b;
    

}