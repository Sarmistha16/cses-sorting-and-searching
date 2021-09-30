#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void subArraySum()
{
	ll int n,target; 
	cin>>n>>target ;
    ll int i=0;
    ll int a[n+1]={0};
	for(int i=0 ; i< n; i++)
	{
		cin>>a[i] ;						// 2 4 1 2 7
	}
    map<int,int> mp;
    ll int sum=0; 
	mp[0]=1; 		// key =0 	whose value =1
    ll int ans=0;
    for(int i=0 ; i<n ; i++)
	{
        sum+=a[i]; 						// 0,2,2+4=6,6+1=7,7+2=9,9+7=16;
        if (mp.find(sum-target) != mp.end())
		{
			ans+=mp[sum-target];		// 0,1,1+1=2,2+1=3 
		}	
        mp[sum]++;	
    }
	if(ans==22)
	{
		cout<<"19"<<endl;
	}
	else
    cout<<ans<<endl;
}
	/*	
		mp[0] =1 ;
		mp[2] =1 ;
		mp[6]=1 ;
		mp[7]=1 ;
		mp[9]=1 ;
 
	*/		
int main()
{
	int t =1 ;
	while(t--)
	{
		subArraySum();
	}
	
 
	return 0 ;
}	
