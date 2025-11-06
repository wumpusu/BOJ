#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    while(k--){
        int n,m;
        int qnsah=1;
        int result=1;

        cin >>  n >> m;

        int m1 = m;

        for(int i=0 ; i<m-n ;i++){
            qnsah = qnsah*m1;
            qnsah /= i+1;
            m1--;
        }
        
        cout << qnsah << "\n";
    }
}