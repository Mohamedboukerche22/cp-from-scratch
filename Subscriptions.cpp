#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    int a,b;
	    cin >>a>>b;
	    int cs =0;
	    if(a%6==0)
	    {
	       cs = a/6;
	    }
	    else
	    {
	        cs = (a/6) + 1;
	    }
	    
	    cout<<cs*b<<"\n";
	}

}
