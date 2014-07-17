#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <fstream>
using std::ifstream;

#include <cstring>
//#include <conio.h>

const int MAX_CHARS_PER_LINE = 512;
const int MAX_TOKENS_PER_LINE = 20;
const char* const DELIMITER = " ";

int main()
{
    int i,flag=0;
    ifstream fin;                                     // create a file-reading object
    fin.open("College.java");                         //opens the file
    if (!fin.good())                                  // exit if file not found
        return 1; 
    while (!fin.eof())                                // read each line of the file
    {
        char buf[MAX_CHARS_PER_LINE];                   
        fin.getline(buf, MAX_CHARS_PER_LINE);         // read an entire line into memory
        int n = 0;                                    // a for-loop index
        const char* token[MAX_TOKENS_PER_LINE] = {};  // array to store memory addresses of the tokens in buf
        // parse the line
        token[0] = strtok(buf, DELIMITER);            // first token
        if (token[0])                                 // zero if line is blank 
        {
            for (n = 1; n < MAX_TOKENS_PER_LINE; n++)
            {   
                token[n] = strtok(0, DELIMITER);
                if (!token[n]) break;                 // no more tokens
            }
        }
        for (int i = 0; i <n; i++) 
        {
            if(strncmp(token[i],"end",3)==0)          //compares if token is equal to end and if true sets flag=1
            {
                flag=1;
            }
        } 
        for (int i = 0; i <n; i++)
        {   
            if(strcmp(token[i],"import")==0)          //compares if token is equal to import and if true sets flag=2
            {
               flag=2;
            }
        }
        for (int i = 0; i <n; i++)
        {       
            if(strcmp(token[i],"public")==0)          //compares if token is equal to public and if true sets flag=2
            {
                flag=2;
            }
        }
        for (int i = 0; i <n; i++)
        {       
            if(strncmp(token[i],"function",5)==0)     //compares if token is equal to function and if true sets flag=3
            {
                flag=3;
            }
        }
        for (int i = 0; i <n; i++)
        {
            if(strcmp(token[i],"class")==0)           //compares if token is equal to class and if true displays classname
            {
                cout<<"\nclassname:"<<token[i+1]<<"\n\n"; 
            }  
        }
        for (i = 0; i < n; i++)
        {
            //compares if token is equal to either long,string,double,function and if true returns methodname   
            if(strcmp(token[i],"Long")==0||strcmp(token[i],"String")==0||strcmp(token[i],"Double")==0||strcmp(token[i],"function")==0||strcmp(token[i],":")==0)
            {
                if(flag==2)
                {
                    cout<<"\naccess specifiers:"<<token[i-1];
                }
                if(strcmp(token[i+1],";")!=0)
                {
                    cout<<"\nmethod names:"<<token[i+1];                                                                                                                                                                      
                }
                
            }
        }
        /*for(i = 0; i < n; i++)
        {
            if(strcmp(token[i],"@@")==0)
            {
                cout<<"ruby variables are:"<<token[i];
            }
        }
        for(i = 0; i < n; i++)
        {
            if(strncmp(token[i],"$",1)==0&&(strncmp(token[i],"->",2)!=0))
            {
                cout<<"php variables are:"<<token[i]<<"\n";
            }
            break;
        }   */
    
    }
    if(flag==1)                                              //checks if flag==1 then its ruby language
    {
        cout<<"\n\nruby language\n";
    }
    else if(flag==2)                                         //checks if flag==2 then its java language
    {
        cout<<"\n\njava language\n";
    }
    else if(flag==3)                                        //checks if flag==3 then its php language
    {
        cout<<"\n\nphp language\n";
    }
    else
    {
        cout<<"\nother language\n";
    }
    return 0;
}

