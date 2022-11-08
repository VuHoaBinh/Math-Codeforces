/*t is known that fleas in Berland can jump only vertically and horizontally, 
and the length of the jump is always equal to s centimeters. 
A flea has found herself at the center of some cell of the checked board of the size n × m 
centimeters (each cell is 1 × 1 centimeters). She can jump as she wishes for an arbitrary 
number of times, she can even visit a cell more than once. The only restriction is that 
she cannot jump out of the board.

The flea can count the amount of cells that she can reach from the starting position (x, y). 
Let's denote this amount by dx, y. Your task is to find the number of such starting positions (x, y), 
which have the maximum possible value of dx, y.

Input
The first line contains three integers n, m, s (1 <= n, m, s <= 106) — length of the board, 
width of the board and length of the flea's jump.

Output
Output the only integer — the number of the required starting positions of the flea.


Example:
input: 
2 3 1000000
output: 6

input: 
3 3 2
output: 4

*NOTE: A flea has found herself at the center of some cell of the checked board of the size n × m 
centimeters (each cell is 1 × 1 centimeters).
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;

int main(){
	long long m,n,s;

	cin >> n >> m >> s;
	
	long long a= n%s;
	long long b= m%s;
	long long c= n/s;
	long long d= m/s;
	cout << a << endl;
	if(a==0){
		a=s;
	}else
		c++;
	cout << c<< endl;
	cout << b<< endl;
	if(b==0){
		b=s;
	}else
		d++;
	cout << d<< endl;
	cout << a*b*c*d << endl;
}

















