'''
You are given an equation:

Ax^2+Bx+C=0.
Your task is to find the number of distinct roots of the equation and print all of them in ascending order.

Input
The first line contains three integer numbers A,B and C (-10^5≤A,B,C≤10^5). Any coefficient may be equal to 0.

Output
In case of infinite root count print the only integer -1. In case of no roots print the only integer 0. 
In other cases print the number of root on the first line and the roots on the following lines in the ascending order. 
Print roots with at least 5 digits after the decimal point.


Example
input:1 -5 6
output:
2
2.0000000000
3.0000000000
'''
import math
 
def giaiPTBac2(a, b, c):
    flag = 0
    if a == 0:
        if b == 0:
            if c == 0:
                print("-1") 
            else: 
                print("0") 
        else: # b!=0
            if c == 0:
                flag+=1
                print(flag)
                print("0")
            else:
                flag+=1
                print(flag)
                print(-c/b)
    else: # a!=0
        delta = b * b - 4 * a * c;
        if (delta > 0):
            flag+=1
            x1 = (float)((-b + math.sqrt(delta)) / (2 * a))
            flag+=1
            x2 = (float)((-b - math.sqrt(delta)) / (2 * a))
            if x1>x2:
                print(flag)
                print(x2)
                print(x1)
            else:
                print(flag)
                print(x1)
                print(x2)
        elif (delta == 0):
            flag+=1
            x1 = (-b / (2 * a));
            print(flag)
            print(x1)
        else:
            print("0");
 
a,b,c = map(float,input().split());
giaiPTBac2(a, b, c)