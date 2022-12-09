/*Given three distinct integers a, b, and c, find the medium number between all of them.

The medium number is the number that is neither the minimum nor the maximum of the given three numbers.

For example, the median of 5,2,6 is 5, since the minimum is 2 and the maximum is 6.

Input
The first line contains a single integer t (1≤t≤6840) — the number of test cases.

The description of each test case consists of three distinct integers a, b, c (1≤a,b,c≤20).

Output
For each test case, output a single integer — the medium number of the three numbers.

Example
input
9
5 2 6
14 3 4
20 2 1
1 2 3
11 19 12
10 8 20
6 20 3
4 1 3
19 8 4
output: 
5
4
2
2
12
10
6
3
8
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for( int i = 0;i<n;i++){
		float aver =0;
		for( int j = 0;j<3;j++){
			cin >> a[j];
			aver += 1.0*a[j];
		}
		float min = 1e9,index =0;
		for( int j = 0;j<3;j++){
			if(abs(1.0*a[j]-(aver/3))<min){
				min = abs(1.0*a[j]-(aver/3));
				index =j;
			}
		}
		for( int j = 0;j<3;j++){
			if(j==index){
				cout << a[j] << endl;
			}	
		}
	}
 }