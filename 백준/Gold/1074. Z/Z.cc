#include <bits/stdc++.h>

using namespace std;

int kms(int sum,int size,int r,int c, int row, int col){
  
  if (size == 1){
    return sum;
  }
  
  int half = size / 2;
  
  if(r < row + half && c < col + half) {             
      return kms(sum, half, r, c, row, col);
  }
  else if(r < row + half && c >= col + half) {      
      return kms(sum + half*half, half, r, c, row, col + half);
  }
  else if(r >= row + half && c < col + half) {       
      return kms(sum + 2*half*half, half, r, c, row + half, col);
  }
  else {                                             
      return kms(sum + 3*half*half, half, r, c, row + half, col + half);
  }
}


int main(){
    
    int n,r,c;
    
    cin >> n >> r >> c;

    int size = 1 << n;

    int ans = kms(0, size, r, c, 0, 0);
    
    cout << ans;
}