/*One beautiful July morning a terrible thing happened in Mainframe: a mean virus Megabyte somehow got access to 
the memory of his not less mean sister Hexadecimal. He loaded there a huge amount of n different natural numbers from 1 to n 
to obtain total control over her energy.

But his plan failed. The reason for this was very simple: Hexadecimal didn't perceive any information, 
apart from numbers written in binary format. This means that if a number in a decimal representation contained characters apart from 0 and 1,
 it was not stored in the memory. Now Megabyte wants to know, how many numbers were loaded successfully.

Input
Input data contains the only number n (1 ≤ n ≤ 109).

Output
Output the only number — answer to the problem.

  
Example
Input: 
10
Output: 2

*/
#include<bits/stdc++.h>
using namespace std;

int dem;
int number_hexadecimal;

int count_number(int value,int number_hexadecimal,int dem){
	if(value>number_hexadecimal){
		return dem;	
	} 
	dem++;
	count_number(value*10,dem);
	count_number(value*10+1,dem);
}

int main(){
	cin >> number_hexadecimal;
	count_number(1);
	cout << dem << endl;
}