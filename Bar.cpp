/*According to Berland laws it is only allowed to sell alcohol to people not younger than 18 years. 
Vasya's job is to monitor the law's enforcement. Tonight he entered a bar and saw n people sitting there. 
For every one of them Vasya happened to determine either the age or the drink the person is having. 
Vasya can check any person, i.e. learn his age and the drink he is having at the same time. 
What minimal number of people should Vasya check additionally to make sure that there are no 
clients under 18 having alcohol drinks?

The list of all alcohol drinks in Berland is: ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE

Input
The first line contains an integer n (1 = n = 100) which is the number of the bar's clients. 
Then follow n lines, each describing one visitor. A line either contains his age (an integer from 0 to 1000) 
or his drink (a string of capital Latin letters from 1 to 100 in length). It is guaranteed that the 
input data does not contain spaces and other unnecessary separators.

Only the drinks from the list given above should be considered alcohol.

Output
Print a single number which is the number of people Vasya should check to guarantee the law enforcement.


Example:
input: 
5
18
VODKA
COKE
19
17

output: 2

*NOTE: people not younger than 18 years.
*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MAX 105
using namespace std;

int main(){
	char list[][105] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	int n;
	cin >> n;
	char a[MAX];
	int num = 0;
	for (int i=0;i<n;i++){
		scanf("%s",&a);
		// check under 18 
		int len = strlen(a);
		if(len == 1 && a[0] -'0'>=0 && a[0]-'0'<=9){
			num++;
			continue;
		}
		if(len == 2 && a[0] -'0'== 1 && (a[1]-'0'>=0 && a[1]-'0'<8)){
			num++;
			continue;
		}
		// check alcohol
		for (int j=0;j<11;j++){
			if(strcmp(a,list[j]) == 0){
				num++;
				break;
			}
		}
	}
	cout << num << endl;
}

















