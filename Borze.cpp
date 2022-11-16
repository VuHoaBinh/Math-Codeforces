/*Ternary numeric notation is quite popular in Berland. 
To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». 
You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. 
The length of the string is between 1 and 200 characters. 
It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

Example:
input: .-.--
output: 012

input: --.
output: 20

input: -..-.--
output: 1012

*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main(){
	string Borze_code, trans;
	cin >> Borze_code;
	
	for (int i=0;i<Borze_code.size();i++){
		if(Borze_code[i] == '.'){
			trans+= '0';
		}else if(Borze_code[i] == '-'){
			if(Borze_code[i+1] == '.'){
				trans+= '1';
			}else{
				if(Borze_code[i+1] == '-'){
				trans+= '2';
				}
			}
			i++;	
		}
	}
	cout << trans;
}
//=> O(n) = n
//=> speed = 30 ms
