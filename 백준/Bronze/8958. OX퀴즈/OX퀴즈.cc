#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	
	cin >> t;
	
	string a;
	
	while(t--){
		cin >> a;
		int sum,cnt;
		sum = cnt = 0;
		
		
		for(int i=0;i<a.length();i++){
			if(a[i] == 'O'){
				cnt++;
				sum += cnt;
			} 
		
			else {
			 cnt=0;
			}
		}	
		
		cout << sum << '\n';
	}

}