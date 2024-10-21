#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
  int pal=0;
  cin >> name;

  int len = name.length();

 
  for(int i = 0; i < len/2; i++){
    if(name[i] != name[len-i-1]){
      cout << len;
      return 0;
    }
    else if(name[i] != name[i+1]){
      pal = 1;
    }
  }

  if(pal==1){
    cout << len-1;
  }
  else{
    cout << -1;
  }

}