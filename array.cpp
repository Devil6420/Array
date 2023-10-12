#include<iostream>
using namespace std ;
int main(){
    int num[9];
    cout<<"enter the number:-"<<endl;
    for(int i=0;i<10;++i){
        cin>>num[i];
    }
    cout<<"the number are:"<<endl;
    for (int n = 0; n <10; n++)
    {
        cout<<num[n]<<" "<<endl;
       
    }
    
    cout<<"Enter the value ot be compared"<<endl;
    int num2;
    cin>>num2;
    int tin=0;
    for(int m=0;m<10;m++)
    {
    
         if (num2==num[m])
        {
           cout<<"Present";
            tin =1;
        }
    }
    if(tin==0)
    {
       cout<<"Absent";
    }    
    return 0;
    



}
