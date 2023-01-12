/*The Berland Armed Forces System consists of n ranks that are numbered using natural numbers from 1 to n, 
where 1 is the lowest rank and n is the highest rank.

One needs exactly di years to rise from rank i to rank i + 1. Reaching a certain rank i having not reached all the previous i - 1 ranks 
is impossible.

Vasya has just reached a new rank of a, but he dreams of holding the rank of b. Find for how many more years Vasya should serve 
in the army until he can finally realize his dream.

Input
The first input line contains an integer n (2 ≤ n ≤ 100). The second line contains n - 1 integers di (1 ≤ di ≤ 100). 
The third input line contains two integers a and b (1 ≤ a < b ≤ n). The numbers on the lines are space-separated.

Output
Print the single number which is the number of years that Vasya needs to rise from rank a to rank b.
  
Example
Input: 
3
5 6
1 2
Output: 
5

Input: 
3
5 6
1 3
Output: 
11


*/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
    int NoOfRank; cin >> NoOfRank;
    int v[NoOfRank+1]; 
    memset(v,0,sizeof(v));
    for(int i=2;i<=NoOfRank;i++){
        int day;
        cin >> day;
        v[i] = v[i-1]+day;
    }
    int startRank,endRank;
    cin >> startRank >> endRank;
    // cout << v[startRank] << endl; 
    cout << (v[endRank]-v[startRank]) << endl;
    return 0;
}