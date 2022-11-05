/*According to the regulations of Berland's army, a reconnaissance unit should consist of 
exactly two soldiers. Since these two soldiers shouldn't differ much, their heights can differ 
by at most d centimeters. Captain Bob has n soldiers in his detachment. 
Their heights are a1, a2, ..., an centimeters. Some soldiers are of the same height. 
Bob wants to know, how many ways exist to form a reconnaissance unit of two soldiers from his detachment.

Ways (1, 2) and (2, 1) should be regarded as different.

Input
The first line contains two integers n and d (1 = n = 1000, 1 = d = 109) — amount of soldiers 
in Bob's detachment and the maximum allowed height difference respectively. 
The second line contains n space-separated integers — heights of all the soldiers in Bob's detachment. 
These numbers don't exceed 109.

Output
Output one number — amount of ways to form a reconnaissance unit of two soldiers, 
whose height difference doesn't exceed d.


Example:
input: 
5 10
10 20 50 60 65
output: 6

input: 
5 1
55 30 29 31 55
output: 6

*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MAX 20000
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[MAX];
	int min;
	cin >> min;
	int index =0;
	for( int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int i=1;i<=n;i++){
		for( int j=1;j<=n;j++){
			if(i!=j){
				if(abs(a[i]-a[j])<=min){
					index++;
				}
			}	
		}
	}
	cout << index << endl;
}

















