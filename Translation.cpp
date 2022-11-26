/*
The translation from the Berland language into the Birland language is not an easy task. 
Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: 
it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. 
However, it's easy to make a mistake during the �translation�. Vasya translated word s from Berlandish into Birlandish as t. 
Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. 
The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Example:

input:
code
edoc
output: YES

input:
abb
aba
output:NO
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int len = s1.size();
	int j=0;
	for( int i=0;i<len;i++){
		if(s1[i]==s2[len-i-1]){
			j+=1;	
		}
	}
	printf("%s", (j==len)?"YES":"NO");
	return 0;
}

//=> speed = 30ms
// O(n) = n











