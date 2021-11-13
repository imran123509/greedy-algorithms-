#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>> ans;
	for(int i=0; i<n; i++){
		int start_time, end_time;
		cin>>start_time>>end_time;
		ans.push_back({start_time, end_time});
		}
		sort(ans.begin(), ans.end(),[&](vector<int> &a, vector<int>&b){ 
		return a[1]<b[1];
		});
		int take=1;
		int end_time=ans[0][1];
		for(int i=1; i<n; i++){
			if(ans[i][0]>=end_time){
				take++;
				end_time=ans[i][1];
			}
		}
		cout<<take<<endl;

}
