#include<iostream>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    //null character 
    //name[3]='\0';
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"length: "<<getlength(name)<<endl;
    return 0;
}