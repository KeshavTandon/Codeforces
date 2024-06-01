#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isSorted(const std::string &str)
{
    for (size_t i = 0; i < str.length() - 1; ++i)
    {
        if (str[i] > str[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool func(const std::string &password)
{
    for(int i=0;i<password.size();i++)
    {
        if(password[i]>='1' && password[i]<='9')
        return false;
    }
    return true;
}

    void
    is_strong_password(const std::string &password)
{
    char first=password[0];
    bool isChar=false;
    if(first>='a' && first<='z')
    isChar=true;
    if(isChar)
    {
        if (isSorted(password) && func(password))
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    else{
        if(isSorted(password))
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        std::string password;
        std::cin >> password;
        is_strong_password(password);
    }

    return 0;
}
