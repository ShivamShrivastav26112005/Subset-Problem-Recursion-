// normal remove a character from a string.

// Ques -: Remove all occurences of 'i' from a string.



// #include<iostream>
// using namespace std;
// int main()
// {
//    string str="Shivam Shrivastav";
//    cout<<str;
//    // Skip 'i' from a string
//    string s=" ";
//    for(int i=0; i<str.size(); i++)
//    {

//    if(str[i]!='i')
//    s+=str[i];

//    }
//    cout<<endl;
//    cout<<s;

// }




// using recursion we remove a character ('i') from a string.


// #include<iostream>
// using namespace std;
// void removechar(string ans, string original)
// {

//     if(original.length()==0)
//     {
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='i') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));

// }
// int main()
// {
//     string str="Shivam Shrivastav";
//     removechar(" ",str);
// }



// Practice same ques -:

// Ques -: remove a character ('h') from a given string using reecursion.

// #include<iostream>
// using namespace std;
// void remove(string ans , string original)
// {
//     if(original.length()==0) 
//     {
//         cout<<ans;
//         return ;
//     }

//     char ch=original[0];
//     if(ch=='h'|| ch=='a') remove(ans,original.substr(1));
//     else remove(ans+ch, original.substr(1));
// }
// int main()
// {
//     string str="Shivam Shrivastav";
//     remove(" ", str);
// }



// optimize way -: 
// OPTIMIZE WAT TO REMOVE A CHARACTER FROM A STRING.


// #include<iostream>
// using namespace std;
// void remove(string ans, string original, int idx)
// {

//     if(idx==original.length())
//     {
//         cout<<ans;
//         return;
//     }
//     char ch=original[idx];
//     if(ch=='h') remove(ans, original, idx+1);
//     else remove(ans+ch,original,idx+1);
// }
// int main()
// {
//     string str=" Shivam Shrivastav ";
//     remove(" ", str, 0);
// }



// Ques.2 -: Remove 1 from the arr = 1,2,3,1,1,4,1,7 using recursion.

// ********** not solved by me try latter ***************