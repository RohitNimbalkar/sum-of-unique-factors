//============================================================================
// Name        : sum of unique factors.cpp
// Author      : Rohit Nimbalkar
// Version     :
// Copyright   : Your copyright notice
// Description : Sum of unique factors in C++, Ansi-style
//============================================================================
//Example: 6=factors are(1,2,3,6)
// 			=1+2+3+6
//			=12

#include <iostream>
using namespace std;
int square_sum(int n)
{
	int i,d, sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d=n/i;
			sum+=d;
		}
	}
	return(sum);
}
int main() {
	int n;
	cin>> n;
	cout<<square_sum(n)<<endl;
return 0;
}
