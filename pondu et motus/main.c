#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
/*0 : Noir  1 : Bleu foncé  2 : Vert foncé  3 : Turquoise  4 : Rouge foncé  5 : Violet
  6 : Vert caca d'oie   7 : Gris clair  8 : Gris foncé  9 : Bleu fluo  10 : Vert fluo
  11 : Turquoise  12 : Rouge fluo  13 : Violet 2  14 : Jaune  15 : Blanc*/
//color(couleur du texte,couleur du fond)
void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
int rech (char s[30], char carac)
{
    int i,val=-1;
    for(i = 0; i<strlen(s); i++)
        if(s[i] == carac)
            val=i;
    return val;
}
int occ (char s[30], char carac)
{
    int i,val=0;
    for(i = 0; i<strlen(s); i++)
        if(s[i] == carac)
            val++;
    return val;

}
int verif(char ch[30])
{
    int i,b=1;
    while((i<strlen(ch))&&(b==1))
    {
        if(isalpha(ch[i])==0)
            b=0;
        i++;
    }
return b;
}
int main()
{srand(time(0));
char pss[20];
int trvpsds,psis,cptpsds=0,indscrs,scrs,er;
char pseudos[1000][20];
int scores[1000];
int i,choix=4,tant,psi,cptpsd=0,trvpsd,indscr,temps,temps1,help,trouve,exist,nbrft,scr,verif,aux,permverif;
int score[1000];

char mots[15][15]={"classe","joueur","dormir","voyage","manger","argent","client","france","maison","marier","livre","pc","equipe"};

char mask[15];

char pseudo[1000][20],ps[20],m[10];

char cars[27];

char car,q;

char aux1[20];

for (i=0;i<1000;i++){
    score[i]=0;
}
for (i=0;i<1000;i++){
    scores[i]=0;}
while (choix==4){
system("cls");
for(i=1;i<=5;i++){
Color(10,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
Sleep(800);}
Sleep(1000);
printf("°°°°     °°°°°    °°°°°°   °°     °\n    °      °      °        ° °    °\n    °      °      °        °  °   °\n°°°°       °      °°°°°°   °   °  °\n    °      °      °        °    ° °\n    °    °°°°°    °°°°°°   °     °°\n°°°°");
Sleep(1000);
printf("\n\n \t\t");
printf("°        °    °°°°°     °°   °   °    °\n\t\t °      °     °         ° °  °   °    °\n\t\t  °    °      °°°°°     °  ° °   °    °\n\t\t   °  °       °         °   °°   °    °\n\t\t    °°        °°°°°     °    °   °°°°°°");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
Sleep(500);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t ||veuillez chisir un jeu||\n");
Sleep(500);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 1) Le pendu \n");
Sleep(500);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n  \t \t \t 6) Motus \n");
Sleep(500);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
Sleep(500);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 0) Quitter \n");
Sleep(500);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
do{
    scanf("%i",&choix);}
while( (choix!=1) && (choix!=6) && (choix!=0));
system("cls");
if (choix==0)
    system("exit");
