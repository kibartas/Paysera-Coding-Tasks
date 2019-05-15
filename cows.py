#!/bin/python3

def countCows(n):
	oneYearCount = 1
	twoYearCount = 0
	threeYearCount = 0
	adultCount = 0
	for i in range(1, n+1):
		temp = oneYearCount
		adultCount += threeYearCount
		oneYearCount = adultCount
		threeYearCount = twoYearCount
		twoYearCount = temp
		#print(i)
		#print(oneYearCount + twoYearCount + threeYearCount + adultCount)
		#print()
	return oneYearCount + twoYearCount + threeYearCount + adultCount
	
for i in range(0, 11):
	print('countCows(' + str(i) + ') is ' + str(countCows(i)))
