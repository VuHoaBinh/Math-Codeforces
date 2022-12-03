/*Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest 
and picking a bouquet from fallen leaves. Alyona is very choosy — she doesn't take a leaf if it matches 
the color and the species of the tree of one of the leaves she already has. Find out how many leaves Alyona has picked.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of leaves Alyona has found. 
The next n lines contain the leaves' descriptions. Each leaf is characterized by the species of the tree it has fallen 
from and by the color. The species of the trees and colors are given in names, consisting of no more than 10 lowercase Latin letters. 
A name can not be an empty string. The species of a tree and the color are given in each line separated by a space.

Output
Output the single number — the number of Alyona's leaves.

Example
input
5
birch yellow
maple red
birch yellow
maple yellow
maple green
output: 4


input
3
oak yellow
oak yellow
oak yellow
output: 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    int n;
    cin >> n;
    string str;
    getchar();// to full read in str 
    for( int i=0;i<n;i++){
        getline(cin,str);
        m[str]=1;
    }
    int count=0;
    for( auto i: m ){
        count++;
    }
    cout << count << endl;
}