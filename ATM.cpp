#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int wd;
    float bal;
    cin>>wd>>bal;
    if(wd%5==0)
    {
        if((bal-0.50)>=wd)
        {
            bal = bal-wd-0.50;
        }
    }
    cout<<fixed<<setprecision(2)<<bal<<endl;
    return 0;
}
