Problem Statement
-

You have a scorecard 'A' of 'N' cricket matches, initially all marked with a score of '0'. Over time, you adjusted the scores for a series of consecutive matches on this scorecard. Each adjustment allowed you to do the following:

- Select a sequence of consecutive matches such that all the scores in this sequence are the same.

- Increase the score of all matches within this selected sequence by 1, excluding the first and last matches of the sequence.

However, this was done some time ago. You can only recall certain scores on scorecard 'A' after all the adjustments were applied. Any score on scorecard 'A' that you don't remember is denoted by '-1'.

Your task is to determine how many different scorecards are possible. Since this number may be very large, return it modulo 10^9+7.

Example:
```
‘N’ = 4
‘A’ = [-1, -1, -1, 0]

These four scorecards are all the possibilities for the original scorecard 'A': [0, 0, 0, 0], [0, 1, 0, 0], [0, 1, 1, 0], [0, 0, 1, 0].

Therefore, the answer here is 4.
```

Detailed explanation<br>
-
**Input Format** <br>
The first input line contains a single integer 'T', which denotes the number of test cases.
Then 'T' test cases follow. For each test case:

The first line contains two integers, 'N', denoting the length of the scorecard.

The following line contains ‘N’ space-separated integers denoting the scores on scorecard ‘A’.

**Output Format:** <br>
Output the number of possible scorecards as described above, modulo 10^9 + 7.

The output for each test case should be on a new line.

**Note:** <br>
You don’t need to print anything. Just implement the given function.    

Constraints:
-
```
1 <= 'T' <= 10
2 <= 'N’ <= 10^3
-1 <= Ai <= max(0, ceil((N - 2) / 2))
The sum of ‘N’ over all test cases doesn’t exceed 10^4.

Time Limit: 1 sec

```

```
Sample Input 1:

2
9
-1 0 -1 -1 -1 -1 2 1 -1
9
-1 -1 3 -1 -1 3 3 -1 -1

Sample Output 1:

25
0

Explanation of sample input 1:

For test case 1:
Two of the possible scorecards are [0, 0, 0, 0, 0, 1, 2, 1, 0] and [0, 0, 1, 1, 1, 1, 2, 1, 0].
It can be shown that the total number of possible original scorecards is 25.
Hence, the answer is 25.

For test case 2:
It can be shown that it is impossible to have a scorecard such that 'A[2] = 3'.
Hence, the answer is 0.

Sample Input 2:

2
7
0 -1 -1 -1 2 -1 0
9
0 1 -1 -1 4 -1 -1 3 -1

Sample Output 2 :

9
0
```

