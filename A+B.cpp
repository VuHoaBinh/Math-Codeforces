/*You are given an expression of the form a+b, where a and b are integers from 0 to 9. You have to evaluate it and print the result.

Input
The first line contains one integer t (1≤t≤100) — the number of test cases.

Each test case consists of one line containing an expression of the form a+b (0≤a,b≤9, both a and b are integers). 
The integers are not separated from the + sign.

Output
For each test case, print one integer — the result of the expression.

Example
Input: 
4
4+2
0+0
3+7
8+9
Output: 
6
0
10
17



*/
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string form_integer;
        cin >> form_integer;
        int number1 = stoi(form_integer);
        for(int j =0;j<form_integer.size();j++){
            if(form_integer[j] == '+'){
                form_integer[j] = '0';
            }
        }
        int number2 = stoi(form_integer)%10;
        cout << number1+number2 << endl;
    }
}