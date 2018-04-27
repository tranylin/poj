#include <iostream>
#include <algorithm>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
using namespace std;
typedef long long ll;

 ll exgcd(ll a,ll b,ll &x,ll &y)
 {
 	if(b==0)
 	{
 		x=1;
 		y=0;
 		return a;
	 }
	 ll g=exgcd(b,a%b,x,y);
	 ll t;
	 t=x;
	 x=y;
	 y=t-(a/b)*y;
	 return g;
 }


 int exgcd(int a,int b,int &x,int &y)
 {
 	
 }
 int main()
 {
 	ios_base::sync_with_stdio(0);
 	cin.tie(0);
 	ll X,Y,M,N,L;
 	cin>>X>>Y>>M>>N>>L;
 	ll a=M-N;
 	ll b=L;
 	ll x;
 	ll y;
 	ll c=Y-X£» 
 
    ll tmp= exgcd(a,b,x,y);
    if(c%tmp!=0)
    {
    	cout<<"Impossible"<<endl;
	}
	else
	{
		cout<<((x*c/tmp)%L+L)%L<<endl;
	}
	return 0;
}

 
 
