Problem Statement
-
In a cricket league with 'N' teams and 'M' scheduled matches, there is a rival team trying to disrupt the predictions of a seasoned coach. In the coach's system, every team is linked directly or indirectly to every other team, with the sequence of matches from the tournament forming a graph.

The coach utilizes these matches to make predictions. He can use match 'i' in his predictions if and only if there exist any two teams 'A' and 'B' such that there is no sequence of matches linking 'A' and 'B' without including match 'i'.

However, the rival team has the ability to schedule an additional match between any two teams once. Your task is to determine the minimum number of matches that the coach can use in his prediction system after rival team uses their ability exactly once.

Example:
```
'N' = 3
'M' = 2
'Matches' = '[ [1, 2], [2, 3] ]'

Before scheduling an additional match:

   For match [1,2], there's no alternate route between 1 and 2 that doesn't contain this match, so this match can be used.
   Similarly, for match [2,3], as there is no alternate route between 2 and 3 that doesn't contain this match, so this match can be used.
   Thus, there are two matches which the coach can use.

After scheduling an additional match:

   If the rival team schedules a match between team '1' and '3', it creates alternate paths. For instance, the match between '1' and '2' is no longer the sole connection, as an indirect sequence (1 → 3 → 2) is now possible, that does not contain match [1,2]. This applies to other matches as well.
   Consequently, the coach cannot use any match reliably. Hence, the minimum number of matches used in prediction is 0.
```

Detailed explanation<br>
-
**Input Format** <br>
The first line contains an integer 'T', denoting the number of test cases.
Each test case begins with two integers, 'N' (number of teams) and 'M' (number of scheduled matches).

The next 'M' lines each contain two integers 'U' and 'V', indicating a match scheduled between teams 'U' and 'V'.

**Output Format:** <br>
For each test case, return the minimum number of matches that can be used in the prediction system.

**Note:** <br>
You don’t need to print anything. Just implement the given function.  

Constraints:
-
```
1 <= 'T' <= 10
1 <= 'N' <= 10^5
1 <= 'M' <= min(10^5, N*(N+1)/2)
1 <= 'U', 'V' <= 'N'

The sum of 'N' across all test cases does not exceed 10^5.

Time Limit: 1 sec

```

```
Sample Input 1:

2
5 4
1 2
1 3
1 4
1 5
5 5
1 2
1 3
1 4
1 5
2 5

Sample Output 1:

2
0

Explanation Of Sample Input 1:

For test case 1:
    Initially, there are a total of '4' matches which the coach can use . One of the best ways to reduce the number is by scheduling a match between '2' and '5'. Now, there are only '2' matches (1 → 3 and 1 → 4) which can be use by the coach. So, the answer is '2'.

For test case 2:
    Initially, there are a total of '2' matches which can be used in the predictions (1 → 3 and 1 → 4). The best way to reduce the number is by scheduling a match between '4' and '3'. Now, there are no matches which can be used in predictions. So, the answer is '0'.

Sample Input 2:

2
6 6
1 4
3 6
5 1
5 6
6 2
6 4
6 5
3 6
5 1
5 6
6 2
6 4

Sample Output 2:

0
2


```

