#include <stdio.h>
#include <stdlib.h>


  void Write(char Cell[]){
    for (int i = 0; i < strlen(Cell); i++) {
      putchar(Cell[i]);
    }


  }

int main(int argc,char *argv[]) {
  char Delim=argv[2][0];
  char str[100];
  int c=argc; //obejití překladače
  int RowCount=0;

  for (int q=0; q<5 ; q++) { //načtení řádku
    printf("%d\n",q );
    fgets(str, 100,stdin);
    int Column=1;

    for (int i = 0; i < 100; i++) { //spočítej sloupce a řádky a zkontroluj konec souboru
      if (str[i]==EOF) {return 0;} //hlídej konec
      if (str[i]==Delim) {Column++;}
      if (str[i]=='\n') {RowCount++;break;} //ukonči kontrolu řádku
    }

    char Cells[Column][50];

    c=0;
    for (int i = 0; i < Column; i++) { //pro každý sloupec
      printf("%d\n",c );
      while (str[c]!='\n') { //dokud nejsi na konci řádku
        c++;
        Cells[i][c]=str[c];  //načti symbol c do řádku i=buňky
        printf("%c",Cells[i][c]);
        if (str[c]==Delim) {printf("[]");}
      }
    }
  }
  return 0;
}
