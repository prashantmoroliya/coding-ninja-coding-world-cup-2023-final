Problem Statement
-

Batsmen has an array 'A' of length 'N' representing runs he can get. He has 'K' balls to play.
<br>
On each ball, he can choose either the leftmost or the rightmost element of the array, remove it and add it to 'score'.<br>

After each ball, the remaining runs in the array are multiplied by 2.
<br>Your task is to determine the maximum possible value of 'score' he can get in 'K' balls. Considering the value can be large return modulo 1e9 + 7.<br>

Example:
```
'N' = 2
'K' = 1
'A' = [5, 10]
Since 'K'=1, we can only play 1 ball.
The maximum value of the 'score' is only possible if we remove the rightmost element in this case.
Therefore we return 10 as maximum possible value of 'score'.
```

Detailed explanation<br>
-
**Input Format** <br>
The first line contains an integer 'T', which denotes the number of test cases to be run. Then the test cases follow.

The first line of each test case contains two space-separated integers, 'N' and 'K', denoting the number of elements in the array and the number of steps needed to be performed, respectively.

The second line of each test case will contain the ‘N’ spaced integers denoting the array ‘A’ values.

**Output Format:** <br>
For each test case, return the maximum value of the 'score' possible modulo 1e9 + 7.

The output for each test case should be on a new line.

**Note:** <br>
You don’t need to print anything. It has already been taken care of. Just implement the given function.

```
Sample Input 1:

2
4 2
1 2 3 4
4 1
1 1 1 1

Sample Output 1:

10
1

Explanation Of Sample Input 1:

For test case 1:
Since 'K' = 2 we are allowed to play 2 balls. 
On the first ball, we start by removing the rightmost element. This adds 4 to the 'score', and the updated array becomes [2, 4, 6].
Then on the second ball, we remove element 6 from the array and add it to 'score'. Now, the 'score' reaches its final value of 10.
There is no other way such that 'score' exceeds 10.
Therefore, we return 10 as the maximum possible value of 'score'.

For test case 2:
Since, 'K' = 1, so we can only play 1 ball.
Either we remove an element from the left or right end and add it to the 'score', the value of 'score' will be 1,
Therefore, we return 1 as the maximum possible value of 'score'.

Sample Input 2:

2
1 1
6
5 3
9 1 5 4 1

Sample Output 2:

6
45

```
Constraints:
-
```
1 <= T <= 10
2 <= N <= 10^3
1 <= K <= min(40, N)
1 <= A[i] <= 10^4 for all 'i'.

The sum of 'N' over all test cases doesn't exceed 10^3.

Time Limit: 1 sec
```
