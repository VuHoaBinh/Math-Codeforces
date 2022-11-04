/*Little Vasya has received a young builder’s kit. The kit consists of several wooden bars,
 the lengths of all of them are known. The bars can be put one on the top of the other if their lengths are the same.

Vasya wants to construct the minimal number of towers from the bars.
 Help Vasya to use the bars in the best way possible.

Input
The first line contains an integer N (1 = N = 1000) — the number of bars at Vasya’s disposal. 
The second line contains N space-separated integers li — the lengths of the bars. 
All the lengths are natural numbers not exceeding 1000.

Output
In one line output two numbers — the height of the largest tower and their total number. 
Remember that Vasya should use all the bars.


Example:
input: 
3
1 2 3
output: 1 3

input: 
4
6 5 6 7
output: 2 3

*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MAX 1000
using namespace std;

int main(){
	// a1 : constain number from keybroad
	// a2 : constain the number of occurrences from a1 
	int a1[MAX], a2[MAX];
	int n;
	cin >> n;
	memset(a2,0,sizeof(a2)); // 0
	for( int i=0;i<n;i++){
		cin >> a1[i];
		a2[a1[i]]++;
	}
	int max = 0,count =0;
	for( int i=0;i<MAX;i++){
		if(a2[i]!=0){
			count++;
			if(a2[i]>max){
				max = a2[i];
			}
		}
	}
	cout << max <<" " << count << endl;
 }

















