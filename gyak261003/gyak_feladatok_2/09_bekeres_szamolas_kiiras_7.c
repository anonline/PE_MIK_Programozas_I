/*
 * 9. Bekérés – számolás – kiírás 7
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy-egy változót az alábbi típusokból:
 *   - Előjeles egész
 *   - Előjel nélküli egész
 *   - Egyszeres pontosságú lebegőpontos
 *   - Dupla pontosságú lebegőpontos
 * - Az összes lehetséges párosításban kivonja egyiket a másikból és megjeleníti az eredményt
 *   (a megfelelő típusként)
 */
#include <stdio.h>

int elojeles_beker(signed int *ertek) {
    printf("Kerem az elojeles egesz szamot: ");
    return scanf("%d", ertek) == 1;
}

int elojel_nelkul_beker(unsigned int *ertek) {
    printf("Kerem az elojel nelkuli egesz szamot: ");
    return scanf("%u", ertek) == 1;
}

int egyszeres_beker(float *ertek) {
    printf("Kerem az egyszeres pontossagu lebegopontos szamot: ");
    return scanf("%f", ertek) == 1;
}

int dupla_beker(double *ertek) {
    printf("Kerem a dupla pontossagu lebegopontos szamot: ");
    return scanf("%lf", ertek) == 1;
}

void kivonasok_kiir(signed int elojeles, unsigned int elojel_nelkul, float egyszeres, double dupla) {
    /* Az int es unsigned int muvelet eredmenye unsigned int. */
    printf("int - unsigned int: %u\n", (unsigned int)elojeles - elojel_nelkul);
    printf("int - float:        %.2f\n", (float)elojeles - egyszeres);
    printf("int - double:       %.2f\n", (double)elojeles - dupla);

    printf("unsigned int - int:    %u\n", elojel_nelkul - (unsigned int)elojeles);
    printf("unsigned int - float:  %.2f\n", (float)elojel_nelkul - egyszeres);
    printf("unsigned int - double: %.2f\n", (double)elojel_nelkul - dupla);

    printf("float - int:          %.2f\n", egyszeres - (float)elojeles);
    printf("float - unsigned int: %.2f\n", egyszeres - (float)elojel_nelkul);
    printf("float - double:       %.2f\n", (double)egyszeres - dupla);

    printf("double - int:          %.2f\n", dupla - (double)elojeles);
    printf("double - unsigned int: %.2f\n", dupla - (double)elojel_nelkul);
    printf("double - float:        %.2f\n", dupla - (double)egyszeres);
}

int main() {
    signed int elojeles;
    unsigned int elojel_nelkul;
    float egyszeres;
    double dupla;

    if (!elojeles_beker(&elojeles) ||
        !elojel_nelkul_beker(&elojel_nelkul) ||
        !egyszeres_beker(&egyszeres) ||
        !dupla_beker(&dupla)) {
        fputs("Hibas vagy hianyzo bemenet.\n", stderr);
        return 1;
    }

    kivonasok_kiir(elojeles, elojel_nelkul, egyszeres, dupla);

    return 0;
}
