#include<bits/stdc++.h>
using namespace std ;
 
bool comp(pair<int,int>x , pair<int,int> y)
{
	return x.second<y.second ;
}
void solve()
{
	int n;
	cin>>n ;
	vector<pair<int,int>> v;
	for(int i=0 ; i<n; i++)
	{
		int a, b ;
		cin>>a>> b;
		v.push_back(make_pair(a,b)) ;
	}
	int count=1 ;
	sort(v.begin(), v.end() , comp) ;
	int z=0 ;
	for(int i=1 ; i<n ; i++)
	{	
		if(v[z].second <= v[i].first  )
		{
			count++ ;
			z= i;
		}
 
	}
 
 
	cout<<count<<endl;
}
 
int main()
{	
	int t;
	t=1;
	while(t--)
	{
		solve() ;
	}
	
 
	return 0 ;
}
