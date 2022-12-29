'''AquaMoon has a string a consisting of only 0 and 1. She wants to add + and − between all pairs of consecutive positions 
to make the absolute value of the resulting expression as small as possible. Can you help her?

Input
The first line contains a single integer t (1≤t≤2000)  – the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer n (2≤n≤100) — the length of a.

The second line of each test case contains a string a of length n, consisting of only 0 and 1.

Output
For each test case, output a string of length n−1 consisting of − and + on a separate line. 
If there is more than one assignment of signs that produces the smallest possible absolute value, any of them is accepted.

Example
Input: 
3
2
11
5
01101
5
10001
Output: 
-
+-++
+++-


'''

t = int(input())
while t:
	n=int(input())
	c = input()
	stack = []
	count = 0
	for i in range(n):
		if i == 0:
			if c[0] == '1':
				stack.append(c[0])
		else:
			if c[i] == '1':
				if stack:
					stack.pop()
					print("-",end = "")
				else:
					stack.append(c[i])
					print("+",end = "")
			else:
				print("+",end = "")
	t-=1
	print("\n")

