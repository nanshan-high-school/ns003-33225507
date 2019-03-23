#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string m;
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        int number = 0;
        if (m[i - 2] >= '0') {
           if (m[i] == '+') {
           number = (m[i - 2] - 48) + (m[i - 1] - 48);
           }
           else if (m[i] == '-') {
                   number = (m[i - 2] - 48) - (m[i - 1] - 48);
           }
           else if (m[i] == '*') {
                   number = (m[i - 2] - 48) * (m[i - 1] - 48);
           }
           else if (m[i] == '/') {
                   number = (m[i - 2] - 48) / (m[i - 1] - 48);
           }
           total = total + number;
        }
        else {
             if (m[i] >= '0') {
                
             }
             else if (m[i] == '+') {
                     total = total + (m[i - 1] - 48);
             }
             else if (m[i] == '-') {
                     total = total - (m[i - 1] - 48);
             }
             else if (m[i] == '*') {
                     total = total * (m[i - 1] - 48);
             }
             else if (m[i] == '/') {
                     total = total / (m[i - 1] - 48);
             }
        }
    }
    cout << total;
}
