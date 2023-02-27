
#include<fstream>
#include <iostream>
#include <cmath>

using namespace std;

struct snow{
    int matricola;
    string nome;
    int x[30],y[30];
    int distanza;
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
      int x1=0,y1=0;
      int d=0;
      int risultato;
      ifstream fin("miofile.txt",ios::in);
      
    while(!fin.eof())
    {
     
        for(int i=0;i<5;i++)
        {
            fin>>vet[i].matricola>>vet[i].nome;
            for(int j=0;j<30;j++)
            {
                fin>>vet[i].x[j]>>vet[i].y[j];
                risultato=sqrt(pow(x1 - vet[i].x[j], 2)+pow(y1 -vet[i].y[j], 2));
                x1=vet[i].x[j];
                y1=vet[i].y[j];
                d=d+risultato;
            }
            vet[i].distanza=d;
            d=0;
            
            
        }
        
    }
    fin.close();
   
}

void ordinamento(snow vet[],snow pod[])
{
    ;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<5;i++)
        {
            
                if(vet[i].distanza>pod[j].distanza)
                {
                    pod[j]=vet[i];
                    vet[i].distanza=1;
                    
                }
            
            
        }
        cout<<pod[j].matricola<<" "<<pod[j].nome<<" "<<pod[j].distanza<<endl;
    }

}




int main()
{
    snow vet[5];
    snow pod[5];
    
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
            caricamentoVet(vet);
            ordinamento(vet,pod);
            
            break;
            
        }
    }while(scelta!=3);
        
   

    return 0;
}
