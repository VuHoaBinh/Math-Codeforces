/*Once Bob needed to find the second order statistics of a sequence of integer numbers. 
Lets choose each number from the sequence exactly once and sort them. 
The value on the second position is the second order statistics of the given sequence. 
In other words it is the smallest element strictly greater than the minimum. 
Help Bob solve this problem.

Input
The first input line contains integer n (1 = n = 100) — amount of numbers in the sequence. 
The second line contains n space-separated integer numbers — elements of the sequence. 
These numbers don't exceed 100 in absolute value.

Output
If the given sequence has the second order statistics, 
output this order statistics, otherwise output NO.


Example:
input: 
4
1 2 2 -4
output: 1

input: 
5
1 2 3 1 1
output: 2

*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MAX 100
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[MAX];
	for( int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int flag = 0, gt;
	int min = a[0];
	for (int i=1;i<n;i++){
		if(a[i]>min){
			gt = a[i];
			flag = 1;
			break;
		}
	}
	if( flag ==0){
		cout <<"NO" << endl;
	}else
		cout << gt << endl;
}

















