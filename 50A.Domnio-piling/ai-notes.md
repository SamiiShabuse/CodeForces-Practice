# 1. Ask: "What resource does each object consume?"

You have an `M x N` board.

So how many individual squares are there? - M x N

Now we look at one domino: 2 x 1

It always consumes exactly **2 squares**.

So immediately you should start thinking:

> If I have `M*N` squares, and every domino needs 2 squares, how many groups of 2 can I make?

For example, with the first test case:

```txt
2 x 4 board
```

There are: 2 x 4 = 8 squares.

Each domino eats 2 squares: 8/2 = 4

So 4 dominoes.

# 2. Then test the annoying case: What if the board has an odd number of squares?

Take:

```txt
3 x 3
```

There are: 3 x 3 = 9 squares. But you cannot have `4.5` dominoes.

You can fit: 4 dominoes and only 1 square is left over.

Visually:

```txt
[][][]
[][][]
[][][]
```

Four dominoes can cover 8 squares:

```txt
A A B
C C B
D D .
```

That `.` is the unused square.

So mathematically you're starting to see: dominoes = (MN / 2).floor()

# 3. But this is the important competitive-programming question

Don't immediately trust the formula.

Ask: 

> "Is `floor(M*N/2) merely an upper bound, or can i actually always arrange the dominoes to achieve it?"

This distinction is important. 

Imagine a weird-shaped board:

```txt
[]
[][][]
[]
```

Maybe knowing the number of squarea alone wouldn't be enough because the shape could prevent certain placements.

But here the board is a **rectangle**, and dominoes can rotate.

So if either `M` or `N` is even, you can just tile the wwhole board into strips:

```text
A A 
B B 
C C 
D D
```

If both `M` and `N` are odd, the total number of squares is odd. You can cover everything except one square.

So the upper bound is actually achievable.