#include <iostream>
#include <string>

using namespace std;

int main(){
    string kms;
    int cnt=1;
    
    getline(cin,kms);
    
    if(kms.empty()){
        cout << "0";
    }
    for(int i=0;i<kms.length();i++){
        if(kms[i] == ' '){
            cnt++;
        }
    }
    if(kms[0] == ' '){
        cnt--;
    }
    if(kms[kms.length()-1] == ' '){
        cnt--;
    }
    
    cout << cnt;
}