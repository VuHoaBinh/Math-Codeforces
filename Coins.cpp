/*In Berland a money reform is being prepared. New coins are being introduced. 
After long economic calculations was decided that the most expensive coin should possess the denomination of exactly n Berland dollars.
 Also the following restriction has been introduced for comfort: 
 the denomination of each coin should be divisible by the denomination of any cheaper coin.
  It is known that among all the possible variants the variant with the largest number of new coins will be chosen. 
  Find this variant. Print in the order of decreasing of the coins' denominations.

Input
The first and only line contains an integer n (1 ≤ n ≤ 106) which represents the denomination of the most expensive coin.

Output
Print the denominations of all the coins in the order of decreasing. 
The number of coins must be the largest possible (with the given denomination n of the most expensive coin).
 Also, the denomination of every coin must be divisible by the denomination of any cheaper coin. 
 Naturally, the denominations of all the coins should be different. If there are several solutins to that problem, print any of them.


Example
input
10
output: 
10 5 1

input
4
output: 
4 2 1

input:
3
output:
3 1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v;
	v.push_back(n);
	for( int i=2;n>1;i++){
		while(n%i==0){
			n/=i;
			v.push_back(n);
		}
	}
	for(auto i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
}



