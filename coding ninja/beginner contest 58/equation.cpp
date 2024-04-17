
/*

    Problem statement:

    You are given three numbers 'A', 'B' and 'C'.
    You have to find an array 'P' of size 3 such that:

    P[0] + P[1] = A
    P[0] + P[2] = B
    P[1] + P[2] = C
    
    It is guaranteed that an array P exists and all the elements of this array are integers.


*/ 

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int b1, int b2, int b3) {
    // Write your code here.
    long long a = b1, b = b2, c = b3;
    long long p1 = (a+c-b)/2;
    long long p0 = a-p1;
    long long x = (a+b+c)/2;
    long long p2 = x-(p1+p0);
    int a0 = int(p0);
    int a1 = int(p1);
    int a2 = int(p2);
    return {a0, a1,a2};
}