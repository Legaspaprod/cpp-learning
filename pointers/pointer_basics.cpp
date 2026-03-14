#include <iostream>
using namespace std;


int power(int x){
    int c=0;
    int p=2;
    while(p<x){
        p*=2;
        ++c;}
    return c;
}
int main()
{
int n;
cin >> n;
while (n--)
    {
        int a;
        cin >> a;
            cout << power(a);
            cout << endl;
    }


    return 0;
}
