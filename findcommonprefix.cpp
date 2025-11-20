#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution{
    public:
    string longestcommonprefix(vector<string>&strc)
    {
        if(strc.empty())
        return "";
        string prefix=strc[0];

        for(int i=0;i<strc.size();i++){
            while(strc[i].find(prefix)!=0)
            {
                prefix=prefix.substr(0,prefix.size()-1);
                if(prefix.empty())
                return "";
            }
        }
        return prefix;
    }
};
int main()
{
    solution sol;
    int n;
    cout<<"enter count";
    cin>>n;
    vector<string>strc(n);
    cout<<"enter string";
    for(int i=0;i<n;i++)
    {
        cin>>strc[i];
    }
    string result=sol.longestcommonprefix(strc);
    cout<<result<<endl;
    return 0;


}