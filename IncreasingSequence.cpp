/*A sequence a0, a1, ..., at - 1 is called increasing if ai - 1 < ai for each i: 0 < i < t.

You are given a sequence b0, b1, ..., bn - 1 and a positive integer d. 
In each move you may choose one element of the given sequence and add d to it. 
What is the least number of moves required to make the given sequence increasing?

Input
The first line of the input contains two integer numbers n and d (2 = n = 2000, 1 = d = 106). 
The second line contains space separated sequence b0, b1, ..., bn - 1 (1 = bi = 106).

Output
Output the minimal number of moves needed to make the sequence increasing.


Example:
input: 
4 2
1 3 3 2
output: 3

*NOTE: In each move you may choose one element of the given sequence and add d to it. 
 
*/

#include<bits/stdc++.h>
#include<stdio.h>
#define MAX 2000
using namespace std;

int main(){
	int a[MAX];
	int n,d;
	cin >> n >> d;
	for( int i=0;i<n;i++){
		cin >> a[i];
	}
	long long ans = 0;
	for(int i=1;i<n;i++){
		if(a[i]<=a[i-1]){
			int flag =(a[i-1]-a[i]+d)/d;
			a[i]+=flag*d;
			ans+=flag;				
		}	
	}
	cout << ans;
}

















