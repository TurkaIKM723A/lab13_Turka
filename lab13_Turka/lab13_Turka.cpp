#include <iostream>

using namespace std;

double findNthTerm(int n) {

    if (n == 1) {

        return 1.0;
    }

    return findNthTerm(n - 1) + 0.2;
}

int main() {

    setlocale(LC_CTYPE, "ukr");

    int n;

    cout << "����i�� ����� ����� ���� (n): ";
    cin >> n;
    cout << "n-� ���� ����: " << findNthTerm(n) << '\n';

    return 0;
}
