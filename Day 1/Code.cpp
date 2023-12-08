#include <iostream>
using namespace std;
int main() {
    int ans = 0;
    for(int line = 1; line <= 1000; line++) {
        string text;
        cin >> text;
        int i = 0;
        while(i < text.size()) {
            if((text[i] >= '0') && (text[i] <= '9')) break;
            i++;
        }
        ans += (text[i] - '0') * 10;
        i = text.size() - 1;
        while(i >= 0) {
            if((text[i] >= '0') && (text[i] <= '9')) break;
            i--;
        }
        ans += (text[i] - '0');
    }
    cout << ans << endl;
    return 0;
}
