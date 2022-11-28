/*A triangular number is the number of dots in an equilateral triangle uniformly filled with dots. 
For example, three dots can be arranged in a triangle; thus three is a triangular number. 
The n-th triangular number is the number of dots in a triangle with n dots on a side.
You can learn more about these numbers from Wikipedia (http://en.wikipedia.org/wiki/Triangular_number).

Your task is to find out if a given integer is a triangular number.

Input
The first line contains the single number n (1 = n = 500) — the given integer.

Output
If the given integer is a triangular number output YES, otherwise output NO.

Example
Input: 1
output: YES

input: 2
output: NO
*/


#include<bits/stdc++.h>
using namespace std;

int check( int n){
	if(n<0){
		return -1;
	}
	int sum=0;
	for(int i=1;sum<=n;i++){
		sum+=i;
		if(sum==n){
			return 1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	int res = check(n);
	printf("%s", (res==1)?"YES":"NO"); 
}

//=> speed = 30ms
//=> O(n) = n
