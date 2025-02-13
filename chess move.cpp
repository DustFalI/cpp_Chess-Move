#include <bits/stdc++.h>
using namespace std;
int n;
char arr[220];
string s[6] = {"oooo****--","ooo--***o*","ooo*o**--*","o--*o**oo*","o*o*o*--o*","--o*o*o*o*"};
void shuchu(int s)
{
	for(int i=s;i<2*n+2;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	return;
}
void f(int n)
{
	if(n == 4)
	{
		for(int i=0;i<6;i++)
		{
			cout<<s[i];
			shuchu(10);
		}
		return;
	}
	shuchu(0);
	arr[2*n] = arr[n-1];
	arr[2*n+1] = arr[n];
	arr[n-1] = '-';
	arr[n] = '-';
	shuchu(0);
	arr[n-1] = arr[2*(n-1)];
	arr[n] = arr[2*n-1];
	arr[2*(n-1)] = '-';
	arr[2*n-1] = '-';
	f(n-1);
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		arr[i] = 'o';
		arr[i+n] = '*';
	}
	arr[2*n + 1] = arr[2*n] = '-';
	f(n);
	return 0;
}
