#include <stdio.h>

void Aufgabe3() {

    int zahl;  

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf_s("%d", &zahl);
    printf("Die eingegebene Zahl ist: %d\n", zahl);

    return 0;
}

void Aufgabe4() {
    printf("Um diesen Text ausgeben zu koennen, muss ich das Escape Zeichen\\ verwenden und nach diesem Zeichen, die richtige Anweisung.\n");
    return 0;
}

void Aufgabe56() {
    int zahl;


    printf("Bitte eine Zahl eingeben: ");
    scanf_s("%d", &zahl);

    if (zahl > 99) {
        if (zahl > 200) {
            printf("Eingegebene Zahl ist größer als 200\n");
        }
        else {
            printf("Eingegebene Zahl liegt zwischen 100 und 200\n");
        }
    }
    else {
        printf("Zahl ist kleiner als 100\n");
    }

    return 0;
}

void Aufgabe789() {
    float laenge, breite, umfang, flaeche;


    printf("Bitte die Länge des Rechtecks eingeben: ");
    scanf_s("%f", &laenge);
    printf("Bitte die Breite des Rechtecks eingeben: ");
    scanf_s("%f", &breite);

    umfang = 2 * (laenge + breite);

    flaeche = laenge * breite;

    printf("Der Umfang des Rechtecks beträgt: %.2f\n", umfang);
    printf("Die Fläche des Rechtecks beträgt: %.2f\n", flaeche);

    return 0;
}




void Aufgabe10() {
    float seite_a, seite_b, ergebnis;
    int auswahl;

    printf("Wollen Sie die Flaeche oder den Umfang eines Rechtecks berechnen?\n");
    printf("Geben Sie '1' für Flaechenberechnung ein.\n");
    printf("Geben Sie '2' für Umfangsberechnung ein.\n");
    scanf_s("%d", &auswahl);

    printf("Geben Sie die Laenge der ersten Seite ein: ");
    scanf_s("%f", &seite_a);
    printf("Geben Sie die Laenge der zweiten Seite ein: ");
    scanf_s("%f", &seite_b);

    if (auswahl == 1) {
        ergebnis = seite_a * seite_b;
        printf("Die Flaeche des Rechtecks beträgt: %.2f\n", ergebnis);
    }
    else if (auswahl == 2) {
        ergebnis = 2 * (seite_a + seite_b);
        printf("Der Umfang des Rechtecks beträgt: %.2f\n", ergebnis);
    }
    else {
        printf("Ungültige Auswahl!\n");
    }

    return 0;
}

void Aufgabe11() {
    int punkte;

    printf("Bitte die erreichte Punktzahl eingeben (0 bis 400): ");
    scanf_s("%d", &punkte);

    if (punkte < 0 || punkte > 400) {
        printf("Ungültige Punktzahl! Bitte gib eine Zahl zwischen 0 und 400 ein.\n");
    }
    else {

        if (punkte >= 350 && punkte <= 400) {
            printf("Note: Sehr Gut\n");
        }
        else if (punkte >= 300 && punkte <= 349) {
            printf("Note: Gut\n");
        }
        else if (punkte >= 250 && punkte <= 299) {
            printf("Note: Befriedigend\n");
        }
        else if (punkte >= 200 && punkte <= 249) {
            printf("Note: Genuegend\n");
        }
        else if (punkte >= 0 && punkte <= 199) {
            printf("Note: Nicht Genügend\n");
        }
    }

    return 0;
}

void Aufgabe12() {
    for (int i = 1; i <= 25; i++) {
        printf("%d\n", i);
    }

    return 0;
}

void Aufgabe14() {
    int zahl1, zahl2, zahl3;
    long summe = 0;
    int durchgaenge = 0;


    while (summe < 1000000) {

        printf("Geben Sie drei Zahlen ein: ");
        scanf_s("%d %d %d", &zahl1, &zahl2, &zahl3);

        summe += zahl1 + zahl2 + zahl3;


        durchgaenge++;
    }


    printf("Es waren %d Schleifendurchgänge nötig, um die Summe von 1.000.000 zu erreichen.\n", durchgaenge);

    return 0;
}

void Aufgabe13() {
    int min, max;

    printf("Geben Sie das Minimum ein: ");
    scanf_s("%d", &min);
    printf("Geben Sie das Maximum ein: ");
    scanf_s("%d", &max);

    if (min <= max) {
        printf("Die Zahlen von %d bis %d sind:\n", min, max);
        for (int i = min; i <= max; i++) {
            printf("%d\n", i);
        }
    }
    else {
        printf("Das Minimum muss kleiner oder gleich dem Maximum sein.\n");
    }

    return 0;
}

void Aufgabe15() {

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {

            printf("%2d * %2d = %3d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}


#include <Windows.h> // Sleep-Funktion

void Aufgabe16() {

    for (int i = 1; i <= 15; i++) {

        printf("%d\n", i);
        Sleep(1000);
    }

    return 0;
}


void Aufgabe17() {

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0 || i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}


int main() {

    int auswahl;

    printf("wähle eine Aufgabe aus (3,4,56,789,10,11,12,13,14,15,16 oder 17):");
    scanf_s("%d", &auswahl);

    if (auswahl == 3) {
        Aufgabe3();
    }
    else if (auswahl == 4) {
        Aufgabe4();
    }
    else if (auswahl == 56) {
        Aufgabe56();
    }
    else if (auswahl == 789) {
        Aufgabe789();
    }
    else if (auswahl == 10) {
        Aufgabe10();
    }
    else if (auswahl == 11) {
        Aufgabe11();
    }
    else if (auswahl == 12) {
        Aufgabe12();
    }
    else if (auswahl == 13) {
        Aufgabe13();
    }
    else if (auswahl == 14) {
        Aufgabe14();
    }
    else if (auswahl == 15) {
        Aufgabe15();
    }
    else if (auswahl == 16) {
        Aufgabe16();
    }
    else if (auswahl == 17) {
        Aufgabe17();
    }

    return 0;

}






