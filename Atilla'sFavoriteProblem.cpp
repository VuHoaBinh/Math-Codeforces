/*In order to write a string, Atilla needs to first learn all letters that are contained in the string.

Atilla needs to write a message which can be represented as a string s. 
He asks you what is the minimum alphabet size required so that one can write this message.

The alphabet of size x (1≤x≤26) contains only the first x Latin letters. 
For example an alphabet of size 4 contains only the characters a, b, c and d.

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

The first line of each test case contains a single integer n (1≤n≤100) — the length of the string.

The second line of each test case contains a string s of length n, consisting of lowercase Latin letters.

Output
For each test case, output a single integer — the minimum alphabet size required to so that Atilla can write his message s.

Example
input
5
1
a
4
down
10
codeforces
3
bcf
5
zzzzz
output: 
1
23
19
6
26

*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	int n,k; cin >> n;
	for( int i = 0; i < n; i++){
		int m;cin >> m;
		string s;
		cin >> s;
		k = -1; 
		for( int j = 0; j < m; j++ ){
			k = max(k,(s[j] - 'a' + 1));
		}
		cout << k << endl;
	}
}
