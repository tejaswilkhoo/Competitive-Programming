#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int question;
	cin>>question;

	int n;
	cin>>n;
	
	int dmoj[n];
	int peg[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>dmoj[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cin>>peg[i];
	}

	sort(dmoj, dmoj+n);
	sort(peg, peg+n);
	
	int finalVal = 0;
	if(question == 1)
	{
		for(int i=0; i<n; i++)
		{
			finalVal+=max(dmoj[i],peg[i]);
		}
		
		cout<<finalVal;
	}
	
	else
	{
		for(int i=0; i<n; i++)
		{
			finalVal+=max(dmoj[n-i-1],peg[i]);
		}
		
		cout<<finalVal;
	}
}
