#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    double a,b,c;
	    cin >>a>>b>>c;
	    double e = (a+b)/2;
	    if(e>c)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}

}
