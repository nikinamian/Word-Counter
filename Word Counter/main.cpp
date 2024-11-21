//
//  main.cpp
//  Word Counter
//
//  Created by Niki Namian on 11/20/24.
//

#include <iostream>
//include the string library
#include <string>

using namespace std;

//prototype of the wordCount function
int wordCount(string aString);

int main()
{
    string str;
    int wordCounter = 0;
    cout<<"Please input a line of string: ";
    getline(cin,str);
    //calling the wordCount function and return the value to an int variable
    wordCounter=wordCount(str);
    
    cout<<"\nThe input contains "<<wordCounter<<" words.\n";
    
    return 0;
}
    //The function counts number of words from an input string
    int wordCount(string myString){
        int count=0;
        for (int i=0;i<myString.length();i++)
        {
            if((i+1)<=myString.length()){
                //3 boolean variables
                bool isCurrentCharEmpty=(myString[i]==' ');
                bool isNextCharEmpty =(myString[i+1]==' ');
                bool isCurrentCharTheLast = (i+1 == myString.length());
                
                //check if the current character is any type of character is any type of these characters eg. A,a,1
                //and the next char is an empty space
                //or it is the last character
                //then it is a word.
                if (!isCurrentCharEmpty && (isNextCharEmpty||isCurrentCharTheLast)){
                    count +=1;
                    //increment the county by one
                }
            }
        }
    return count;
}

