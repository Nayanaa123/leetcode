#include<iostream>
using namespace std;
class solution
{
    public:
    bool ispalindrome(int x)
    {
        if(x<0||(x!=0 && x%10==0))
        return false;
        int reversehalf=0;
        while(x>reversehalf){
        int lastdigit=x%10;
        reversehalf=reversehalf*10+lastdigit;
        x=x/10;
        }
        return(x==reversehalf)||(x==reversehalf%10);

    }
};
int main()
{
    solution sol;
    int x=1221;
    if(sol.ispalindrome(x))
    cout<<"true";
    else
    cout<<"false";
}