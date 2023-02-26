
#include<fstream>
#include <iostream>
#include <cmath>

using namespace std;

struct snow{
    int matricola;
    string nome;
    int x,y,x1,y1;
};
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

    void caricamentoVet(snow vet[])
{
      int risultato;
      ifstream fin("auto.txt",ios::in);
      string app;
    while(!fin.eof())
    {
     
        for(int i=0;i<5;i++)
        {
            fin>>vet[i].matricola>>vet[i].nome>>vet[i].x>>vet[i].y>>vet[i].x1>>vet[i].y1;
            risultato=sqrt(pow(vet[i].x1 - vet[i].x, 2)+pow(vet[i].y1 -vet[i].y, 2));
            
            
        
    }
    fin.close();
    
}
}



int main()
{
    snow vet[5];
    
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