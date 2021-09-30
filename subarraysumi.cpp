#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, target, j = 0, k = 0, c = 0, s = 0;
  cin >> n >> target;
  vector<int> a(n);
  for (int i = 0; i < n; i++) 
  cin >> a[i];
  while (j < n)
   {
    if (s < target)
	 {
      if (k >= n) 
	  break;
      s += a[k];
	  k++ ;
    }
    else if (s > target)
	 s -= a[j++];
    else 
	{
      s -= a[j++];
      s += a[k++];
    }
    if (s == target) 
	c++;
  }
  cout << c << endl;
		
  return 0 ;
}
