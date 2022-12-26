/*A bracket sequence is called regular if it is possible to obtain correct arithmetic expression by inserting characters «+» and «1» 
into this sequence. For example, sequences «(())()», «()» and «(()(()))» are regular, while «)(», «(()» and «(()))(» are not.

One day Johnny got bracket sequence. He decided to remove some of the brackets from it in order to obtain a regular bracket sequence. 
What is the maximum length of a regular bracket sequence which can be obtained?

Input
Input consists of a single line with non-empty string of «(» and «)» characters. Its length does not exceed 106.

Output
Output the maximum possible length of a regular bracket sequence.


Example
Input: 
(()))(
Output: 4

Input: ((()())
Output: 6

*/
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
	const int n= 1e6 +10;
	char s[n],a[n];fflush(stdin);
	gets(s);
	int count =0,flag=0;
	for( int i=0; i<strlen(s); i++ ){
		if(s[i] == '('){
			a[flag++] = '(';
		}else
		{
			if(flag && a[flag-1]=='('){
				flag--;
				count+=2;
			}
		}
	}
	cout << count << endl;
}





