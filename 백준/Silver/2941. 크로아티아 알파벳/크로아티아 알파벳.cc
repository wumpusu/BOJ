#include <iostream>
#include <string>

using namespace std;

int main(){
    string kms;
    
    string ch[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    
    
    cin >> kms;
    
    int index;
    
   for(int i=0;i<8;i++){
       while(1){
           index = kms.find(ch[i]);
           if(index == string::npos){
               break;
           }
           kms.replace(index,ch[i].length(),"a");
       }
   }
   
   cout << kms.size();
}
