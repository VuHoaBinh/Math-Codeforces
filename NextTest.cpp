/*«Polygon» is a system which allows to create programming tasks in a simple and professional way.
 When you add a test to the problem, the corresponding form asks you for the test index. 
 As in most cases it is clear which index the next test will have, the system suggests the default 
 value of the index. It is calculated as the smallest positive integer which is not used as an index 
 for some previously added test.

You are to implement this feature. Create a program which determines the default index of the next test, 
given the indexes of the previously added tests.

Input
The first line contains one integer n (1 = n = 3000) — the amount of previously added tests. 
The second line contains n distinct integers a1, a2, ..., an (1 = ai = 3000) — indexes of these tests.


Example:
input: 
3
1 7 2
output: 3

*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MAX 3001
using namespace std;

int main(){
	map<long long , long long>m;
	int n;
	cin >> n;
	int t;
	for( int i=1;i<=n;i++){
		cin >> t;
		m[t]++; 
	}
	for( int i=1;i<=3001;i++){
		if(m[i]==0){
			cout << i << endl;
			break;
		}
	}
}

















