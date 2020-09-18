//RUN THIS CODE ONLY ON VISUAL STUDIO OTHERWISE YOU HAVE TO MAKE SOME CHANGES IN THIS TO RUN IT !!!

//NOBITA WITHOUT DORAEMON

#include<iostream>
using namespace std;
#include<string.h>
#include<process.h>

void main() {
    int i, j, t;
    char s[100];
    cout << "Enter The Sum String \n";
    gets_s(s);
    if (strlen(s) > 100)
    {
        cout << "Length Greater Than 100 !!";
        exit(0);
    }
    
    for (int k = 0; k < strlen(s); k+=2)
    {
        if (s[k] != '1' && s[k] != '2' && s[k] != '3')
        {
            cout << "WRONG INPUT !!";
            exit(0);
        }
        
    }
    
    for (i = 0; i < strlen(s); i+=2)
    {
        for (j = i+2; j < strlen(s); j+=2)
        {
            if (s[i] > s[j])
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    puts(s);
}