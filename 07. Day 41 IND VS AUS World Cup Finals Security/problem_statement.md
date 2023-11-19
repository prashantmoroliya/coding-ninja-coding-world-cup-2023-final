Problem Statement
-
In the epic showdown between India and Australia in the Cricket World Cup final, 'N' powerful defenders represent the vigilant commandos guarding the boundary of the ground and providing security to the players on the ground, while 'M' exuberant fans symbolize the excited spectators in the stands of the stadium.

These defenders are strategically positioned at specific locations along the boundary, indicated by the array 'B' of length 'N', such that 'B[i]' is the x-coordinate of the 'i-th' defender.

Meanwhile, the fans are joyfully marching toward the ground in a straight line parallel to the x-axis. They are  positioned at respective coordinates represented by the array 'A' such that 'A[i]' is the x-coordinate of the 'i-th' excited fan on the line.

Each fan has a level of enthusiasm denoted by the array 'H'such that 'H[i]' represents the level of enthusiasm of the 'i-th' excited fan. If a fan's enthusiasm reduces to '0', it means they've calmed down.

Each defenders can fire an infinite-range railgun to either its left or right side. Defenders have accurate throws that can reduce a fan's excitement by 'K'. You only have a moment to act before more fans appear, so each defender can fire its railgun at most once.

The goal is to prevent the exuberant fans from entering the ground after India win the world cup. Determine if it's possible to eliminate all the fans. Return '1' if achievable; otherwise, return '0'.

For Example :

```
Let 'N' = 2, 'M' = 3, 'A' = [ 3, 5, 7 ], 'H' = [ 4, 3, 2 ], 'B' = [ 1, 6 ], 'K' = 2.
The order of defenders and fans on the line is: [ D0, F0, F1, D1, F2 ], where 'Di' is the 'i-th' defender and 'Fi' is the 'i-th' fan.
D0 fires a railgun to its right side, dealing 'K = 2' decrease in excitement level of every fan. 'H' reduces to [ 2, 1, 0 ].
D1 fires a railgun to its left side, dealing 'K = 2' damage to F0 and F1. All fans are eliminated.
Therefore, it is possible to eliminate all the fans..
Thus, the answer is '1'.
```


Detailed explanation<br>
-
**Input Format** <br>
The first line of input contains a single integer 'T', which denotes the number of test cases.
Then 'T' test cases follow. For each test case:

The first line contains three integers, 'N', 'M', and 'K', denoting the number of defenders, the number of fans, and the damage from one shot of the railgun on their excitement level, respectively.
The second line contains 'M' integers, denoting the array 'A'.
The third line contains 'M' integers, denoting the array 'H'.
The fourth line contains 'N' integers, denoting the array 'B'.

**Output Format:** <br>
For each test case, if it is possible to eliminate all the fans, return '1', otherwise return '0'.

**Note:** <br>
You don’t need to print anything. Just implement the given function.

Constraints:
-
```
1 <= 'T' <= 10
1 <= 'N, M' <= 10^5
1 <= 'K' <= 100
1 <= 'A[i], H[i], B[i]' < 2^31 
Arrays 'A' and 'B' are given in increasing order.
A defender and a fan cannot have the same x-coordinate.

Time Limit: 1 sec

```

```
Sample Input 1 :

2
3 3 5
2 3 4
10 6 8
1 5 7
1 4 9
2 3 6 8
1 10 3 7
11

Sample Output 1 :

1
0

Explanation of sample input 1 :

First test case:-
The order of defenders and fans on the line is: [ D0, F0, F1, F2, D1, D2 ], where 'Di' is the 'i-th' defender and 'Fi' is the 'i-th' fan.
D0 fires a railgun to its right side, dealing 'K = 5' decrease in excitement level of every fan. 'H' reduces to [ 5, 1, 3 ].
D1 does not fire its railgun.
D2 fires a railgun to its left side, dealing 'K = 5' decrease in excitement level of every fan. All fans are eliminated.
Therefore, it is possible to eliminate all the fans..
Thus, the answer is '1'.

Second test case:-
The order of defenders and fans on the line is: [ F0, F1, F2, F3, D0 ], where 'Di' is the 'i-th' defender and 'Fi' is the 'i-th' fan.
The only way to damage the monsters is for D0 to fire a railgun to its left side, reducing 'H' to [ 0, 1, 0, 0 ]. One fan is still left but there are no defenders left to eliminate him.
Therefore, it is not possible to eliminate all the fans.
Thus, the answer is '0'.

Sample Input 2 :

2
4 4 3
10 20 25 39
5 7 6 10
5 6 23 30
4 4 1
1 4 5 6
3 2 3 1
2 3 10 12

Sample Output 2 :

0
1
```

