# A. Next Round

## Description

Constentant who earns a score >= k-th place finisher's will advance to next round,
    as long as constnatn earns a positive score.

n = total participatns in contest

n >= k, youa lready know scores.

calcualte how many participants will advance to next round.

## Input

First line contains 2 integers n and k (1 <= k <= n <= 50) sepearted by single spac.e

second line contains n space-separated ingtegers a1, a2, ..., ai (0 <= ai <= 100), where ai is the socre eanred by the pariciptans who got i-thplace.

The givne sequence is not icnreasing.
    So all values i to i-1, ... ai >= ai + 1