while(choix==6)
{
psis=0;
 scrs=0;
 er=0;
 system("cls");
 Color(10,0);
printf("veuiller entrer votre pseudo: ");
     scanf("%s",pss);
        trvpsds=0;
        do{
            if(strcmp(pss,pseudos[psis])==0){
                trvpsds=1;indscrs=psis;}
                psis++;
        }while((trvpsds==0)&&(psis<cptpsds));
        if (trvpsds==0){
            strcpy(pseudos[cptpsds],pss);indscrs=cptpsds;
            cptpsds++;
        }
    long sec = CLOCKS_PER_SEC;
    clock_t t1,t2;
    char motsecret[30]= {""};
    char list[13][30]= {{"programmation"},
                        {"informatique"},
                        {"ordinateur"},
                        {"asd"},
                        {"disque"},
                        {"isg"},
                        {"adresse"},
                        {"antivirus"},
                        {"copy"},
                        {"langage"},
                        {"login"},
                        {"intel"},
                        {"ads"}};
    int i,j,x,nbr_tent,taillemot,val,k,g,aide=0,esp=0,gagne;
    char c;
    char cad[30];
    char placeinc[30]= {"[                            ]"};
    int verif(char cad[30]);
//-------------------------------------------------------------------------------------------------
//mot random+motsecret avec les etoile
    srand(time(NULL));
    x=rand()%13;
    taillemot=strlen(list[x]);
    //printf("%s\n",list[x]);
    c=list[x][0];
    motsecret[0]=c;
    for(i=1; i<taillemot; i++)
        strcat(motsecret,"*");
//---------------------------------------------------------------------------------------------------
    nbr_tent=taillemot;
    t1=clock();
    t2=clock();
    do
    {
        Color(10,0);
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        Color(10,0);
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        Color(10,0);
        printf("||-------------------------------------------------[MOTUS]-----------------------------------------------------------||\n");
        Color(10,0);
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        Color(10,0);
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        Color(10,0);
        printf("il vous reste %i tentatives et %lf seconde\n",nbr_tent,400-((double)(t2-t1)/(double)(sec)));
        do
        {
            Color(10,0);
            printf("%s %s donnre votre proposition compose de %i caractere    ",motsecret,placeinc,taillemot);
            scanf("%s",cad);
            for(i=0; i<strlen(cad)-1; i++)
                if(cad[i]==' ')
                    esp++;
        }
        while((strcmp(cad,"?")!=0)&&(verif(cad)==0)&&(esp==strlen(cad)));
        printf("\n");
        strcpy(placeinc,"[                            ]");

        //---------------------------------------------------------------------------------------------

        if(strcmp(cad,list[x])==0)
        {
            system("cls");
            for(i=0; i<10; i++)
            {
                printf("                                            -----------------------------\n");
                Color(10,0);
                printf("                                            !!!congratulation you win !!!\n");
                Color(10,0);
                printf("                                            -----------------------------\n");
                Color(10,0);
                sleep(1);
            }
            sleep(3);
            system("cls");
        }
        else
        {
            if((cad=="?")&&(aide==0))
            {
                do
                g=rand()%strlen(cad);
                while(motsecret[g]!='*');
                motsecret[g]=list[x][g];
                aide++;
            }
            else
            {
                for(i=0; i<strlen(cad); i++)
                {
                    c=cad[i];

                    if(c==list[x][i])//test si la lettre est dans la place correcte and it reveal it in motsecret
                    {
                        motsecret[i]=list[x][i];
                    }
                    if((occ(list[x],c)!=0)&&(c!=list[x][i]))//test si la lettre existe dans le mot mais il est mal placée elle l'ajout a la chaine des lettre mal placee
                    {
                        if(c!=motsecret[0])
                            placeinc[i+1]=c;
                    }
                }
            }
            system("cls");
            nbr_tent=nbr_tent-1;
            if (strcmp(cad,list[x])!=0)
            er++;
        }
        t2=clock();
//--------------------------------------------------------------------------------------------------
        if(((nbr_tent<=0)&&(strcmp(cad,list[x])!=0))||(400-((double)(t2-t1)/(double)(sec)))<=0)
        {
            for(i=0; i<10; i++)
            {
                printf("                                                ------------------------\n");
                Color(10,0);
                printf("                                                !!!you lose game over!!!\n");
                Color(10,0);
                printf("                                                ------------------------\n");
                Color(10,0);
                sleep(1);
            }
            sleep(2);
            system("cls");

        }
    }
    while((nbr_tent!=0)&&(strcmp(cad,list[x])!=0)&&(400-((double)(t2-t1)/(double)(sec)))>0);
    if(strcmp(cad,list[x])==0)
        {
            gagne=1;
        }
    if(strcmp(cad,list[x])!=0)
        {
            gagne=0;
        }
         if (gagne==0){
    scrs=scrs+0;
   }
else if ((er==0) || (er==1)){
    scrs=scrs+4;
    }
    else if ((er>1)&& (er<=3)){
        scrs=scrs+3;
    }
    else if ((er>3) && (er<=5)){
        scrs=scrs+2;
    }
    else if (er>=6){
        scrs=scrs+1;
    }
scores[indscrs]=scores[indscrs]+scrs;
if ( scores[indscrs]<0)
    scores[indscrs]=0;

for(i=1;i<=5;i++){
Color(1,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
Sleep(800);}
Color(1,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 6-rejouer\n");
sleep(1);
Color(1,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 7-verifier score\n");
sleep(1);
Color(1,0);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 8-classement\n");
sleep(1);
Color(1,0);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 4-Revenir au menu principal\n");
Color(1,0);
 sleep(1);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 5-Quitter l'application\n");
scanf("%i",&choix);

 }
 if(choix==7){
system("cls");
printf("votre score est : %i",scores[indscrs]);
 }
  switch (choix) {
 case 8: {
     do{
        permverif=1;
     for(i=0;i<cptpsds;i++){
         if (scores[i]<scores[i+1]){
            aux=scores[i+1];
            scores[i+1]=scores[i];
            scores[i]=aux;
            strcpy(aux1,pseudos[i+1]);
            strcpy(pseudos[i+1],pseudos[i]);
            strcpy(pseudos[i],aux1);
         permverif=0;
         }

     }

 }while (permverif==0);
system("cls");
 printf("  pseudo \t \t \t score");
 for(i=0;i<cptpsds;i++){
    printf("\n%i-%s \t \t \t %i",i+1,pseudos[i],scores[i]);
 }
 }
 case 5:{system("exit");}
 }

while (choix==1){
psi=0;
help=0;
trouve=0;
nbrft=0;
verif=0;
scr=0;
        system("cls");
        printf("veuiller entrer votre pseudo: ");
        scanf("%s",ps);
        trvpsd=0;
        do{
            if(strcmp(ps,pseudo[psi])==0){
                trvpsd=1;indscr=psi;}
                psi++;
        }while((trvpsd==0)&&(psi<cptpsd));
        if (trvpsd==0){
            strcpy(pseudo[cptpsd],ps);indscr=cptpsd;
            cptpsd++;
        }
    tant=7;
        strcpy(m,mots[rand()%10]);
    for (i=0;i<strlen(m);i++){
        mask[i]='*';
    }
    temps=400;
    i=0;
    for(q='A';q<='Z';q++){
        cars[i]=q;
        i++;
    }

do{
    printf("Il vous reste %i couts a jouer et %i secondes\n",tant,temps);
    printf("Quel est le mot secret ? ");
        for (i=0;i<strlen(m);i++){
            if (i<strlen(m)-1)
            printf("%c",mask[i]);
        else
        printf("%c \n",mask[i]);
        }
    for (i=0;i<27;i++)
        printf("%c \t",cars[i]);
    printf("\ntaper '?' pour demander l'aide \nproposer une lettre : ");
    temps1=clock();
       if(help==0){
    do{
    printf("donnez un caractere alphabetique(l'utilisation de '?' est disponible)");
car=getchar();
fflush(stdin);
    }while (((car<'A') || (car>'Z')) && ((car<'a') || (car>'z')) && (car!='?'));}

if(help==1){
     do
        {
            printf("donnez un caractere alphabetique(l'utilisation de '?' est indisponible)");
car=getchar();
    fflush(stdin);
   } while (((car<'A') || (car>'Z')) && ((car<'a') || (car>'z')));
}
    for (i=0;i<27;i++){
    if (toupper(car)==cars[i])
        cars[i]='-';
}
if (car=='?'){
    help=1;
        scr=scr-1;
}

    temps=temps-((clock()-temps1)/1000);

    car=tolower(car);
    exist=0;
    if (car!='?'){
        for (i=0;i<strlen(m);i++){
            if(car==m[i]){
                mask[i]=car;
            exist=1;
            }
        }
    if (exist==0){
        nbrft++;
        tant--;
    }
    }
    if (car=='?') {
        i=0;
        while((i<strlen(m)) &&(trouve==0)){
            if (mask[i]=='*'){
                mask[i]=m[i];
                trouve=1;
            }
            i++;
        }
    }
    system("cls");
}    while ((tant>0) && (strcmp(m,mask)) && (temps>0));
    if (strcmp(m,mask)==0){
        verif=0;
    }
    else{
        verif=1;
    }
   switch (verif){
case 0:{
   system("cls");
            for(i=0; i<10; i++)
            {
                printf("                                            -----------------------------\n");
                Color(1,0);
                printf("                                            !!!congratulation you win !!!\n");
                Color(1,0);
                printf("                                            -----------------------------\n");
                Color(1,0);
                sleep(1);
            }
            sleep(3);
            system("cls");
            break;
}
case 1:{
         system("cls");
            for(i=0; i<10; i++)
            {
                 printf("                                                ------------------------\n");
                Color(1,0);
                printf("                                                !!!you lose game over!!!\n");
                Color(1,0);
                printf("                                                ------------------------\n");
                Color(1,0);
                sleep(1);
            }
            sleep(2);
            system("cls");
            break;

}

   }
   if (verif==1){
    scr=scr+0;
   }
else if ((nbrft==0) || (nbrft==1)){
    scr=scr+4;
    }
    else if ((nbrft>1)&& (nbrft<=3)){
        scr=scr+3;
    }
    else if ((nbrft>3) && (nbrft<=5)){
        scr=scr+2;
    }
    else if (nbrft==6){
        scr=scr+1;
    }
score[indscr]=score[indscr]+scr;
if ( score[indscr]<0)
    score[indscr]=0;
for(i=1;i<=5;i++){
Color(1,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
Sleep(800);}
Color(1,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 1-rejouer\n");
sleep(1);
Color(1,0);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 2-verifier score\n");
sleep(1);
Color(1,0);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 3-classement\n");
 sleep(1);
Color(1,0);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 4-Revenir au menu principal\n");
 sleep(1);
Color(1,0);
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t \t \t 5-Quitter l'application\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

do{
scanf("%i",&choix);
}while ((choix!=1)&&(choix!=2)&&(choix!=3)&&(choix!=4)&&(choix!=5));

 }
if(choix==2){
system("cls");
printf("votre score est : %i",score[indscr]);
 }
 switch (choix) {
 case 3 : {
     do{
        permverif=1;
     for(i=0;i<cptpsd;i++){
         if (score[i]<score[i+1]){
            aux=score[i+1];
            score[i+1]=score[i];
            score[i]=aux;
            strcpy(aux1,pseudo[i+1]);
            strcpy(pseudo[i+1],pseudo[i]);
            strcpy(pseudo[i],aux1);
         permverif=0;
         }

     }

 }while (permverif==0);
 }
 system("cls");
 printf("  pseudo \t \t \t score");
 for(i=0;i<cptpsd;i++){
    printf("\n%i-%s \t \t \t %i",i+1,pseudo[i],score[i]);
 }
 case 5:{system("exit");}
 }
}
 return 0;
}
