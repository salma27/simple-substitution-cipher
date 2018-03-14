#include <iostream>
#include <bits/stdc++.h>
using namespace std;
///Salma Essam Soliman 20170115
string alpha="abcdefghijklmnopqrstuvwxyz",beta="**************************",key,word,choice,sure,newword="";
        int sum=0,e=0,valid=0,a=0,b=0,c=0;
string length(string& key){ ///to know if the key is more than 5 letters
    while(key.length()!=5)
            {
                cout<<"Please enter a valid key=5:"<<endl;
                cout<<">>";
                cin>>key;
                cout<<endl;
                for(int k=0; k<key.length(); k++)   ///change capital letters to small letters
            {
                if(int(key[k])>=65&&int(key[k]<=90))
                {
                    key[k]=char(int(key[k]+32));
                }
            }
                b=0;    ///a,b,c are variables that make me know if key satisfies all conditions or no
                c=0;
            }
            a=1;    ///a=1 then it satisfies this condition

                return key;


}
string letters(string& key){    ///make sure thatthere is no repetition
    for(int i=0; i<5; i++)
            {
                for(int j=0; j<5; j++)  ///compares the letters with each other and if there is a repetition the value of sum changes
                {
                    if(j==i)
                    {
                        continue;
                    }
                    else
                    {
                        if(key[j]==key[i]&&i!=j)
                        {
                            sum=sum+1;

                        }
                    }
                    if(sum!=0)
                    {
                        break;

                    }
                }
                if(sum!=0)
                {
                   a=0;
                   c=0;
                    i=0;
                    sum=0;
                    cout<<"Please enter a valid key with no repeated letters:"<<endl;
                    cout<<">>";
                    cin>>key;
                    cout<<endl;
                    for(int k=0; k<key.length(); k++)
            {
                if(int(key[k])>=65&&int(key[k]<=90))
                {
                    key[k]=char(int(key[k]+32));
                }
            }
                    while(key.length()!=5)
            {
                cout<<"Please enter a valid 5 letters key:"<<endl;
                cout<<">>";
                cin>>key;
                                    cout<<endl;

                for(int k=0; k<key.length(); k++)
            {
                if(int(key[k])>=65&&int(key[k]<=90))
                {
                    key[k]=char(int(key[k]+32));
                }
            }
            }
                }
            }
            b=1;

                return key;


}
string numbers(string& key){    ///make sure that it contains only letters
    int g=0;
   do{

        if(int (key[g])<97||int(key[g])>122){   ///comparing the key with the ascii of alphapet letters
            cout<<"Please enter a valid non-numeric key:"<<endl<<">>";
            cin>>key;
                                cout<<endl;

            for(int k=0; k<key.length(); k++)
            {
                if(int(key[k])>=65&&int(key[k]<=90))
                {
                    key[k]=char(int(key[k]+32));
                }
            }
            g=0;

        }
        else{
            g++;
        }


   }while(g<5);




c=1;

return key;
}

