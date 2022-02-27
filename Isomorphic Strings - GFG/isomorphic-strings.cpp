// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
         if(str1.size() != str2.size())
            return false;
        // initialise an array to map 
        //each str1[i] with str2[i] with -1
        int hash[26]; 
        for( int i = 0; i<=25; i++ )
            hash[i]= -1;
        // initialise an array to mark 
        //the visited elements of str2
        int mapped[26] = {0};
        
        // for each element in str1, check
        //if it is already visited
        for( int i =0; i<str1.size(); i++) 
        {
            // if the element str1[i] is not
            // visited yet,
            if( hash[str1[i] - 'a'] == -1  ) 
            {
                // but the element str2[i] 
                //is already mapped with some
                // other element in str1,
                //return false
                if(mapped[str2[i] - 'a'] > 0 ) 
                    return false;
                // otherwise map str1[i] with
                // str2[i] 
                hash[str1[i]-'a']=str2[i] - 'a';
                // and mark str2[i] as mapped
                mapped[str2[i]-'a']+=1;
            }
            // if the element str1[i] is
            // already visited
            else
            {
                // and if str1[i] was mapped to
                // an element other that str2[i],
                // return false
                if(hash[str1[i]-'a'] != str2[i]-'a')
                    return false;
            }
        }
        // since there were no obligations for str1
        // and str2 to be isomorphs
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends