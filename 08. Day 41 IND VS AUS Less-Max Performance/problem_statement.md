Problem Statement
-
In the thrilling India vs. Australia Cricket World Cup final match, Ninja closely observes the team's performance over the 'N' overs. He maintains a record array 'A' of each over's performance.

For each over, he's determined to discover the highest team performance lower than their current performance that occurred between the present over and the last time they achieved the same performance score.

If there is no previous occurrence of the same performance score, he considers it as occurring from the very first over.

The task is to assist Ninja in creating an array of length 'N' representing each over. Each index should contain the highest performance score lower than the current over's score that occurred between that over and the last occurrence of the same score. If no such score exists, it's indicated as '-1' for that index. Return the calculated array.

Example:
```
'N' = 3
'A' = [2, 1, 2]

Here, for the '0th' index, no such element is present between index '0' and '0'.
For the '1st' index, no such element is present between index '0' and '1'. 
And for the '2nd' index, the maximum element between the '0th' and '2nd' index which is less than '2' is '1'.
Hence, the answer for this case is '[-1, -1, 1]'.
```
Detailed explanation<br>
-
**Input Format** <br>
The first line contains an integer 'T', which denotes the number of test cases to be run. Then, the test cases follow.

The first line of each test case contains a single integer 'N', denoting the length of the array 'A'.

The second line of each test case contains 'N' space-separated integers, denoting the elements of the array 'A'.

**Output Format:** <br>
For each test case, return an array of length 'N' in which the ith index contains the maximum element less than 'A[i]' that occurs between 'A[i]' and the previous index at which 'A[i]' occurs.

**Note:** <br>
You don’t need to print anything. It has already been taken care of. Just implement the given function. 

Constraints:
-
```
1 <= T <= 10
1 <= N <= 10^5
1 <= A[i] <= N

The sum of 'N' overall test cases doesn't exceed 10^5.

Time Limit: 1 sec

```

```
Sample Input 1:

2
2
1 2
3
4 6 7

Sample Output 1:

-1 1
-1 4 6

Explanation Of Sample Input 1:

For test case 1:
Here, for the '0th' index, no such element is present between index '0' and '0'. 
And for the '1st' index, the maximum element between index '0' and '1' which is less than '2' is '1'. 
Hence, the answer for this case is [-1, 1].


For test case 2:
Here, for the '0th' index, no such element is present between index '0' and '0'. 
For the '1st' index, the maximum element between index '0' and '1' which is less than '6' is '4'. 
And for the '2nd' index, the maximum element between the '0-th' and the '2nd' index which is less than '7' is '6'.
Hence, the answer for this case is [-1, 4, 6].

Sample Input 2:

2
6
3 2 1 2 4 3
4
3 4 1 2

Sample Output 2:

-1 -1 -1 1 3 2
-1 3 -1 1
```

