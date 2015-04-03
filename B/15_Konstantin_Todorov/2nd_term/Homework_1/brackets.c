#include <stdio.h>
#include <string.h>

int first_digit (char string[]);
int kudravi (char string[]);
int kvadratni (char string[]);
int obiknovenni (char string[]);
int main(){

    char niz[125];
    int a,b,c,d;
    printf("What is the meaning of life \n");
    scanf("%s", niz);



    a=first_digit(niz);
    if (a==-1){
        printf("\n NEVALIDEN \n");
        }
    else{
        b=kudravi(niz);
        if (b==-1){
            printf("\n NEVALIDEN \n");
        }
        else{
            c=kvadratni(niz);
            if (c==-1){
                printf("\n NEVALIDEN \n");
            }
            else{
                d=obiknovenni(niz);
                if (d==-1){
                    printf("\n NEVALIDEN \n");
                }
                else{
                    printf("\n VALIDEN \n");
                }
            }
        }

    }

    return 0;
}


int first_digit(char string[]){
    int istinata;
    if(string[0]=='}' || string[0]==']' || string[0]==')'){
        istinata=-1;
    }
    return istinata;

}

int kudravi(char string[]){
    int istinata,lenght,count,sum_otv,sum_ztv;
    lenght=strlen(string);
    for(count=0;count<=lenght;count++){
        if(string[count]=='{'){
            sum_otv++;
        }
        if(string[count]=='}'){
            sum_ztv++;
        }
    }
    if(sum_otv=sum_ztv){
        istinata=0;
    }
    else{
        istinata=-1;
    }
    return istinata;

}

int kvadratni(char string[]){
    int istinata,lenght,count,sum_otv,sum_ztv;
    lenght=strlen(string);
    for(count=0;count<=lenght;count++){
        if(string[count]=='['){
            sum_otv++;
        }
        if(string[count]==']'){
            sum_ztv++;
        }
    }
    if(sum_otv=sum_ztv){
        istinata=0;
    }
    else{
        istinata=-1;
    }
    return istinata;

}

int obiknovenni (char string[]){
    int istinata,lenght,count,sum_otv,sum_ztv;
    lenght=strlen(string);
    for(count=0;count<=lenght;count++){
        if(string[count]=='('){
            sum_otv++;
        }
        if(string[count]==')'){
            sum_ztv++;
        }
    }
    if(sum_otv=sum_ztv){
        istinata=0;
    }
    else{
        istinata=-1;
    }
    return istinata;
}
