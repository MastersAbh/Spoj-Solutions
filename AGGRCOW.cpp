#include <bits/stdc++.h>
using namespace std;
#define lint long long int
#define f(x,n) for(lint i=x;i<n;i++)
#define fr(x,n) for(lint j=x;j<n;j++)


bool chk(vector<lint> a,lint mid,lint m){
    lint l=a.size();
    lint h=a[0],c=1;
    f(1,l){
       if(a[i]-h>=mid){
           h=a[i];
           c++;
       }
       if(c==m){
           return true;
       }
    }
    return false;
}
int main() {
    lint t;
    cin>>t;
    while(t--){
        lint x,n,m;
        cin>>n>>m;
        vector<lint> a;
        f(0,n){
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        lint l=1,h=a[n-1]-a[0];
        lint ans=h;
        while(l<=h){
            lint mid=l+ (h-l)/2;
            if(chk(a,mid,m)){
                l=mid+1;
                ans=mid;
            }
            else{
                h=mid-1;
            }
        }
        cout<<ans<<endl;
    }

	// your code goes here
	return 0;
}
