#include <bits/stdc++.h>
using namespace std;
int step = 0;
//(n, from, mid, to)
void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout <<"Move a disk from "<< A << " to " << C << '\n';
        step++;
    } else {
        hanoi(n - 1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n - 1, B, A, C);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    cout << step << '\n';
}