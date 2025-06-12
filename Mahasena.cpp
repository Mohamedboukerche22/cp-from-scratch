#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >>T;
    int even=0;
    int odd=0;
    while(T--)
    {
        int n;
        cin >>n;
        if(n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
     if(!(even > odd))cout<< "NOT READY";
     else cout<<"READY FOR BATTLE";
}
