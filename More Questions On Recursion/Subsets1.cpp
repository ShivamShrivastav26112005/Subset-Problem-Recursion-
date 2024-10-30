// #include<iostream>
// using namespace std;
// int main()
// {
//     string str= "Shivam Shrivastav ";
//     cout<<str<<endl;
//     cout<<str.substr(1)<<endl;
//     cout<<str.substr(5);
// }


// Ques.1 -:  Print subsets of a string with unique characters.

// #include<iostream>
// using namespace std;
// void printsubset(string ans, string original)
// {
// if(original==" ")
// {
//     cout<<ans;
//     return ;
// }

// char ch= original[0];
// printsubset(ans+ch,original.substr(1)); // 1st fun call -> add
// printsubset(ans,original.substr(1)); // 2nd fun call -> not add
// }
// int main()
// {
//     string str="abc";
//     printsubset(" ", str);
// }


// Ques.1-: print subset of a string with unique characters.

// #include<iostream>
// using namespace std;
// void  subset(string ans, string original)
// {
// if(original==" ")
// {
//     cout<<ans;
//     return ;
// }

//     char ch=original[0];
//     subset(ans+ch, original.substr(1));
//     subset(ans,original.substr(1));
// }
// int main()
// {
//     string str="abc";
//     subset(" ",str);
// }


// string of subset -> store in vectors

#include<iostream>
#include<vector>
using namespace std;
void  subset(string ans, string original,vector<string>&v)
{
if(original==" ")
{
    v.push_back(ans);
    return ;
}

    char ch=original[0];
    subset(ans+ch, original.substr(1),v);
    subset(ans,original.substr(1),v);
}
int main()
{
    string str="abc";
    vector<string>v;
    subset(" ",str,v);
}


