#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        int n;
        cin >> n >> s;

        while (s.length() > 1 && 
              ( (s[0] == '0' && s[s.length() - 1] == '1')  ||
                (s[0] == '1' && s[s.length() - 1] == '0') )) {
            
            s.erase(s.begin());   // remove first
            s.pop_back();         // remove last
        }

        cout << s.length() << endl;
    }

    return 0;
}
