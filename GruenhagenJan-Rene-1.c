//Programmname: GruenhagenJan-Rene-1

/*
Was tut es?

Schreiben Sie ein personalisiertes C-Programm, das folgende Grundelemente von \
C benutzt:
- Formatierte Ausgabe unter der Verwendung von Kontrollzeichen auf die \
Konsole mit printf( ).
- Berechnen Sie einen Integer-Wert oder mehrere Integer-Werte nach einer \
beliebigen Rechenvorschrift in einer Funktion oder mehreren Funktionen und \
geben Sie den Wert aus. Umrundet wird der Wert von einem personalisierten
Text, der möglichst originell ist (also zweifelsfrei von ihnen stammt).
- Fügen Sie einen Kommentar ein, der angibt von wem das Programm stammt \
und mit wem Sie das Lerntandem gebildet haben.
- Fügen Sie einen speziellen Kommentar ein, der angibt, welche Schlüsselworte \
in Ihrem Programm verwendet wurden
*/

//Ersteller: Jan-René Grünhagen

/*
Schluesselwoerter:
int
return
void
*/

//Dreamteam: Bisher keiner.

#include <stdio.h>

//sum addiert zwei Werte
int sum(int,int);
int main(void)
{
    int a,b;
    printf("Das \t ist \t eine \t tabelle \n");
    printf("%d",ausgabe());
    printf("%d \n",sum(5,7));
    printf("Wie ist die erste Zahl? ");
    scanf("%d",&a);
    printf("Wie ist die zweite Zahl? ");
    scanf("%d",&b);
    printf("Die addition aus den Zahlen ist: %d", sum(a,b));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

//Gibt einen eeeewig langen Text aus um die Rechnung von 5 und 7 zu bestimmen.
int ausgabe(void)
{
    printf("Das zweifelsfreie Ergebnis, welches sich auf die Summe  aus Fuenf " \
           "und Sieben besteht kann nur ultimativ durch dessen Addition " \
           "festgestellt werden und wird nun durch diese neumodische " \
           "Rechenmaschine verkuendet: ");
    return 0;
}
