#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

int ap,tp1=0,tp2=0,tp3=0,tp4=0,tp5=0,tp0=0;
int v[10];
int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
int op=0,can=0;
int play1=0,play2=0,play3=0,play4=0,play5=0,play6=0,play7=0,play8=0,play9=0,play10=0,yplay=0,sumplay=0;
int o1,o2,o3,o4,o5,o6,o7,o8,o9,o10,os,or;
char top1[30],top2[30],top3[30],top4[30],top5[30];
void gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}
void top(){
    int aux,i,j;
    v[0]=c1;
    v[1]=c2;
    v[2]=c3;
    v[3]=c4;
    v[4]=c5;
    v[5]=c6;
    v[6]=c7;
    v[7]=c8;
    v[8]=c9;
    v[9]=c10;
    for (i=0;i<10; i++) {
        for (j=0; j<10; j++) {
            if (v[j]>v[j+1]) {
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
    if (v[9]!=0){//TOP1
            fflush(stdin);
        if (c1==v[9]){strcpy(top1,"1.- Aint no mountain high enough");tp1=1;}
        if (c2==v[9]){strcpy(top1,"1.- Dakiti");tp1=2;}
        if (c3==v[9]){strcpy(top1,"1.- Ever fallen in love");tp1=3;}
        if (c4==v[9]){strcpy(top1,"1.- Hollywood's Bleeding");tp1=4;}
        if (c5==v[9]){strcpy(top1,"1.- I'm Still Standing");tp1=5;}
        if (c6==v[9]){strcpy(top1,"1.- I'm an albatraoz");tp1=6;}
        if (c7==v[9]){strcpy(top1,"1.- Lovely");tp1=7;}
        if (c8==v[9]){strcpy(top1,"1.- Passionfruit");tp1=8;}
        if (c9==v[9]){strcpy(top1,"1.- West Side");tp1=9;}
        if (c10==v[9]){strcpy(top1,"1.- Wherever i go");tp1=10;}
    }
    if (v[8]!=0){//TOP2
            fflush(stdin);
        if (c1==v[8]&&tp1!=1){strcpy(top2,"2.- Aint no mountain high enough");tp2=1;}
        if (c2==v[8]&&tp1!=2){strcpy(top2,"2.- Dakiti");tp2=2;}
        if (c3==v[8]&&tp1!=3){strcpy(top2,"2.- Ever fallen in love");tp2=3;}
        if (c4==v[8]&&tp1!=4){strcpy(top2,"2.- Hollywood's Bleeding");tp2=4;}
        if (c5==v[8]&&tp1!=5){strcpy(top2,"2.- I'm Still Standing");tp2=5;}
        if (c6==v[8]&&tp1!=6){strcpy(top2,"2.- I'm an albatraoz");tp2=6;}
        if (c7==v[8]&&tp1!=7){strcpy(top2,"2.- Lovely");tp2=7;}
        if (c8==v[8]&&tp1!=8){strcpy(top2,"2.- Passionfruit");tp2=8;}
        if (c9==v[8]&&tp1!=9){strcpy(top2,"2.- West Side");tp2=9;}
        if (c10==v[8]&&tp1!=10){strcpy(top2,"2.- Wherever i go");tp2=10;}
    }
    if (v[7]!=0){//TOP3
            fflush(stdin);
        if (c1==v[7]&&tp1!=1&&tp2!=1){strcpy(top3,"3.- Aint no mountain high enough");tp3=1;}
        if (c2==v[7]&&tp1!=2&&tp2!=2){strcpy(top3,"3.- Dakiti");tp3=2;}
        if (c3==v[7]&&tp1!=3&&tp2!=3){strcpy(top3,"3.- Ever fallen in love");tp3=3;}
        if (c4==v[7]&&tp1!=4&&tp2!=4){strcpy(top3,"3.- Hollywood's Bleeding");tp3=4;}
        if (c5==v[7]&&tp1!=5&&tp2!=5){strcpy(top3,"3.- I'm Still Standing");tp3=5;}
        if (c6==v[7]&&tp1!=6&&tp2!=6){strcpy(top3,"3.- I'm an albatraoz");tp3=6;}
        if (c7==v[7]&&tp1!=7&&tp2!=7){strcpy(top3,"3.- Lovely");tp3=7;}
        if (c8==v[7]&&tp1!=8&&tp2!=8){strcpy(top3,"3.- Passionfruit");tp3=8;}
        if (c9==v[7]&&tp1!=9&&tp2!=9){strcpy(top3,"3.- West Side");tp3=9;}
        if (c10==v[7]&&tp1!=10&&tp2!=10){strcpy(top3,"3.- Wherever i go");tp3=10;}
    }
    if (v[6]!=0){//TOP4
            fflush(stdin);
        if (c1==v[6]&&tp1!=1&&tp2!=1&&tp3!=1){strcpy(top4,"4.- Aint no mountain high enough");tp4=1;}
        if (c2==v[6]&&tp1!=2&&tp2!=2&&tp3!=2){strcpy(top4,"4.- Dakiti");tp4=2;}
        if (c3==v[6]&&tp1!=3&&tp2!=3&&tp3!=3){strcpy(top4,"4.- Ever fallen in love");tp4=3;}
        if (c4==v[6]&&tp1!=4&&tp2!=4&&tp3!=4){strcpy(top4,"4.- Hollywood's Bleeding");tp4=4;}
        if (c5==v[6]&&tp1!=5&&tp2!=5&&tp3!=5){strcpy(top4,"4.- I'm Still Standing");tp4=5;}
        if (c6==v[6]&&tp1!=6&&tp2!=6&&tp3!=6){strcpy(top4,"4.- I'm an albatraoz");tp4=6;}
        if (c7==v[6]&&tp1!=7&&tp2!=7&&tp3!=7){strcpy(top4,"4.- Lovely");tp4=7;}
        if (c8==v[6]&&tp1!=8&&tp2!=8&&tp3!=8){strcpy(top4,"4.- Passionfruit");tp4=8;}
        if (c9==v[6]&&tp1!=9&&tp2!=9&&tp3!=9){strcpy(top4,"4.- West Side");tp4=9;}
        if (c10==v[6]&&tp1!=10&&tp2!=10&&tp3!=10){strcpy(top4,"4.- Wherever i go");tp4=10;}
    }
    if (v[5]!=0){//TOP5
            fflush(stdin);
        if (c1==v[5]&&tp1!=1&&tp2!=1&&tp3!=1&&tp4!=1){strcpy(top5,"5.- Aint no mountain high enough");tp5=1;}
        if (c2==v[5]&&tp1!=2&&tp2!=2&&tp3!=2&&tp4!=2){strcpy(top5,"5.- Dakiti");tp5=2;}
        if (c3==v[5]&&tp1!=3&&tp2!=3&&tp3!=3&&tp4!=3){strcpy(top5,"5.- Ever fallen in love");tp5=3;}
        if (c4==v[5]&&tp1!=4&&tp2!=4&&tp3!=4&&tp4!=4){strcpy(top5,"5.- Hollywood's Bleeding");tp5=4;}
        if (c5==v[5]&&tp1!=5&&tp2!=5&&tp3!=5&&tp4!=5){strcpy(top5,"5.- I'm Still Standing");tp5=5;}
        if (c6==v[5]&&tp1!=6&&tp2!=6&&tp3!=6&&tp4!=6){strcpy(top5,"5.- I'm an albatraoz");tp5=6;}
        if (c7==v[5]&&tp1!=7&&tp2!=7&&tp3!=7&&tp4!=7){strcpy(top5,"5.- Lovely");tp5=7;}
        if (c8==v[5]&&tp1!=8&&tp2!=8&&tp3!=8&&tp4!=8){strcpy(top5,"5.- Passionfruit");tp5=8;}
        if (c9==v[5]&&tp1!=9&&tp2!=9&&tp3!=9&&tp4!=9){strcpy(top5,"5.- West Side");tp5=9;}
        if (c10==v[5]&&tp1!=10&&tp2!=10&&tp3!=10&&tp4!=10){strcpy(top5,"5.- Wherever i go");tp5=10;}
    }
    if (v[9]!=0){
            fflush(stdin);
                if (v[9]!=0){gotoxy(18,11);printf("%s",top1);}
                if (v[8]!=0){gotoxy(18,12);printf("%s",top2);}
                if (v[7]!=0){gotoxy(18,13);printf("%s",top3);}
                if (v[6]!=0){gotoxy(18,14);printf("%s",top4);}
                if (v[5]!=0){gotoxy(18,15);printf("%s",top5);}
            }
    else{gotoxy(18,11); printf("Aun no has escuchado ninguna cancion, prueba con una :D\n");tp0=1;}
}
void buscarcancion(){
    char c1[30],c2[30],c3[30],c4[30],c5[30],c6[30],c7[30],c8[30],c9[30],c10[30];
    char cn[30];
    int s=1,w;
    strcpy(c1,"AINT NO MOUNTAIN HIGH ENOUGH");
    strcpy(c2,"DAKITI");
    strcpy(c3,"EVER FALLEN IN LOVE");
    strcpy(c4,"HOLLYWOOD'S BLEEDING");
    strcpy(c5,"I'M STILL STANDING");
    strcpy(c6,"I'M AN ALBATROZ");
    strcpy(c7,"LOVELY");
    strcpy(c8,"PASSIONFRUIT");
    strcpy(c9,"WEST SIDE");
    strcpy(c10,"WHEREVER I GO");
    do{
        ap=2;
        system("cls");
        gotoxy(2,0);printf("\t----------BUSCAR CANCION----------\n");
        gotoxy(10,2); printf("1.- Buscar");
        gotoxy(10,3); printf("2.- Dejar de reproducir");
        gotoxy(10,4); printf("3.- Regresar al menu");
        gotoxy(10,6); scanf("%d",&w);
        fflush(stdin);
        switch(w){
        case 1:
            system("cls");
            gotoxy(10,2); printf("Inserta el nombre de la cancion usando solo mayusculas y con apostrofe\n");
            gotoxy(10,4); gets(cn);
            gotoxy(10,6); printf("Buscando...\n");
            Sleep(1000);
            if (strcmp(cn,c1)==0||strcmp(cn,c2)==0||strcmp(c3,cn)==0||strcmp(cn,c4)==0||strcmp(cn,c5)==0||strcmp(cn,c6)==0||strcmp(cn,c7)==0||strcmp(cn,c8)==0||strcmp(cn,c9)==0||strcmp(cn,c10)==0){
                    gotoxy(10,8);
                    if(strcmp(cn,c1)==0){
                    printf("En breve se reproducira: Aint no mountain high enough\n");op=1;can=1;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c2)==0){
                    printf("En breve se reproducira: Dakiti\n");op=1;can=2;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(c3,cn)==0){
                    printf("En breve se reproducira: Ever fallen in love\n");op=1;can=3;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c4)==0){
                    printf("En breve se reproducira: Hollywood's Bleeding\n");op=1;can=4;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c5)==0){
                    printf("En breve se reproducira: I'm Still Standing\n");op=1;can=5;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c6)==0){
                    printf("En breve se reproducira: I'm an albatraoz\n");op=1;can=6;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c7)==0){
                    printf("En breve se reproducira: Lovely\n");op=1;can=7;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c8)==0){
                    printf("En breve se reproducira: Passionfruit\n");op=1;can=8;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c9)==0){
                    printf("En breve se reproducira: West Side\n");op=1;can=9;
                    Sleep(1000);
                    reproducir();
                    }
                    if(strcmp(cn,c10)==0){
                    printf("En breve se reproducira: Wherever i go\n");op=1;can=10;
                    Sleep(1000);
                    reproducir();
                    }
            }
            else{
                gotoxy(10,8); printf("No se encontro tu cancion, vuelve a intentarlo");
                Sleep(2000);
            }
            break;
        case 3:
            s=0;
            gotoxy(10,8); printf("Saliendo...\n");
            Sleep(2000);
            break;
        case 2:
            PlaySound(NULL,NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            break;
        default:
            printf("\n\n\t\tLa opcion marcada es invalida, intente de nuevo");
            Sleep(2000);
            break;
        }
	}while(s==1);
}
void cancion1(){
    if(op==1){PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo Aint no mountain high enough\n\n");
    c1++;
}
void cancion2(){
    if(op==1){PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo DAKITI\n\n");
    c2++;
}
void cancion3(){
    if(op==1){PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo Ever fallen in love\n\n");
    c3++;
}
void cancion4(){
    if(op==1){PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo Hollywood's Bleeding\n\n");
    c4++;
}
void cancion5(){
    if(op==1){PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo I'm Still Standing\n\n");
    c5++;
}
void cancion6(){
    if(op==1){PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo I'm an albatraoz\n\n");
    c6++;
}
void cancion7(){
    if(op==1){PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo lovely\n\n");
    c7++;
}
void cancion8(){
    if(op==1){PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo Passionfruit\n\n");
    c8++;
}
void cancion9(){
    if(op==1){PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo West Side\n\n");
    c9++;
}
void cancion10(){
    if(op==1){PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);}
    else{PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_ASYNC);}
    gotoxy(10,2); printf("\tReproduciendo Wherever i go\n\n");
    c10++;
}
void reproducir(){
    int s=1,w,u,pl,pll;
    do{
    ap=3;
    sumplay=play1+play2+play3+play4+play5+play6+play7+play8+play9+play10;
    apagar();
    system("cls");
    if(op==1){
            u=1;
            if(can==1){cancion1();}
            if(can==2){cancion2();}
            if(can==3){cancion3();}
            if(can==4){cancion4();}
            if(can==5){cancion5();}
            if(can==6){cancion6();}
            if(can==7){cancion7();}
            if(can==8){cancion8();}
            if(can==9){cancion9();}
            if(can==10){cancion10();}
        }
    if(op==2){
            u=2;
            if(can==0)
            {can=10;}
            if(can==11)
            {can=1;}
            if(can==1){cancion1();}
            if(can==2){cancion2();}
            if(can==3){cancion3();}
            if(can==4){cancion4();}
            if(can==5){cancion5();}
            if(can==6){cancion6();}
            if(can==7){cancion7();}
            if(can==8){cancion8();}
            if(can==9){cancion9();}
            if(can==10){cancion10();}
        }
    if(op==3){
            u=3;
            if(can==1){if(play1==1){pl=1;}}
            if(can==2){if(play1==0&&play2==1){pl=2;}}
            if(can==3){if(play1==0&&play2==0&&play3==1){pl=3;}}
            if(can==4){if(play1==0&&play2==0&&play3==0&&play4==1){pl=4;}}
            if(can==5){if(play1==0&&play2==0&&play3==0&&play4==0&&play5==1){pl=5;}}
            if(can==6){if(play1==0&&play2==0&&play3==0&&play4==0&&play5==0&&play6==1){pl=6;}}
            if(can==7){if(play1==0&&play2==0&&play3==0&&play4==0&&play5==0&&play6==0&&play7==1){pl=7;}}
            if(can==8){if(play1==0&&play2==0&&play3==0&&play4==0&&play5==0&&play6==0&&play7==0&&play8==1){pl=8;}}
            if(can==9){if(play1==0&&play2==0&&play3==0&&play4==0&&play5==0&&play6==0&&play7==0&&play8==0&&play9==1){pl=9;}}
            if(can==10){if(play1==0&&play2==0&&play3==0&&play4==0&&play5==0&&play6==0&&play7==0&&play8==0&&play9==0&&play10==1){pl=10;}}

            if(can==1){if(play1==1){cancion1();}  if(play1==0){can++;}}
            if(can==2){if(play2==1){cancion2();}  if(play2==0){can++;}}
            if(can==3){if(play3==1){cancion3();}  if(play3==0){can++;}}
            if(can==4){if(play4==1){cancion4();}  if(play4==0){can++;}}
            if(can==5){if(play5==1){cancion5();}  if(play5==0){can++;}}
            if(can==6){if(play6==1){cancion6();}  if(play6==0){can++;}}
            if(can==7){if(play7==1){cancion7();}  if(play7==0){can++;}}
            if(can==8){if(play8==1){cancion8();}  if(play8==0){can++;}}
            if(can==9){if(play9==1){cancion9();}  if(play9==0){can++;}}
            if(can==10){if(play10==1){cancion10();}  if(play10==0){can++;}}

            if(can==10){if(play10==1){pll=11;}}
            if(can==9){if(play10==0&&play9==1){pll=10;}}
            if(can==8){if(play10==0&&play9==0&&play8==1){pll=9;}}
            if(can==7){if(play10==0&&play9==0&&play8==0&&play7==1){pll=8;}}
            if(can==6){if(play10==0&&play9==0&&play8==0&&play7==0&&play6==1){pll=7;}}
            if(can==5){if(play10==0&&play9==0&&play8==0&&play7==0&&play6==0&&play5==1){pll=6;}}
            if(can==4){if(play10==0&&play9==0&&play8==0&&play7==0&&play6==0&&play5==0&&play4==1){pll=5;}}
            if(can==3){if(play10==0&&play9==0&&play8==0&&play7==0&&play6==0&&play5==0&&play4==0&&play3==1){pll=4;}}
            if(can==2){if(play10==0&&play9==0&&play8==0&&play7==0&&play6==0&&play5==0&&play4==0&&play3==0&&play2==1){pll=3;}}
            if(can==1){if(play10==0&&play9==0&&play8==0&&play7==0&&play6==0&&play5==0&&play4==0&&play3==0&&play2==0&&play1==1){pll=2;}}
           }

    gotoxy(10,5);   if(play1==0){if(can==1){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==1){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play2==0){if(can==2){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==2){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play3==0){if(can==3){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==3){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play4==0){if(can==4){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==4){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play5==0){if(can==5){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==5){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play6==0){if(can==6){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==6){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play7==0){if(can==7){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==7){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play8==0){if(can==8){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==8){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play9==0){if(can==9){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==9){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
                    if(play10==0){if(can==10){printf("1     AGREGAR CANCION A LA PLAYLIST");}}  else{if(can==10){printf("1     QUITAR CANCION DE LA PLAYLIST");}}
    can++;
    gotoxy(10,6); printf("2     REINICIAR CANCION");
    gotoxy(10,7); printf("3     SALIR Y QUITAR CANCION");
    if(op==1){}
    else {gotoxy(10,8); printf("4     SIGUIENTE CANCION");}
    if(op==1){gotoxy(10,8); printf("4     SALIR");}  else{gotoxy(10,9); printf("5     SALIR");}

    if(op==1){gotoxy(10,10); scanf("%d",&w);} else{gotoxy(10,11); scanf("%d",&w);}
    if(op==1&&w==5){w=6;}
    if(op==1&&w==4){w=5;}

    switch (w){
        case 1:
            can=can-1;

           if(play1==0) {if(can==1){play1=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==1){play1=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play2==0) {if(can==2){play2=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==2){play2=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play3==0) {if(can==3){play3=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==3){play3=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play4==0) {if(can==4){play4=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==4){play4=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play5==0) {if(can==5){play5=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==5){play5=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play6==0) {if(can==6){play6=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==6){play6=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play7==0) {if(can==7){play7=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==7){play7=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play8==0) {if(can==8){play8=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==8){play8=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play9==0) {if(can==9){play9=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==9){play9=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
           if(play10==0) {if(can==10){play10=1; printf("\n\n\t\tLa cancion se ha agregado a la playlist\n");}}  else{if(can==10){play10=0; printf("\n\n\t\tLa cancion se ha quitado de la playlist\n");}}
            Sleep(2000);
            sumplay=play1+play2+play3+play4+play5+play6+play7+play8+play9+play10;
            if(op==3){
                if(sumplay==0)
                    {PlaySound(NULL,NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
                    system("cls");
                    main();}
            }
            break;
        case 2:
            can=can-1;
            break;
        case 3:
            PlaySound(NULL,NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            printf("\n\n\t\tSALIENDO...\n");
            s=0;
            system("cls");
            break;
        case 4:
            if(op==1){
                printf("\n\n\t\tOPCION INVALIDA, VUELVA A INTENTARLO\n");
                Sleep(1000);
                system("cls");}
            if(op==3){
                if(can==pll)  {can=pl;}}
            else{}
            break;
        case 5:
            printf("\n\n\t\tSALIENDO...\n");
            s=0;
            Sleep(1000);
            system("cls");
            break;
        default:
            printf("\n\n\t\tOPCION INVALIDA, VUELVA A INTENTARLO\n");
            Sleep(1000);
            can=can-1;
            system("cls");
            break;
    }}
    while(s==1);
}
void lista(){
    char w,y=2;
	int s=1;
	do{
        system("cls");
    ap=2;
    apagar();
            gotoxy(2,0);printf("\t----------CANCIONES DISPONIBLES----------\n");
            gotoxy(10,2); printf("Aint no mountain high enough");
            gotoxy(10,3); printf("Dakiti");
            gotoxy(10,4); printf("Ever fallen in love");
            gotoxy(10,5); printf("Hollywood's Bleeding");
            gotoxy(10,6); printf("I'm Still Standing");
            gotoxy(10,7); printf("I'm an albatraoz");
            gotoxy(10,8); printf("Lovely");
            gotoxy(10,9); printf("Passionfruit");
            gotoxy(10,10); printf("West Side");
            gotoxy(10,11); printf("Wherever i go");
            gotoxy(10,13); printf("SALIR");
            gotoxy(10,15); printf("DEJAR DE REPRODUCIR");
            gotoxy(0,y);  printf("   -->");
            w=getch();
        if(w==72 || w==80){
            gotoxy(0,y);printf("    ");
            if(w==72){y=y-1;}
            if(w==80){y=y+1;}
            if(y<2){y=15;}
            else if(y>15){y=2;}
        }
        gotoxy(0,y);printf("   -->");
        if(w==13){
            system("cls");
            switch (y){
                case 2:
                    printf("Aint no mountain high enough\n");op=2;can=1;
                    reproducir();
                    break;
                case 3:
                    printf("Dakiti\n");op=2;can=2;
                    reproducir();
                    break;
                case 4:
                    printf("Ever fallen in love\n");op=2;can=3;
                    reproducir();
                    break;
                case 5:
                    printf("Hollywood's Bleeding\n");op=2;can=4;
                    reproducir();
                    break;
                case 6:
                    printf("I'm Still Standing\n");op=2;can=5;
                    reproducir();
                    break;
                case 7:
                    printf("I'm an albatraoz\n");op=2;can=6;
                    reproducir();
                    break;
                case 8:
                    printf("Lovely\n");op=2;can=7;
                    reproducir();
                    break;
                case 9:
                    printf("Passionfruit\n");op=2;can=8;
                    reproducir();
                    break;
                case 10:
                    printf("West Side\n");op=2;can=9;
                    reproducir();
                    break;
                case 11:
                    printf("Wherever i go\n");op=2;can=10;
                    reproducir();
                    break;
                case 13:
                    printf("\n\n\t\tREGRESANDO AL MENU...\n");
                    s=0;
                    Sleep(3000);
                    system("cls");
                    break;
                case 15:
                    PlaySound(NULL,NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
                    break;
				}
            }
	}while(s==1);
}
void playlist(){
    char w;
	int y=2,s=1;
    sumplay=play1+play2+play3+play4+play5+play6+play7+play8+play9+play10;
	if(sumplay==0)
    {
        gotoxy(2,0);printf("\t----------CANCIONES DE LA PLAYLIST----------\n");
        gotoxy(2,2);printf("\tVaya! Aun no hay canciones en tu playlist\n");
        gotoxy(2,3);printf("\tA%cade unas cuantas y vuelve pronto! :D\n",164);
        Sleep(4000);
    }
    else{
        do{
            system("cls");
            ap=2; yplay=0;
            apagar();
            gotoxy(2,0);printf("\t----------CANCIONES DE LA PLAYLIST----------\n");
            if(play1==1){yplay++; gotoxy(10,1+yplay); o1=1+yplay; printf("Aint no mountain high enough");}
            if(play2==1){yplay++; gotoxy(10,1+yplay); o2=1+yplay; printf("Dakiti");}
            if(play3==1){yplay++; gotoxy(10,1+yplay); o3=1+yplay; printf("Ever fallen in love");}
            if(play4==1){yplay++; gotoxy(10,1+yplay); o4=1+yplay; printf("Hollywood's Bleeding");}
            if(play5==1){yplay++; gotoxy(10,1+yplay); o5=1+yplay; printf("I'm Still Standing");}
            if(play6==1){yplay++; gotoxy(10,1+yplay); o6=1+yplay; printf("I'm an albatraoz");}
            if(play7==1){yplay++; gotoxy(10,1+yplay); o7=1+yplay; printf("Lovely");}
            if(play8==1){yplay++; gotoxy(10,1+yplay); o8=1+yplay; printf("Passionfruit");}
            if(play9==1){yplay++; gotoxy(10,1+yplay); o9=1+yplay; printf("West Side");}
            if(play10==1){yplay++; gotoxy(10,1+yplay); o10=1+yplay; printf("Wherever i go");}
                gotoxy(10,3+yplay); printf("SALIR");
                gotoxy(10,5+yplay); printf("DEJAR DE REPRODUCIR");
                os=3+yplay; or=5+yplay;
                gotoxy(0,y);  printf("   -->");
                w=getch();
            if(w==72 || w==80){
                gotoxy(0,y);printf("    ");
                if(w==72){y=y-1;}
                if(w==80){y=y+1;}
                if(y<2){y=5+yplay;}
                else if(y>(5+yplay)){y=2;}
            }
            gotoxy(0,y);printf("   -->");
            if(w==13){
                system("cls");
                    if(y==o1){
                    printf("Aint no mountain high enough\n");op=3;can=1;
                    reproducir();
                    }
                    if(y==o2){
                    printf("Dakiti\n");op=3;can=2;
                    reproducir();
                    }
                    if(y==o3){
                    printf("Ever fallen in love\n");op=3;can=3;
                    reproducir();
                    }
                    if(y==o4){
                    printf("Hollywood's Bleeding\n");op=3;can=4;
                    reproducir();
                    }
                    if(y==o5){
                    printf("I'm Still Standing\n");op=3;can=5;
                    reproducir();
                    }
                    if(y==o6){
                    printf("I'm an albatraoz\n");op=3;can=6;
                    reproducir();
                    }
                    if(y==o7){
                    printf("Lovely\n");op=3;can=7;
                    reproducir();
                    }
                    if(y==o8){
                    printf("Passionfruit\n");op=3;can=8;
                    reproducir();
                    }
                    if(y==o9){
                    printf("West Side\n");op=3;can=9;
                    reproducir();
                    }
                    if(y==o10){
                    printf("Wherever i go\n");op=3;can=10;
                    reproducir();
                    }
                    if(y==os){
                    printf("\n\n\t\tREGRESANDO AL MENU...\n");
                    s=0;
                    Sleep(3000);
                    system("cls");
                    }
                    if(y==or){
                    PlaySound(NULL,NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
                    }
            }
        }while(s==1);
    }
}
void apagar(){
    if(ap==1){
        gotoxy(10,12);}
    if(ap==2){
        gotoxy(10,15);}
    if(ap==3){
        gotoxy(10,6);}
}
int main(){
	char w;
	int y=6,s=1;
	do{
        system("cls");
        top();
        ap=1;
        apagar();
        gotoxy(15,0);printf("----------MINIPROYECTO SPOTIFY----------\n");
        gotoxy(5,2); printf("-USA LAS FLECHAS DE TU TECLADO PARA MOVERTE EN LOS MENUS CON FLECHA DE SELECCION");
        gotoxy(5,3); printf("-USA LOS NUMEROS DE TU TECLADO PARA INDICAR LA OPCION EN LOS MENUS CON NUMEROS");
        gotoxy(5,4); printf("-PULSA ENTER PARA SELECCIONAR LA OPCION DESEADA EN CUALQUIER MENU");
        gotoxy(10,6); printf("BUSCAR CANCION");
        gotoxy(10,7); printf("LISTA DE CANCIONES");
        gotoxy(10,8); printf("PLAYLIST");
        gotoxy(16,10); printf("CANCIONES MAS REPRODUCIDAS:");
        gotoxy(10,17); printf("SALIR");
        gotoxy(10,18); printf("DEJAR DE REPRODUCIR");
        gotoxy(0,y);  printf("   -->");
        w=getch();
        if(w==72 || w==80){
            gotoxy(0,y);printf("    ");
            if(w==72){y=y-1;}
            if(w==80){y=y+1;}
            if(y<6){y=18;}
            else if(y>18){y=6;}
        }
        gotoxy(0,y);printf("   -->");
        if(w==13){
            system("cls");
            switch (y){
                case 6:
                    buscarcancion();
                    break;
                case 7:
                    lista();
                    break;
                case 8:
                    playlist();
                    break;
                case 11:
                    if(v[9]!=0){
                        if(tp1==1){PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_ASYNC);c1++;}
                        if(tp1==2){PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_ASYNC);c2++;}
                        if(tp1==3){PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_ASYNC);c3++;}
                        if(tp1==4){PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_ASYNC);c4++;}
                        if(tp1==5){PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_ASYNC);c5++;}
                        if(tp1==6){PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_ASYNC);c6++;}
                        if(tp1==7){PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_ASYNC);c7++;}
                        if(tp1==8){PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_ASYNC);c8++;}
                        if(tp1==9){PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_ASYNC);c9++;}
                        if(tp1==10){PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_ASYNC);c10++;}
                    }
                    break;
                case 12:
                    if(v[8]!=0){
                        if(tp2==1){PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_ASYNC);c1++;}
                        if(tp2==2){PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_ASYNC);c2++;}
                        if(tp2==3){PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_ASYNC);c3++;}
                        if(tp2==4){PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_ASYNC);c4++;}
                        if(tp2==5){PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_ASYNC);c5++;}
                        if(tp2==6){PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_ASYNC);c6++;}
                        if(tp2==7){PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_ASYNC);c7++;}
                        if(tp2==8){PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_ASYNC);c8++;}
                        if(tp2==9){PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_ASYNC);c9++;}
                        if(tp2==10){PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_ASYNC);c10++;}
                    }
                    break;
                case 13:
                    if(v[7]!=0){
                        if(tp3==1){PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_ASYNC);c1++;}
                        if(tp3==2){PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_ASYNC);c2++;}
                        if(tp3==3){PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_ASYNC);c3++;}
                        if(tp3==4){PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_ASYNC);c4++;}
                        if(tp3==5){PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_ASYNC);c5++;}
                        if(tp3==6){PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_ASYNC);c6++;}
                        if(tp3==7){PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_ASYNC);c7++;}
                        if(tp3==8){PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_ASYNC);c8++;}
                        if(tp3==9){PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_ASYNC);c9++;}
                        if(tp3==10){PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_ASYNC);c10++;}
                    }
                    break;
                case 14:
                    if(v[6]!=0){
                        if(tp4==1){PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_ASYNC);c1++;}
                        if(tp4==2){PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_ASYNC);c2++;}
                        if(tp4==3){PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_ASYNC);c3++;}
                        if(tp4==4){PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_ASYNC);c4++;}
                        if(tp4==5){PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_ASYNC);c5++;}
                        if(tp4==6){PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_ASYNC);c6++;}
                        if(tp4==7){PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_ASYNC);c7++;}
                        if(tp4==8){PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_ASYNC);c8++;}
                        if(tp4==9){PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_ASYNC);c9++;}
                        if(tp4==10){PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_ASYNC);c10++;}
                    }
                    break;
                case 15:
                    if(v[5]!=0){
                        if(tp5==1){PlaySound("1.- Aint no mountain high enough.wav",NULL,SND_FILENAME|SND_ASYNC);c1++;}
                        if(tp5==2){PlaySound("2.- Dakiti.wav",NULL,SND_FILENAME|SND_ASYNC);c2++;}
                        if(tp5==3){PlaySound("3.- Ever fallen in love.wav",NULL,SND_FILENAME|SND_ASYNC);c3++;}
                        if(tp5==4){PlaySound("4.- Hollywood's Bleeding.wav",NULL,SND_FILENAME|SND_ASYNC);c4++;}
                        if(tp5==5){PlaySound("5.- I'm Still Standing.wav",NULL,SND_FILENAME|SND_ASYNC);c5++;}
                        if(tp5==6){PlaySound("6.- I'm an albatraoz.wav",NULL,SND_FILENAME|SND_ASYNC);c6++;}
                        if(tp5==7){PlaySound("7.- Lovely.wav",NULL,SND_FILENAME|SND_ASYNC);c7++;}
                        if(tp5==8){PlaySound("8.- Passionfruit.wav",NULL,SND_FILENAME|SND_ASYNC);c8++;}
                        if(tp5==9){PlaySound("9.- West Side.wav",NULL,SND_FILENAME|SND_ASYNC);c9++;}
                        if(tp5==10){PlaySound("10.- Wherever i go.wav",NULL,SND_FILENAME|SND_ASYNC);c10++;}
                    }
                    break;
                case 17:
                    printf("\n\n\t\tSALIENDO...\n");
                    Sleep(2000);
                    return (0);
                    break;
                case 18:
                    PlaySound(NULL,NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
                    break;
				}
            }
	}while(s==1);
	return 0;
}
