//Programa de ejemplo, lee una fecha en  numero y lo imprime en letra
#include <iostream>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int d,m,a;
    string mes;
    cout<<"Dime el día: ";
    cin>>d;
    cout<<"Dime el mes: ";
    cin>>m;
    cout<<"Dime el año: ";
    cin>>a;
    if(m==1){
        mes="Enero";
    }
    else
    {
        if(m==2){
            mes="Feb";
        }
        else
        {
            if(m==3){
                mes="Mar";
            }
            else
            {
                if(m==4){
                    mes="Abr";
                }
                else
                {
                    if(m==5){
                        mes="May";
                    }
                    else
                    {
                        if(m==6){
                            mes="Jun";
                        }
                        else
                        {
                            if(m==7){
                                mes="Jul";
                            }
                            else
                            {
                                if(m==8){
                                    mes="Ago";
                                }
                                else
                                {
                                    if(m==9){
                                        mes="Sep";
                                    }
                                    else
                                    {
                                        if(m==10){
                                            mes="Oct";
                                        }
                                        else
                                        {
                                            if(m==11){
                                                mes="Nov";
                                            }
                                            else
                                            {
                                                if(m==12){
                                                    mes="Dic";
                                                }
                                                else
                                                {
                                                    mes="no válido";
                                                }
                                            }    
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"La fecha es: "<<d<<" de "<<mes<<" de "<<a;
    return 0;
}  