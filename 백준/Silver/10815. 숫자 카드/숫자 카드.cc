#include <iostream>
#include <algorithm>

using namespace std;

int a[500001];
int b[500001];
int c[500001]={0,};
    
int main(){
    int n,m;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    cin >> m;
    
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    
    sort(a,a+n);
    
    for(int i=0;i<m;i++){
        int start=0;
        int end=n-1;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(a[mid] == b[i]){
                c[i] = 1;
                break;
            }
            else if(a[mid]>b[i]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        cout << c[i] << " ";
    }
}