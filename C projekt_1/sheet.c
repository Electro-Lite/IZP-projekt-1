#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  void IRow(char before[]){
    int r=atoi(before);
    printf("%d\n",r );


  }
  void Write(char Cell[]){
    int CellLength = strlen(Cell);
    for (int i = 0; i < CellLength; i++) {
      putchar(Cell[i]);
    }
  }

int main(int argc,char *argv[]) {
  argc=argc;
  //char Delim=argv[2][0];
  //char str[100];
  //int c=argc; //obejití překladače
  //int RowCount=0;

  if (strcmp(argv[1],"irow") == 0) {IRow ( argv[2] ) ;}
/*
irow R - vloží řádek tabulky před řádek R > 0 (insert-row).
arow - přidá nový řádek tabulky na konec tabulky (append-row).
drow R - odstraní řádek číslo R > 0 (delete-row).
drows N M - odstraní řádky N až M (N <= M). V případě N=M se příkaz chová stejně jako drow N.
icol C - vloží prázdný sloupec před sloupec daný číslem C.
acol - přidá prázdný sloupec za poslední sloupec.
dcol C - odstraní sloupec číslo C.
dcols N M - odstraní sloupce N až M (N <= M). V případě N=M se příkaz chová stejně jako dcol N.
*/




  return 0;
}
