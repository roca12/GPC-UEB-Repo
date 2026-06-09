/*
 * Autor: Gabriella Castro
 * Problema: The easiest problem is this one
 * Juez online: Kattis
 * Veredicto: Accepted
 * URL: https://open.kattis.com/problems/easiest
 */


#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;

    while (cin >> n && n != 0) {
        int targetSum = sumOfDigits(n);
        int p = 11;

        while (true) {
            if (sumOfDigits(n * p) == targetSum) {
                cout << p << "\n";
                break;
            }
            p++;
        }
    }

    return 0;
}
