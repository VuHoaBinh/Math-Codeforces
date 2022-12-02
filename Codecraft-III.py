'''
Today Vasya visited a widely known site and learned that the continuation of his favourite game Codecraft II 
will appear after exactly k months. He looked at the calendar and learned that at the moment is the month number s. 
Vasya immediately got interested in what month Codecraft III will appear. Help him understand that.

All the twelve months in Vasya's calendar are named using their usual English names: 
January, February, March, April, May, June, July, August, September, October, November, December.

Input
The first input line contains the name of the current month. It is guaranteed that it is a proper English name of one of twelve months. 
The first letter is uppercase, the rest are lowercase. The second line contains integer k (0≤k≤100) 
— the number of months left till the appearance of Codecraft III.

Output
Print starting from an uppercase letter the name of the month in which the continuation of Codeforces II will appear. 
The printed name must be contained in the list January, February, March, April, May, June, July, August, September, October, November, December.

Example
Input:
November
3

Output:
February

'''
a = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
user = input()
value = int(input())

for i in range(len(a)):
    if user == a[i]:
        index = i+value
        while index >= len(a):
            index = index - len(a)
        print(a[index])
