#include <bits/stdc++.h>
using namespace std;

void insert(int hash[],int key){
    int loc = key%10;
    while(true){
        if(hash[loc]==-1 || hash[loc]==-2){
            hash[loc] = key;
            break;
        }
    }
}

int main(){
    int hash[10];
    for (int i = 0; i < 4; i++)
    {
        hash[i]=-1;
    }

    string menu = "Enter one of the choice:\n1. Add element\n2. Search element\n3. Delete element\n4. Exit";
    cout<<menu<<endl;
    int opt;
    cout<<"Your choice: ";cin>>opt;
    do{
        cout<<menu<<endl;
        cout<<"Your choice: ";cin>>opt;
        switch(opt){
            case 1:
                cout<<"End";
                break;
            case 2:
                cout<<"End";
                break;
            case 3:
                cout<<"End";
                break;
            case 4:
                cout<<"End";
                break;
        }
    }while(true);
    return 0;
}