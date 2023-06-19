// Problem Statement
// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


//Another axample
// Input:  N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].

// The approach is to consider all possible combination steps i.e. 1 and 2, at every step. To reach the Nth stair, one can jump from either (N – 1)th or from (N – 2)th stair. Hence, for each step, total ways would be the summation of (N – 1)th stair + (N – 2)th stair.
