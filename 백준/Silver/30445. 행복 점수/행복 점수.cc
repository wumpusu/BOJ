#include <bits/stdc++.h>

using namespace std;

int main(){
  
  string arr;
  
  getline(cin ,arr);
  
  
  double happy=0;
  double sad=0;
  double total=0;
  
  for(int i=0;i<arr.size();i++){
    if(arr[i] == 'H' or arr[i] == 'A' or arr[i] == 'P' or arr[i] == 'Y'){
      happy++;
    }
    if(arr[i] == 'S' or arr[i] == 'A' or arr[i] == 'D'){
      sad++;
    }
  }
  
  if(happy == 0 and  sad == 0){
    cout << "50.00";
    return 0;
  }
  
  else {
   total = happy + sad;
  }
  
  cout << fixed << setprecision(2);

  double ans = (happy / total) * 100.0;
  double rounded = round(ans * 100.0) / 100.0;
  cout << rounded;
    

    return 0;
}