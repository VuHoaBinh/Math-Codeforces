/*Vasya decided to write an anonymous letter cutting the letters out of a newspaper heading. 
He knows heading s1 and text s2 that he wants to send. Vasya can use every single heading letter no more than once. 
Vasya doesn't have to cut the spaces out of the heading — he just leaves some blank space to mark them. Help him; 
find out if he will manage to compose the needed text.

Input
The first line contains a newspaper heading s1. The second line contains the letter text s2. 
s1 и s2 are non-empty lines consisting of spaces, uppercase and lowercase Latin letters, 
whose lengths do not exceed 200 symbols. The uppercase and lowercase letters should be differentiated. 
Vasya does not cut spaces out of the heading.

Output
If Vasya can write the given anonymous letter, print YES, otherwise print NO

Example
Input:
Instead of dogging Your footsteps it disappears but you dont notice anything
where is your dog
output: NO

Input:
Instead of dogging Your footsteps it disappears but you dont notice anything
Your dog is upstears
output: YES

Input:
Instead of dogging your footsteps it disappears but you dont notice anything
Your dog is upstears
output: NO

Input:
abcdefg hijk
k j i h g f e d c b a
output: YES

*/



#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
	int a[70]; 
	memset(a,0,sizeof(a));
	int t, len1 ,len2;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int flag = 1;
	for( int i=0;i<s1.size();i++){
		t = s1[i]-'A';
		a[t]++;	
	}
	for( int i=0;i<s2.size();i++){
		t=s2[i]- 'A';
		a[t]--;
	}
	for( int i=0;i<70;i++){
		if(a[i]<0){
			flag = 0;
			break;
		}
	}
	printf("%s", (flag)?"YES":"NO");	
}

