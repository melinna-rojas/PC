#include <cstdlib>
#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct alumno{

   char codigo[10], curso[10],estado[20];

   double n1,n2,n3,n4;
   double promedio;
};
int main(int argc, char *argv[])
{
     ofstream fout("notas.txt");

    alumno alumnoo[100];
    char rpta[2];
    char a[20]="Aprobado";
    char d[20]="Desaprobado";
   int contador=0, contador1=0, index=0;
   double acumulador=0.0,prom;
    do{

   cout<<"Nota del alumno "<<index+1<<endl;
       cout<<"Codigo: ";
       cin>>alumnoo[index].codigo;
       fout<<alumnoo[index].codigo<<"\t";
       cout<<"Curso: ";
       cin>>alumnoo[index].curso;
       fout<<alumnoo[index].curso<<"\t";
       cout<<"Nota 1: ";
       cin>>alumnoo[index].n1;
       fout<<alumnoo[index].n1<<"\t";
       cout<<"Nota 2: ";
       cin>>alumnoo[index].n2;
       fout<<alumnoo[index].n2<<"\t";
       cout<<"Nota 3: ";
       cin>>alumnoo[index].n3;
       fout<<alumnoo[index].n3<<"\t";

       alumnoo[index].promedio = (alumnoo[index].n1+alumnoo[index].n2+alumnoo[index].n3)/3;
       fout<<alumnoo[index].promedio<<"\t";
       acumulador=acumulador+alumnoo[index].promedio;
       prom=acumulador/(index+1);
       if(alumnoo[index].promedio>=10.5){
       strcpy(alumnoo[index].estado,a);
       contador++;
       fout<<alumnoo[index].estado<<endl;
}
       else{
        strcpy(alumnoo[index].estado,d) ;
        contador1++;
        fout<<alumnoo[index].estado<<endl;}

        cout <<"¿Desea continuar s/n?";
    cin>>rpta;
    cout<<endl;
    index++;
                   }while(strcmp(rpta,"s")==0);


    cout<<"DATOS INGRESADOS.."<<endl;
    cout<<"CODIGO \tCURSO \tN1 \tN2 \tN3 \tPROM  \tESTADO"<<endl;


    for(int j=0; j<index; j++){
       cout<<alumnoo[j].codigo<<"\t"<<
       alumnoo[j].curso<<"\t"<<alumnoo[j].n1
       <<"\t"<<alumnoo[j].n2<<"\t"<<alumnoo[j].n3
       <<"\t"<<alumnoo[j].promedio
       <<"\t"<<alumnoo[j].estado<<endl;
    }
    cout <<"Total aprobados: "<<contador<<endl;
    cout<<"Total desaprobados: "<<contador1<<endl;
    cout<<"Promedio Ponderado: "<<prom<<endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