int main()
{
    cout<<"Ahlan ya user ya habibi"<<endl;
    cout<<endl;

    while(true)
    {

        cout<<"what do you like to do today?"<<endl;
        cout<<"1-Cipher a message"<<endl;
        cout<<"2-Decipher a message"<<endl;
        cout<<"3-End"<<endl;
        cout<<">>";
        cin>>choice;
                            cout<<endl;


        for(int c=0; c<choice.length(); c++)
        {
            if(int(choice[c])>=65&&int(choice[c]<=90))
            {
                choice[c]=char(int(choice[c]+32));
            }
        }
        while(choice!="1"&&choice!="2"&&choice!="cipher"&&choice!="decipher"&&choice!="1-cipher a message"&&choice!="2-decipher a message"&&choice!="3"&&choice!="end"&&choice!="3-end")
        {
            cout<<"Error,Please choose from 1, 2 or 3"<<endl;
            cout<<">>";
            cin>>choice;
                                cout<<endl;

        }
        if(choice=="1"||choice=="cipher"||choice=="1-cipher a message")
        {
            cout<<"Please enter a key to continue:"<<endl;
            cout<<">>";
            cin>>key;
                                cout<<endl;

             for(int k=0; k<key.length(); k++)
            {
                if(int(key[k])>=65&&int(key[k]<=90))
                {
                    key[k]=char(int(key[k]+32));
                }
            }
            length(key);
            letters(key);
            numbers(key);
            while(a==0||b==0||c==0){
                length(key);
                letters(key);
                numbers(key);
            }



            for(int c=0; c<key.length(); c++)
        {
            if(int(key[c])>=65&&int(key[c]<=90))
            {
                key[c]=char(int(key[c]+32));
            }
        }       ///creating the new array
            for(int w=0;w<5;w++){
                beta[w]=key[w];
            }
            for(int s=4;s<26;s++){
                while(e<26){
                    if(alpha[e]==key[0]||alpha[e]==key[1]||alpha[e]==key[2]||alpha[e]==key[3]||alpha[e]==key[4]){
                        e++;
                        continue;
                    }
                    else{
                        beta[s+1]=alpha[e];
                        e++;
                        break;
                    }

                }

            }

            cout<<"Please enter the message to cipher:"<<endl;  ///getting spaces from the user
            cout<<">>";
            word="anything";
            cin.ignore();
            getline(cin,word);
                                cout<<endl;

            newword=word;
            for(int k=0; k<word.length(); k++)
            {
                if(int(word[k])>=65&&int(word[k]<=90))
                {
                    word[k]=char(int(word[k]+32));
                }
            }
            for(int i=0; i<word.length(); i++)  ///completing my array
            {
                for(int j=0; j<alpha.length(); j++)
                {
                    if(word[i]==alpha[j])
                    {
                        newword[i]=beta[j];
                        break;
                    }
                    if(j==alpha.length()-1)
                    {
                        newword[i]=word[i];
                        break;
                    }
                }
            }

            cout<<"your cipher text is:"<<endl<<">>"<<newword<<endl;
                                cout<<endl;

        }
        if(choice=="2"||choice=="decipher"||choice=="2-decipher a message") ///the same goes with decipher with some changes but the same concept
        {

           cout<<"Please enter a key to continue:"<<endl;
            cout<<">>";
            cin>>key;
                                cout<<endl;

             for(int k=0; k<key.length(); k++)
            {
                if(int(key[k])>=65&&int(key[k]<=90))
                {
                    key[k]=char(int(key[k]+32));
                }
            }
            length(key);
            letters(key);
            numbers(key);
            while(a==0||b==0||c==0){
                length(key);
                letters(key);
                numbers(key);
            }



            for(int c=0; c<key.length(); c++)
        {
            if(int(key[c])>=65&&int(key[c]<=90))
            {
                key[c]=char(int(key[c]+32));
            }
        }
            for(int w=0;w<5;w++){
                beta[w]=key[w];
            }
            for(int s=4;s<26;s++){
                while(e<26){
                    if(alpha[e]==key[0]||alpha[e]==key[1]||alpha[e]==key[2]||alpha[e]==key[3]||alpha[e]==key[4]){
                        e++;
                        continue;
                    }
                    else{
                        beta[s+1]=alpha[e];
                        e++;
                        break;
                    }

                }

            }
            cout<<"Please enter the message to decipher:"<<endl<<">>";
            word="anything";
            cin.ignore();
            getline(cin,word);
                                cout<<endl;

            newword=word;
            for(int k=0; k<word.length(); k++)
            {
                if(int(word[k])>=65&&int(word[k]<=90))
                {
                    word[k]=char(int(word[k]+32));
                }
            }
            for(int i=0; i<word.length(); i++)
            {
                for(int j=0; j<beta.length(); j++)
                {
                    if(word[i]==beta[j])
                    {
                        newword[i]=alpha[j];
                        break;
                    }
                    if(j==alpha.length()-1)
                    {
                        newword[i]=word[i];
                        break;
                    }
                }
            }
            cout<<"your plain text is:"<<endl<<">>"<<newword<<endl;
                                cout<<endl;

        }
        if(choice=="3"||choice=="end"||choice=="3-end")
        {
            cout<<"Are you sure that you want end this program?"<<endl;
            cout<<"1-Yes"<<endl;
            cout<<"2-No"<<endl;
            cout<<">>";
            cin>>sure;
                                cout<<endl;

            while(sure!="2"&&sure!="no"&&sure!="No"&&sure!="2-no"&&sure!="2-No"&&sure!="1"&&sure!="yes"&&sure!="1-Yes"&&sure!="yes"&&sure!="1-yes"&&sure!="Y"&&sure!="y"&&sure!="n"&&sure!="N")
            {
                cout<<"please choose 1 or 2"<<endl;
                cout<<">>";
                cin>>sure;
                                    cout<<endl;

            }
            if(sure=="1"||sure=="yes"||sure=="1-Yes"||sure=="yes"||sure=="1-yes"||sure=="Y"||sure=="y")
            {
                cout<<"Thank you for using this program"<<endl;
                                    cout<<endl;

                break;
            }
            else
            {
                continue;
            }

        }


    }
    return 0;
}
