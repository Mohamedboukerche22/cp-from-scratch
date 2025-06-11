#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    double a,b,c;
	    cin >>a>>b>>c;
	    double h = c/(a*b);
	    if(100 * h  > 50 )
	    {
	        printf("YES\n");
	        
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
