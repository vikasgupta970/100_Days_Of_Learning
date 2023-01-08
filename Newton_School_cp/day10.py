#
# Near Equal Weight
# Time Limit: 2 sec
# Memory Limit: 128000 kB
# Problem Statement
# Newton has N different weights indexed from 1 to N i.e. W1, W2, ... , WN.

# Newton is having a hard time trying to balance the weights. He wants to divides the weights into 2 parts.

# To do so, he is choosing an integer X and merging all the weights having index not more than X into a single weight S1 and the remaining weights into a single weight S2.

# He needs to choose the index X in such a way that the absolute difference of the weights S1 and S2 is the minimum.

# Find the least possible absolute difference that Newton can come up with.
# Input
# The first line of the input contains a single integer N.
# The next line of the input contains N space separated integers W1, W2, ... , WN.

# Constraints:
# 1) 2 ≤ N ≤ 1000
# 2) 1 ≤ Wi ≤ 1000
# Output
# Print the answer in a single line
# Example
# Sample Input 1:
# 4
# 1 2 3 6

# Sample Output 1:
# 0

# Sample Explanation 1:
# Choose X as 3,
# W1 = 1 + 2 + 3 = 6
# W2 = 6
# So, | W1 - W2 | = 0


# Sample Input 2:
# 4
# 1 3 1 1

# Sample Output 2:
# 2


# Sample Input 3:
# 8
# 27 23 76 2 3 5 62 52

# Sample Output 3:
# 2
#

def solve(n,l):
    m=abs(sum(l[0:1])-sum(l[1:]));
    for i in range(1,n):
        x=abs(sum(l[0:i])-sum(l[i:]))
        if(x<m):
            m=x
    return m
n=int(input())
l=list(map(int,input().split()))
print(solve(n,l))