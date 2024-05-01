#include<bits/stdc++.h>
using namespace std;

string 
reversePrefix(string word, char ch) 
{
    int i=word.find(ch),j=0;
    while(j<i){
        swap(word[i],word[j]);
        j++;
        i--;
    }
    return word;
}

int 
main()
{
    string word="abcdefd";
    char ch='d';
    cout<<reversePrefix(word,ch)<<endl;
    return 0;
}