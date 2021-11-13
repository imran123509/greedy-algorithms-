#include<bits/stdc++.h>
using namespace std;
bool comprator(pair<int,int>p, pair<int,int>p1){
	double v=(double)p.first/p.second;
	double v1=(double)p1.first/p1.second;
	return v>v1; 
}
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a.begin(), a.end(), comprator);
	int w;
	cin>>w;
	int ans=0;
	for(int i=0; i<n; i++){
		if(w>=a[i].second){
			ans +=a[i].first;
			w -=a[i].second;
			continue;
		}
		double vw=(double) a[i].first/a[i].second;
		ans +=vw*w;
		w=0;
		break;
	}
	cout<<ans<<endl;

}
