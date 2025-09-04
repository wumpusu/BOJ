#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	vector <int> fruits(n);
	for(int i=0;i<n;i++){
		cin >> fruits[i];
	}
	
	unordered_map<int, int> cnt;
	
	int left=0,ans=0;
	
	for(int right=0;right<n;right++){
		cnt[fruits[right]]++;
	
		
		while(cnt.size() > 2){
			cnt[fruits[left]]--;
			if(cnt[fruits[left]]==0){
				cnt.erase(fruits[left]);
			}
			left++;
		}
		
		ans = max(ans , right - left +1);
	}
	
	cout << ans;
	
}