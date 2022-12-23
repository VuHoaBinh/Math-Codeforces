/*Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. 
Bob observed that one number usually differs from the others in evenness.
 Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. 
The second line contains n space-separated natural numbers, not exceeding 100. 
It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.


Example
input
5
2 4 7 8 10
output: 
3

input
4
1 2 1 1
output: 
2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int>v(n);
	for(int i =0;i<v.size();i++){
		cin >> v[i];
	}
	map<int,int>a;
	map<int,int>b;
	for(int i =0;i<v.size();i++){
		if(v[i]%2==0){
			a[i+1]=v[i];
		}else{
			b[i+1] = v[i];
		}
	}
	if(a.size()==1){
		auto it = a.begin();
		cout << it->first;
	}else{
		auto it = b.begin();
		cout << it->first;
	}
}

