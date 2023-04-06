#include<bits/stdc++.h>
using namespace std;
int main(){
    FILE* fptr;
    char chr[1000];
    fptr=fopen("file_handiling.txt","r");
    if(fptr!=NULL){
        cout<<"FILE OPENED SUCCESSFULLY"<<endl;
        while(fgets(chr,1000,fptr)){
            cout<<chr<<endl;
        }
    }
    else{
        cout<<"FILE OPEN UNSUCCESSFULL"<<endl;
    }
    fptr = fopen("file_handiling.txt","w");
    fputs(chr,fptr);
    fputs("\nTEXT ",fptr);
    fputs("WRITTEN ",fptr);
    fputs("SUCCESSFULLY.",fptr);
    fclose(fptr);
    return 0;
}