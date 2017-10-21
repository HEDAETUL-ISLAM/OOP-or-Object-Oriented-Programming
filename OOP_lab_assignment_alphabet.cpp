#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
    int vowels,consonants,words,sentences;
    vowels=consonants=words=sentences=0;

    cout<<"enter a string: ";
    getline(cin,str);
    for(int i = 0; str[i]!='\0'; ++i){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U'){
            vowels++;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')){
            consonants++;
        }
        else if (str[i]==' '){
            words++;
        }
        else if(str[i]=='.'){
        	sentences++;
		}
    }

    cout<<"Vowels are: "<<vowels<<endl;
    cout<<"Consonants are: "<<consonants<<endl;
    cout<<"Words are: "<<words+1<<endl;
	cout<<"sentences are: "<<sentences<<endl;

    return 0;
}
