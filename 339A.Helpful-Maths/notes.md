# Problem 

Learning addition operation. Teacher has wrriten down sum of multiple numbers. Pupils should calculate the sum. 

To make calculation easier, the sum only contains numbers 1, 2, nad 3. Still, that isn't enough for Xenia. She is only beginning to count, so can calculate a sum only if the summands follow in non-decreasing order.

For example, she cna't calculate the sum 1+3+2+1 but she can calculate the sum 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

# Input
The first line contains a non-empty string s -> the sum Xenia needs to count. String s contains no space. 
It only contains digits and char "x". Besides, string s is a correct sum numbers 1, 2, and 3.  

S is at most 100 char long.

# Example

`3+2+1` -> `1+2+3`
`1+1+3+1+3` -> `1+1+1+3+3`
`2`->`2`

# Thoughts

Make a simple list and then do a binary search and append to that list

# Simple Variation Counting Sort

Bucket soritng, and there's an even simpler variation called counting sort.

Think about this example

Input: `3+1+2+1+3+2+1`

Instead of worrying about where to insert each number, what if we simply count how many times each number appears.

Frequency Count {
    1:3,
    2:2,
    3:2
}

With this notice something important: We dont' need to know the original positions of the numbers anymore. We only need to know how many 1, 2, and 3 exists.

And because we know:  1 < 2 < 3, we know exactly which order to reconstruct them in.

## Why its better than binary insertion
The original approach took `O(n^2)` worst-case time because inserting into a sorted vecotr could require shifting elements.

This new approach takes:
- Time: `O(n)` - scan the input, count the numbers, and construct the output.
- Auxiliary space: `O(1)` for the frequency count, since there are only 3 possible values. The output string itself requires `O(n)` space.

This is exactly what I want you to learn from Codeforces: Identifying constraints that llow to simplify a problem

# Current Solution Breakdown (With frequency mapping)