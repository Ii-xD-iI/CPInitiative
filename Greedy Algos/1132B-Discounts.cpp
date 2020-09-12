#include "bits/stdc++.h"
//PRAY :DOLPHINGARLIC: orz orz orz orz orz 
//PRAY :DORI: orz orz orz orz orz orz orz 
//PRAY :SAHIL KUCHLOUS: orz orz orz orz orz
#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define all(x) x.begin(), x.end()
#define el '\n'
#define Int long long
#define elif else if
#define test int t; cin>>t; while(t--)
 
using namespace std;
 
 
int main(){
	GS;
	int n; cin>>n;
	vector<int> box(n);
	Int sum{};
	for(int i {};i<n;++i){
		int x;
		cin>>x;
		box[i]=x;
		sum+=x;
	}
	sort(all(box));
	reverse(all(box));
	int m;cin>>m;
	for(int i {};i<m;i++){
		int ans{};
		int mc;cin>>mc;
		cout << sum - box[mc-1] << endl;
	}
	return 0;
}
/*
4:18 PM
9/12/2020 mm/dd/yyyy
*/
