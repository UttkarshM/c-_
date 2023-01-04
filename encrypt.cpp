#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int len;
    char encrypt[100];
    char arr[100][100];
    char ch[100];
    cout<<"enter the string:";
    cin>>ch;
    len=strlen(ch);

    for(int i=0;i<len;i++){
        arr[i][0]=ch[i];
    }

    cout<<"enter the code:";
    for(int i=0;i<len;i++){
        cout<<arr[i][0]<<":";
        cin>>encrypt[i];
    }

    for(int i=0;i<len;i++){
        ch[i]=encrypt[i];
    }
    for(int i=0;i<len;i++){
        cout<<ch[i];
    }


    cout<<endl;
    return 0;   
}