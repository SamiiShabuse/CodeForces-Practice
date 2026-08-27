# A. Beautiful Matrix

## Introduction

You got a 5x5 matrix consisting of 24 0's and 1 single number.

Let index of matrix rows be numbered from 1 to 5 for both top and bottom (so not starting index 0 but index 1)

## Requirements

You are allowed to apply one of the two following transformations to the matrix:

1. Swap 2 neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer  i ( 1 <= i < 5)
2.  Swap two neighboring matrix cols, that is, cols with indexes j and j + 1 for some integer j (1 <= j < 5). 

You think that a matrix looks beautiful if the single nubmer one of f the matrix is located 
directly in teh middle. (3rd row 3rd col).

Count min number of moves needed to make matrix beautiful.

# Input

Consist of 5 lines, each line containing 5 integers representing the row of the matrix

- Guaranted that the value will be in one of the lines. 

# Output

print a single int, the min number of moves needed to maek matrix beautiful. 