/*A boy Bob likes to draw. Not long ago he bought a rectangular graph (checked) 
sheet with n rows and m columns. Bob shaded some of the squares on the sheet. 
Having seen his masterpiece, he decided to share it with his elder brother, who lives in Flatland.
 Now Bob has to send his picture by post, but because of the world economic crisis and high oil prices,
  he wants to send his creation, but to spend as little money as possible. 
  For each sent square of paper (no matter whether it is shaded or not) Bob has to pay 3.14 burles. 
  Please, help Bob cut out of his masterpiece a rectangle of the minimum cost, that will contain all the shaded squares. 
  The rectangle's sides should be parallel to the sheet's sides.

Input
The first line of the input data contains numbers n and m (1 = n, m = 50),
 n — amount of lines, and m — amount of columns on Bob's sheet. The following n lines contain m characters each. 
 Character «.» stands for a non-shaded square on the sheet, and «*» — for a shaded square. 
 It is guaranteed that Bob has shaded at least one square.

Output
Output the required rectangle of the minimum cost. Study the output data in the sample tests to understand the output format better.

Example:
input: 
6 7
.......
..***..
..*....
..***..
..*....
..***..
output: 
***
*..
***
*..
***

input: 
3 3
***
*.*
***
output: 
***
*.*
***


*/

#include<bits/stdc++.h>
#include<stdio.h>
#define MAX 100
using namespace std;


int main(){
	string a[MAX];
	int n,m;
	cin >> n >> m;
	int min_x = 1e9,min_y=1e9;
	int max_x=0, max_y=0;
	for( int i=0;i<n;i++){
		cin >> a[i];
		for( int j=0;j<m;j++){
			if(a[i][j] == '*'){
				min_x= min(min_x,i);
				min_y = min(min_y,j);
				max_x = max(max_x,i);
				max_y = max(max_y,j);
			}
		}
	}
	for( int i= min_x;i<=max_x;i++ ){
		for( int j=min_y;j<=max_y;j++){
			cout <<a[i][j];
		}
		cout << endl;
	}
}

















