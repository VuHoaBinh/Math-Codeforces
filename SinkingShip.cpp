/*The ship crashed into a reef and is sinking. Now the entire crew must be evacuated. 
All n crew members have already lined up in a row (for convenience let's label them all from left to right with positive integers from 1 to n) 
and await further instructions. However, one should evacuate the crew properly, in a strict order. Specifically:

The first crew members to leave the ship are rats. Then women and children (both groups have the same priority) leave the ship.
 After that all men are evacuated from the ship. The captain leaves the sinking ship last.

If we cannot determine exactly who should leave the ship first for any two members of the crew by the rules from the previous paragraph, 
then the one who stands to the left in the line leaves the ship first (or in other words, the one whose number in the line is less).

For each crew member we know his status as a crew member, and also his name. All crew members have different names.
 Determine the order in which to evacuate the crew.

Input
The first line contains an integer n, which is the number of people in the crew (1 ≤ n ≤ 100). Then follow n lines.
 The i-th of those lines contains two words — the name of the crew member who is i-th in line, and his status on the ship. 
 The words are separated by exactly one space. There are no other spaces in the line. 
 The names consist of Latin letters, the first letter is uppercase, the rest are lowercase. 
 The length of any name is from 1 to 10 characters. The status can have the following values: rat for a rat, woman for a woman, 
 child for a child, man for a man, captain for the captain. The crew contains exactly one captain.

Output
Print n lines. The i-th of them should contain the name of the crew member who must be the i-th one to leave the ship.
  
Example
Input: 
6
Jack captain
Alice woman
Charlie man
Teddy rat
Bob child
Julia woman

Output: 
Teddy
Alice
Bob
Julia
Charlie
Jack

*/
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
	int n; cin >> n;
	int a[200];
	char string[200][20];
	char k[20];
	for( int i=0; i<n; i++ ){
		scanf("%s %s",&string[i],&k);
		if(strcmp(k,"rat") == 0){
			a[i] =0;
		}else if(strcmp(k,"woman") == 0 || strcmp(k,"child") == 0){
			a[i] = 1;
		}else if(strcmp(k,"captain")==0){
			a[i]=3;
		}else{
			a[i]=2;
		}
	}	
	for(int i=0; i<=3;i++){
		for(int j=0;j<n;j++ ){
			if(a[j]==i){
				cout << string[j] << endl;
			}
		}
	}
}