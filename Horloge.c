#include <stdio.h>
    #include <time.h>

        int main() {
        while (1) {
        // Obtenir l'heure actuelle
        time_t currentTime = time(NULL);
        struct tm *localTime = localtime(&currentTime);

        // Extraire les informations d'heure, de minute et de seconde
        int hour = localTime->tm_hour;
        int minute = localTime->tm_min;
        int second = localTime->tm_sec;

        // Afficher l'heure actuelle
        printf("Heure : %02d:%02d:%02d\n", hour, minute, second);

        // Attendre une seconde avant de mettre à jour l'heure
        sleep(1);
        }

        return 0;
        }