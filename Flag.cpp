/*According to a new ISO standard, a flag of every country should have a chequered field n × m, 
each square should be of one of 10 colours, and the flag should be «striped»: 
each horizontal row of the flag should contain squares of the same colour, 
and the colours of adjacent horizontal rows should be different. 
Berland's government asked you to find out whether their flag meets the new ISO standard.

Input
The first line of the input contains numbers n and m (1 = n, m = 100), 
n — the amount of rows, m — the amount of columns on the flag of Berland. 
Then there follows the description of the flag: each of the following n lines contain m characters. 
Each character is a digit between 0 and 9, and stands for the colour of the corresponding square.

Output
Output YES, if the flag meets the new ISO standard, and NO otherwise.

Example:
input: 
3 3
000
111
222
output: YES

input: 
3 3
000
000
111
output: NO

input: 
3 3
000
111
002
output: NO

*/

#include<bits/stdc++.h>
#include<stdio.h>
#define max 100
using namespace std;

int main(){
	int a[max][max];
	int n,m;
	cin >> n >> m;
	int flag = 1;
	for( int i=0;i<n;i++){
		scanf("%d", &a[i]);
		for(int j=0;j<m;j++){
			if(j && a[i][j]!= a[i][j-1]){
				flag = 0;
			}
			if(i && a[i][j]==a[i-1][j]){
				flag = 0;
			}
		}
	}
	printf("%s", flag?"YES" : "NO");
}

















