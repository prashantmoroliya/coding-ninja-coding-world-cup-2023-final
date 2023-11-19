Problem Statement
-

Virat is facing the deadly New Zealand bowlers and he has a plan for it. Each ball has a certain difficulty level represented by a value in an array 'a' of length 'n'. Virat aims to complete the innings while taking the minimum possible total difficulty.

However when facing a ball:<br>
Virat can pass on the strike by taking a single for at most 'k' balls which adds 0 to the difficulty faced by  him. But due to fatigue caused by running the subsequent balls have difficulty increased by 1.
Virat chooses a hit a boundary which adds the difficulty of the ball to difficulty faced by him.

Your goal is to help Virat by finding which balls to hit the boundaries so it minimizes the total difficulty, considering the ability to pass on the strike by taking a single. Print the minimum possible total difficulty achieved.

Example:
```
Input: 'n' = 7, 'k' = 5, 'a' = {8 ,2 , 5, 15, 11 , 2, 8}
Output: 9

For this test case, the balls that Virat should pass the strike to minimize the total difficulty are 1, 3, 4, 5,  and 7. This results in a total difficulty of 9, the minimum possible value.

To be precise, the total difficulty can be calculated as follows:
Ball 1 : Pass the Strike. (+1 to all subsequent balls)
Ball 2: Hit a Boundary. (Difficulty Face 2 + 1)
Ball 3: Pass the Strike. (+1 to all subsequent balls)
Ball 4: Pass the Strike. (+1 to all subsequent balls)
Ball 5: Pass the Strike. (+1 to all subsequent balls)
Ball 6: Hit a Boundary. (Difficulty Face 2 + 4)
Ball 7: Hit a Boundary. (Difficulty Face 2 + 1)
The total difficulty is thus 0 + 3 + 0 + 0 + 0 +6 + 0 = 9.

It can be proven that this is the optimal sequence, and there is no other way for Virat to complete the innings with a lower total difficulty.
```

Detailed explanation<br>
-
**Input Format** <br>
The first line contains a single integer 't' denoting the number of test cases, then the test case follows.

For each test case, the first line will contain two spaced integers 'n' and 'n'. 

The second line will contain 'n' spaced integers, i.e., the elements of the array 'a'.

**Output Format:** <br>
For each test case, print the minimum possible total difficulty achieved.

The output for each test case should be on a new line.

**Note:** <br>
You are not required to print anything; it has already been taken care of. Just implement the function.
```
Sample Input 1:

2
5 5
1 2 3 4 5
4 1
5 10 11 5

Sample Output 1 :

0
21

Explanation For Sample Input 1:

For test case 1:
As we can pass the strike on all the balls the total difficulty is thus 0.

For test case 2:
In this test case, there are five possible ways to pass the strike some balls:

Do not pass the strike. Total difficulty: 5+10+11+5=31.
Pass the strike on the first ball. Total difficulty: 0 + (10+1) + (11+1) + (5+1) = 29.
Pass the strike on the second ball. Total difficulty: 5 + 0 + (11+1) + (5+1) = 23.
Pass the strike on the third ball. Total difficulty: 5 + 10 + 0 + (5+1) = 21.
Pass the strike on the fourth ball. Total difficulty: 5 + 10 + 11 + 0 = 26.

To minimize the total difficulty Virat should pass the strike on the third ball. Which results in a total difficulty of 21. Therefore, the answer is 21.

Sample Input 2:

2
7 5
8 2 5 15 11 2 8
6 3
1 2 3 4 5 6

Sample Output 2 :

9
6
```
Constraints:
-
```
1 ≤ T ≤ 10
1 ≤ N ≤ 10^5
0 ≤ K ≤ N
1 ≤ A[i] ≤ 10^9
It is guaranteed that the sum of 'N' is ≤ 10^5 over all test cases.

Time limit: 1 sec
```