/*Vytvoř prgogram, který načte ze souboru tabulku, umožní její úpravu i tvoření nových tabulek pomocí součtu dvou zadaných adt. podobně jako u mysql */
/*Body zadání
čtení souboru
zápis do buněk
přidávání a dodebírání sloupců a řádků
*/
#include <stdio.h>

#define MAXCHAR 1000
int main() {
    FILE *Sheet;
    char str[MAXCHAR];
    char* FilePath = "C:\\Users\\Electro\\Desktop\\sheet.txt";

    sheet = fopen(FilePath, "r");
    if (sheet == NULL){
        printf("Could not open file %s",FilePath);
        return 1;
    }
    while (fgets(str, MAXCHAR, sheet) != NULL)
        printf("%s", str);
    fclose(sheet);
    return 0;
}
