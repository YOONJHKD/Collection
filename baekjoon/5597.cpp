#include <iostream>
using namespace std;

int main() {
    bool student[31] = {0};
    int n;

    for (int i = 0; i < 28; i++) {
        cin >> n;
        student[n] = 1;
    }

    for (int i = 1; i < 31; i++)
        if (student[i] == false) cout << i << "\n";
    return 0;
}
