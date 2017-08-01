#include <cstdlib>
#include <iostream>

using namespace std;

struct names{
       char nombre[20];
       };
int main(int argc, char *argv[])
{
   int i=9,intercambio,j;
   char copia[20]; 
    names nombres[10];
   //pidiendo valores x consola
    for(int i=0;i<10;i++){
          cout<<"Ingrese nombre "<<i+1<<": ";
          cin>>nombres[i].nombre;  
             }
    //ordenando
      while(i>0){
                 intercambio=0;
            for(j=0;j<i;j++){
            if(strcmp(nombres[j+1].nombre,nombres[j].nombre)<0){
                  strcpy(copia,nombres[j].nombre);
                  strcpy(nombres[j].nombre,nombres[j+1].nombre);
                  strcpy(nombres[j+1].nombre,copia);
                  intercambio=j;          
                             } 
                             }           
    i=intercambio;
    }  
        
    //mostrando el ordenamiento
    cout<<"Ordenando en forma ascendente: "<<endl;
    for(int a=0;a<10;a++){
            cout<<nombres[a].nombre<<" ";
            }
    cout<<endl;
    cout<<"Ordenando en forma descendente: "<<endl;
    for(int b=9;b>=0;b--){
            cout<<nombres[b].nombre<<" ";
            }  
    cout<<endl;    
    
     system("PAUSE");
    return EXIT_SUCCESS;
}
