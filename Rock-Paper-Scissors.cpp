#include<bits/stdc++.h>
using namespace std;

void winner(int x,int a, int b, int c){
	printf((a==x)?"F":(b==x)?"M":"S");
}

int check(string s){
	if(s == "rock"){
		return 1;
	}	
	if(s == "scissors"){
		return 5;
	}	
	if(s == "paper"){
		return 10;
	}
	return 0; 
}

int main(){
	string s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	int a = check(s1);
	int b = check(s2);
	int c = check(s3);
	int sum = a+b+c;
	// rock winner 1 5 5
	if(sum == 11){
		winner(1,a,b,c);
	} 
	// scissors winner 5 10 10
	else if(sum == 25){
		winner(5,a,b,c);
	}
	//paper winner 10 1 1 
	else if(sum == 12){
		winner(10,a,b,c);
	}else	
		cout << "? " << endl;

	return 0;
}