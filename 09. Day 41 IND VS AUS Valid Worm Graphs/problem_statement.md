Problem Statement
-
You are given a graph with 'N' vertices and 'M' directed edges. Each vertex is assigned a random number in the range '[0, K - 1]' to represent the score at a specific time in a cricket match, with equal probability for all numbers. Directed edges signify the progression of scores from past points to future points.

A valid graph in this context ensures that for all directed edges '(u, v)', the random number assigned to vertex 'u' is less than or equal to the random number assigned to vertex 'v', as the score from a past point is always less than or equal to the score of a future point in a cricket match.

The given graph is guaranteed to satisfy the following property: There is a vertex 'v' such that if we start a DFS from 'v', we can visit all 'N' vertices, and there is only one shortest path from 'v' to all 'N' vertices.

Find the probability that the randomly generated graph is valid.

Note: The answer should be found modulo 10^9 + 7. Formally, let M = 10^9 + 7. It can be shown that the answer can be expressed as an irreducible fraction p/q, where p and q are integers and q !≡ 0 (mod M). Output the integer equal to p * (q^-1) mod M. In other words, output such an integer x that 0 <= x < M and x * q ≡ p (mod M).

For Example :
```
Let 'N' = 3, 'M' = 2, edges = [ [ 0, 1 ], [ 0, 2 ] ], 'K' = 3.
Random number assignments that result in a valid graph are [ 0, 0, 0 ], [ 0, 0, 1 ], [ 0, 1, 0 ], [ 0, 1, 1], [ 0, 0, 2 ], [ 0, 2, 0 ], [ 0, 2, 1 ], [ 0, 1, 2 ], [ 0, 2, 2 ], [ 1, 1, 1 ], [ 1, 2, 1 ], [ 1, 1, 2 ], [ 1, 2, 2 ], and [ 2, 2, 2 ].
The total number of possible assignments is '27', and the '14' assignments above are desired.
Thus, the required probability is '(14 / 27) % (10^9 + 7) = 185185187'.
```

Detailed explanation<br>
-
**Input Format** <br>
The first line of input contains a single integer 'T', which denotes the number of test cases.
Then 'T' test cases follow. For each test case:

The first line contains three integers, 'N', 'M', and 'K', denoting the number of vertices, the number of edges, and the upper limit on the random numbers, respectively.
The following 'M' lines contain two integers, 'u' and  'v', denoting a directed edge from vertex 'u' to vertex 'v'.

**Output Format:** <br>
For each test case, return the probability that the resulting graph is valid.

**Note:** <br>
You don’t need to print anything. Just implement the given function.

Constraints:
-
```
1 <= 'T' <= 10
2 <= 'N, M' <= 10^3
1 <= 'K' <= 10^3
0 <= 'u, v' < 'N'

Time Limit: 1 sec

```

```
Sample Input 1 :

2
3 2 2
0 2
2 1
3 3 3
0 1
1 2
2 0

Sample Output 1 :

500000004
111111112

Explanation of sample input 1 :

First test case:-
Random number assignments that result in a valid graph are [ 0, 0, 0 ], [ 0, 1, 0 ], [ 0, 1, 1 ], [ 1, 1, 1 ].
The total number of possible assignments is '8', and the '4' assignments above are desired.
Thus, the answer is '(4 / 8) % (10^9 + 7) = 500000004'.

Second test case:-
Random number assignments that result in a valid graph are [ 0, 0, 0 ], [ 1, 1, 1 ], [ 2, 2, 2 ].
The total number of possible assignments is '27', and the '3' assignments above are desired.
Thus, the answer is '(3 / 27) % (10^9 + 7) = 111111112'.

Sample Input 2 :

2
5 5 5
0 1
1 2
2 3
3 0
4 0
7 8 5
2 1
1 0
0 2
5 4
4 3
3 5
6 0
6 3

Sample Output 2 :

713600005
571328004
```

