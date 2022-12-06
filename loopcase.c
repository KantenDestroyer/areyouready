//das ist alles was ich benutze fuer das code
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <windows.h>
/*
    Martin Oleschuk
    02.12.2022
    Teste ich ein algoritmos, weil ich eine Spiel gespielt habe und gefragt habe "koennte ich das auch machen, aber wie wuerde ich das spiel Coden". Und mache ein mit 6 "Chaptern".
    update ich habe daraus ein lustiges spiel gemacht, was dir aber nur ein Ende gibt, weil ich einfach kein bock habe auf was anderes und faul bin :=).
*/
//hier setze ich ein paar Globalen Variablen damit ich nicht fuer jede nachfragen, eine Variable Deklalieren soll.
int i;
int gay;
char getname[300];

//hier erstelle ich die einstellungen fuer das Fenster
void getsettings(){
    SetConsoleTitle("Are you ready?");
}

//hier schreibe ich eine methode wo ich einfach nach dem name frage
void name(){
        printf("\nGib mal erstmal dein Name hier ein:");
        fgets(getname, 300, stdin);
        fflush(stdin);
    }

//hier erstelle die methoden fuer die verschiedene Chaptern (es sind 5 Chaptern).
    void chapter0(){
        printf("\nDu bist gerade im Chapter 1 \nare you gay?\n[1 for yes, 0 for no]\n");
        scanf("%i", &gay);
        fflush(stdin);
        if(gay == 0){ 
            printf("\nOkay!");
        }else{
            i = -2;
        }
        printf("\nleider musst du paar sekunden warten");
        sleep(3);
        system("cls");
    }
    void chapter1(){
        printf("\nDu bist gerade im Chapter 2\ndo you had sex?\n[1 for yes, 0 for no]\n");
        scanf("%i", &gay);
        fflush(stdin);
        if(gay == 1){ 
            printf("\nOkay!");
        }else{
            i = -2;
        }
        sleep(2);
        printf("\nleider musst du paar sekunden warten");
        sleep(3);
        system("cls");
    }
    void chapter2(){
        printf("\nDu bist gerade im Chapter 3\nhad a date with a Girl?\n[1 for yes, 0 for no]\n");
        scanf("%i", &gay);
        fflush(stdin);
        if(gay == 1){ 
            printf("\nOkay!");
        }else{
            i = -2;
        }
        sleep(2);
        printf("\nleider musst du paar sekunden warten");
        sleep(3);
        system("cls");
    }
    void chapter3(){
        printf("\nDu bist gerade im Chapter 4\ndid you kissed ever a girl expect your mom?\n[1 for yes, 0 for no]\n");
        scanf("%i", &gay);
        fflush(stdin);
        if(gay == 1){ 
            printf("\nOkay!");
        }else{
            i = -2;
        }
        sleep(2);
        printf("\nleider musst du paar sekunden warten");
        sleep(3);
        system("cls");
    }
    void chapter4(){
        printf("\nDu bist gerade im Chapter 5\ndo you have Money?\n[1 for yes, 0 for no]\n");
        scanf("%i", &gay);
        fflush(stdin);
        if(gay == 1){ 
            printf("\nOkay!");
        }else{
            i = -2;
        }   
        sleep(2);
        printf("\n\nleider musst du paar sekunden warten");
        sleep(3);
        system("cls");
    }

//hier habe eine Verloren methode eingebaut wenn was passiert stirbt man direkt.
    void los(){
        printf("\nyou are to bad!\n\n");
        sleep(5);
    }

//main methode wo der code sich ausfuert
    int main(){
        //hier rufe die methode auf wo ich die fenster einstellung aufrufe
            getsettings();
        //hier rufe die methode auf wo ich dem Name frage
            name();
        //hier mache eine for loop, weil ich die Chaptern nach einandern durchlaufen lasse.
            for(i = 0; i <= 6 ; ++i)
            {
                switch(i){
                    case 0:
                        chapter0();
                    break;
                    case 1:
                        chapter1();
                    break;
                    case 2:
                        chapter2();
                    break;
                    case 3:
                        chapter3();
                    break;
                    case 4: 
                        chapter4();
                    break;
                    case -1:
                        los();
                        return 0;
                    break;
                }
            }
        //ergebnis von alles
            printf("\n\nyou can be happy, you can have bitches %s\n", getname);
        //hier setze es damit das programm nicht direkt schließt
            system("pause");
            return 0;    
    }