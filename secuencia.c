#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "auxiliar.h"

void predet(double c[]);
int main(int argc, char *argv[]){
      argv0 = "secuencia";
if(argc>4){ 
Error(EX_USAGE,"El número de argumentos no es correcto.");}
else{
if(((argc==2) && strcmp(argv[1],"-h") ==0)||((argc==2) && strcmp(argv[1], "--help")==0)){//si tenemos h o help
printf("secuencia: Uso: secuencia [ hasta [ desde [ paso ]]]\n" );
printf("secuencia: Genera la secuencia de números en el intervalo y paso indicados.\n");
 return EX_OK;}
double prede[3],valores[3];
int veces= argc-1,error=0,copiar=3-veces;
predet(prede);
while(copiar>0){

valores[3-copiar]=prede[3-copiar];
copiar--;
}
while(veces>0&&error==0){
veces--;
int i=1;
        while(argv[veces+1][i] !='\0') { 
if (argv[veces+1][i]=='-') { 
error=1;}
i++;}
if(error==0){
valores[veces]=atof(argv[veces+1]);}

}
if(error==1){

if((veces+1)==1){Error(EX_USAGE,"El parámetro \"hasta\" no es un número real válido.");}
if((veces+1)==2){Error(EX_USAGE,"El parámetro \"desde\" no es un número real válido.");}
else{
Error(EX_USAGE,"El parámetro \"paso\" no es un número real válido.");}

}
if(valores[2]==0){Error(EX_USAGE,"El parámetro \"paso\" no puede valer 0");
}

int a ;
const char* valorchar =getenv("MAX_OUTPUT");
if(valorchar!=NULL){
if(atof(valorchar)>0){




a=atof(valorchar);}
else{
if(valorchar[0]=='0'){Error(EX_NOPERM,"Se intentó superar el límite de salida establecido por MAX OUTPUT.");}//nuevooooo
else{
a=100;}}
}
else{a= 100;} 
if(valores[2]>0&&valores[1]<=valores[0]){//normal
while(valores[1]<=valores[0]){
if(a>0){
printf("\t%g\n",valores[1]);
valores[1]+=valores[2];}
else{Error(EX_NOPERM,"Se intentó superar el límite de salida establecido por MAX OUTPUT.");}
a--;}
return EX_OK;}
if(valores[2]<0&&valores[0]<=valores[1]){//alreves
while(valores[0]<=valores[1]){
if(a>0){
printf("\t%g\n",valores[1]);
valores[1]+=valores[2];}
else{Error(EX_NOPERM,"Se intentó superar el límite de salida establecido por MAX OUTPUT.");}
a--;}
return EX_OK;}

else{Error(EX_USAGE,"El signo de \"paso\" no permite recorrer el intervalo en el sentido \"desde\" a \"hasta\".");}
}}
void predet(double c[]){
c[0]=10;
c[1]=1;
c[2]=1;
}
