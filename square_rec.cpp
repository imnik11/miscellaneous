#include<bits/stdc++.h>
using namespace std;
#define ll long long unsigned int
    int square(int n)
{
if ( n==0 )
    return 0;
n = square(n-1) + n + n - 1;
return n;
}
ll sqrll(ll n) {
	if(n==0)
		return 0;
	else
		return (sqrll(n-1)+2*n-1);
}

int main(void){
    //code here
    int n=25;
    ll m=24;
    printf("%d",square(n));
    printf("%lld",sqrll());
    return 0;
}
