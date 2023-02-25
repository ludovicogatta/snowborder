
#include<fstream>
#include <iostream>

using namespace std;

void stampaf()
{
    
    string s;
    ifstream fin("miofile.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<s<<endl;
    }
    fin.close();

}
int main()
{
    int scelta;

    do
    {
        cout<<"\n\nMENU"<<endl;
        cout<<"1) VISUALIZZAZIONE DEL FILE "<<endl;
        cout<<"2)VISUALIZZAZIONE PODIO"<<endl;
        cout<<"3)ESCI"<<endl;
        cin>>scelta;
        switch(scelta)
        {
            case 1:
            stampaf();
            
            break;
            
            case 2:
            
            break;
            
        }
    }while(scelta!=3);
        
   

    return 0;
}
