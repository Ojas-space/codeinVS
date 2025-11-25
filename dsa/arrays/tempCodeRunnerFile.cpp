#include <iostream>
using namespace std;
void main() {
    int s;
    cin>>s;
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    for(int i=0;i<s;i++) {
        if(a[i]<a[0]) {
            min=a[i];
        }
    }
    
}