/*One day Vasya came across three Berland coins. They didn't have any numbers that's why Vasya didn't understand how their denominations differ. He supposed that if one coin is heavier than the other one, then it should be worth more. Vasya weighed all the three pairs of coins on pan balance scales and told you the results. Find out how the deminations of the coins differ or if Vasya has a mistake in the weighting results. No two coins are equal.

Input
The input data contains the results of all the weighting, one result on each line. It is guaranteed that every coin pair was weighted exactly once. Vasya labelled the coins with letters «A», «B» and «C». Each result is a line that appears as (letter)(> or < sign)(letter). For example, if coin "A" proved lighter than coin "B", the result of the weighting is A<B.

Output
It the results are contradictory, print Impossible. Otherwise, print without spaces the rearrangement of letters «A», «B» and «C» which represent the coins in the increasing order of their weights.

Example
Input: 
A>B
C<B
A>C
Output: CBA

Input: 
A<B
B>C
C>A
Output: ACB

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int num[3];
	memset(num, 0, sizeof(num));
	char string[10];
	for(int i=0;i<3;i++){
		cin >> string;
		if (string[1]=='>' && string[0]=='A'){
			num[0]++;
		}else if (string[1]=='>' && string[0]=='B'){
			num[1]++;
		}else if (string[1]=='>' && string[0]=='C'){
			num[2]++;
		}else if (string[1]=='<' && string[2]=='A'){
			num[0]++;
		}else if (string[1]=='<' && string[2]=='B'){
			num[1]++;
		}else 
			num[2]++;
	}

	int max1,mid1,min1;
	if(num[0]==num[1] || num[1]==num[2] || num[2]==num[0]){
		cout <<"Impossible" << endl;
	}else
	{
		for(int i=0; i<3;i++) {
			if (num[i]== 2){
				max1 =i;
			}
			if (num[i] == 0){
				min1 = i;
			}
			if(num[i]==1){
				mid1 = i;
			}
		}
		printf("%c%c%c",min1 + 'A', mid1 +'A',max1 + 'A');
	}

}