#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int s;
    cin >> s;
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < s; i++)
    {
        mini = min(a[i], mini);
        maxi = max(a[i], maxi);
    }
    cout << endl;
    cout << "Min is: " << mini << endl;
    cout << "Max is: " << maxi << endl;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == mini)
            cout << "Index of minimum is: " << i << endl;
        else if (a[i] == maxi)
            cout << "Index of maximum is: " << i << endl;
    }
}