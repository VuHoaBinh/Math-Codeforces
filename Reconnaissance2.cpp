/*n soldiers stand in a circle. For each soldier his height ai is known. 
A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. |ai - aj| is minimal. 
So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

Input
The first line contains integer n (2 = n = 100) — amount of soldiers. 
Then follow the heights of the soldiers in their order in the circle — n space-separated integers a1, a2, ..., an (1 = ai = 1000). 
The soldier heights are given in clockwise or counterclockwise direction.

Output
Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. 
If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.

Example:
input: 
5
10 12 13 15 10
output: 5 1

input: 
4
10 20 30 40
output: 1 2

*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main(){
	int n;
	cin >>n;
	int a[100];
	int min = 1e9;
	int index;
	for( int i=1;i<n;i++){
		cin >> a[i];
	}
	for (int i=1;i<n;i++){
		if(abs(a[i]-a[i+1])<min){
			min= abs(a[i]-a[i+1]);
			index = i;
		}
	}
	if(abs(a[n]-a[1])<min){
		cout << n << " " << "1" <<endl;
	}else
		cout << index <<" " << index+1 <<endl;
}

















