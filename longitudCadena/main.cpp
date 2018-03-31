#include"bits/stdc++.h"

using namespace std;

int main()
{
    string s;
    unsigned short n;
    unsigned int i, t;
    char c;
    bool found = false;

    getline(cin, s);
    cin>>n;
    while(n != 0){
        cin >> c >> i >> t;
        while(!found && i <= s.length() && t <= s.length()-1){
            if (c == s[i])
                found = true;
            i++;
        }
        if (found)
            cout << "1";
        else
            cout << "0";
        found = false;
        n--;
    }
    //return 0;
}
