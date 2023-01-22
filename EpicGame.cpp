/*Simon and Antisimon play a game. Initially each player receives one fixed positive integer that doesn't change throughout the game.
 Simon receives number a and Antisimon receives number b. They also have a heap of n stones.
  The players take turns to make a move and Simon starts. During a move a player should take from 
  the heap the number of stones equal to the greatest common divisor of the fixed number he has received 
  and the number of stones left in the heap. A player loses when he cannot take the required number of stones 
  (i. e. the heap has strictly less stones left than one needs to take).

Your task is to determine by the given a, b and n who wins the game.

Input
The only string contains space-separated integers a, b and n (1 ≤ a, b, n ≤ 100) — the fixed numbers
 Simon and Antisimon have received correspondingly and the initial number of stones in the pile.

Output
If Simon wins, print "0" (without the quotes), otherwise print "1" (without the quotes).


Example
Input: 
3 5 9
Output: 
0

Input: 
1 1 100
Output: 
1


*/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int check(int value, int n){
    while(1){
        if (value<n){
            swap(value,n);
        }
        if(value%n==0){
            return n;
        }
        value%=n;
    }
}

int main(){
    int simon, antisimon, n;
    cin >> simon >> antisimon >> n;
    while(1){
        n-=check(simon,n);
        if(n==0){
            cout <<"0" << endl;break;
        }
        n-=check(antisimon,n);
        if(n==0){
            cout << "1" << endl;break;
        }
    }
}