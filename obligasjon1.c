/**
 *   
 *
 *   @file     Oblig1
 *   @author   Lennart Krogh
 */

#include <ctype.h>      //  
#include <stdio.h>      //  printf, scanf
#include <string.h>     //  har-arrayer/tekster/strenger

#define STRLEN 40       ///<hvor lang tenkst får lov til å være
#define ANTDAGER 31     ///< atnall dager programmet skal kjøre
/**
 * 
 * Programmet starter :)
 * 
 */
int main () {
    char skoleNavn[STRLEN]; //for ikke vare mer enn40
    int antallTestede[ANTDAGER], antallSmittede[ANTDAGER], //31 dager
    sumAntallTestede, sumAntallSmittede; //denne skal jeg bruke senere
                                        //da jeg sakl finne regne med snitt osv

//testede
    antallTestede[0]=30;    //dag 1
    antallTestede[1]=50;    //dag 2
 //smittede
    antallSmittede[0] = 2;  //dag 1
    antallSmittede[1] = 10; //dag 2
 
    printf("Skriv inn hvilken skole: "); gets(skoleNavn);//alt i en kodelinje ;)
                    //Det de skriver inn kan kun være 40char lang
                    //Gets kan ha mellomrom (noe vi må ha)


    printf("\nNanv paa skole: -%s- \n", skoleNavn);
                        //skriver ut navnet, har med -- så det i et eksempel..

    printf("Hvor mange nye testede dag 3: ");
    scanf("%i", &antallTestede[2]); //skriver ut hvor mange testede, 
                            //Bruker "&"slik at den forstår at det er et tall
                            //Scanf, jeg vil at dataene skal bli lagret som tall

    printf("Hvor mange ble smittet dag 3: ");
    scanf("%i", &antallSmittede[2]); //samme, bare med smittede

    printf("skole: %s \n", skoleNavn);
    printf("Dag 1:  %i, %i \n", antallTestede[0], antallSmittede[0]);
    printf("Dag 2:  %i, %i \n", antallTestede[1], antallSmittede[1]);
    printf("Dag 3:  %i, %i \n\n\n", antallTestede[2], antallSmittede[2]);  
                    //^^Her har vi skrevet ut all dataen brukeren har
                    //skrevet inn 

sumAntallTestede= antallTestede[0]+ antallTestede[1] + antallTestede[2];
                    //^^regning og sånt..
    printf("Totalt antall testede:  %i\n", sumAntallTestede );

sumAntallSmittede = antallSmittede[0] + antallSmittede[1] + antallSmittede[2];
                    //^^regner ut antall smittede
    printf("Totalt antall smittede: %i", sumAntallSmittede);
                    
    printf("\nSnittprosent ligger paa:    %f ", 
    (float)sumAntallSmittede / sumAntallTestede *100);
                    //her deler jeg tallene vi nettopp fant og 
                    //ganger med 100 (for å få prosent)
                    //Float er for å få desimaler
    return 0;
}