#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int Char_count(char str[]){
    int count=0;
    while(str[count]!='\n'){
      //printf("%d  %c\n",count,str[count] );
      count++;
    }
    return count+1;
  }
  void IRow(char before[], char Delim){
    int r=atoi(before);
    printf("%d\n",r );
    int col=0;
    int row=0;
    int Cur_c;

      while (1) {
        Cur_c=getchar();    //načti následující symbol
        if (Cur_c==Delim) { // pokud jde o symbol dělící buňky, přičti 1 k pořadídníku sloupce
          col++;
        }
        if (Cur_c=='\n') {  // pokud jde o symbol dělící řádky, přičti 1 k pořadídníku řádku
          row++;
          //printf("\n%d %d %d\n",row,r, row-r );
          if (row==r-1) {  // pokud jde o symbol dělící řádky a zároveň jsme již před pozicí r
            putchar('\n');  //vytvoř nový řádek
            for (int a = 0; a <= col; a++) {
              putchar(Delim); // a vlož do něj tolik buněk, kolib bylo v předchozím sloupců
            }
          }
          col=0;
        }
        putchar(Cur_c);    //vypyš načtený symbol
        if (Cur_c==EOF) {  // pokud jsme na konci souboru, ukonči funkci
          return;
        }
      }


  }
  void ARow(char Delim){
    char str[100];              // might not register last symbol
    char Cur_c;                 // právě spracovávaný symbol
    int col=0;                  // celkem sloupců v prvním řádku
    int char_count;             // celkem symbolů

    for (int i = 0; i < 100; i++) {       // max 100 krát (možná 99krát idk)
      str[i]=getchar();                   // ukládej symboly ze streamu do str[]
      if(str[i]=='\n'){break;}            // dokud nenarazíš na konce řádku
    }
    char_count=Char_count(str);  // zapiš počet symbolů v str do char_count
      for (int i = 0; i < char_count; i++) {   // dokud i není větší než počet symbolů
        Cur_c=(str[i]);                        // ulož char na pozici str[i] do Cur_c

        if (Cur_c==Delim) {col++;}             // pokud je testovaný char Delim tak přičti 1 k celkovému počtu sloupců
        if (Cur_c=='\n'){                      // pokud je testovaný char \n vypiš tolik Delimů kolik je celkem sloupců
          for (int a = 0; a <= col; a++) {
            putchar(Delim);
          }
          putchar('\n');                       // vypiš symbol konce řádku
          for (int a = 0; a < char_count; a++){   // vypiš první řádek
            putchar(str[a]);
          }
          while(1){                             // dokud nenarazíš na konec souboru, vypiš naásledující char ze streamu
            Cur_c=getchar();
            if (Cur_c == EOF) {return;}
            putchar(Cur_c);
          }
        }
      }
  }
  void DRow(char Del_r[]){
    int r=atoi(Del_r);
    printf("%d\n",r );
    int row=0;
    int Cur_c;

      while (1) {
        Cur_c=getchar();    //načti následující symbol
        if (Cur_c=='\n') {  // pokud jde o symbol dělící řádky, přičti 1 k pořadídníku řádku
          row++;
          //printf("\n%d %d %d\n",row,r, row-r );
        }
        if (row==r-1) {  // pokud jsme již před pozicí r
          row++;
          if(Cur_c=='\n'){putchar(Cur_c);Cur_c=5;}
          while (Cur_c!='\n') {  //čti ze streamu dokud nepřečteš symbol \n
            if(Cur_c==EOF){return;}
            Cur_c=getchar();
            //printf("%d  %d  %c\n",row, r-1, Cur_c);
          }
          if(r!=1){Cur_c=getchar();}
        }
        putchar(Cur_c);    //vypyš načtený symbol
        if (Cur_c==EOF) {  // pokud jsme na konci souboru, ukonči funkci
          return;
        }
      }


  }

  void Write(char Cell[]){
    int CellLength = strlen(Cell);
    for (int i = 0; i < CellLength; i++) {
      putchar(Cell[i]);
    }
  }

int main(int argc,char *argv[]) {
  argc=argc;
  char Delim=argv[1][0];
  //char str[100];
  //int c=argc; //obejití překladače
  //int RowCount=0;

  if      (strcmp(argv[2],"irow") == 0) {IRow ( argv[3], Delim) ;}
  else if (strcmp(argv[2],"arow") == 0) {ARow (Delim ) ;}
  else if (strcmp(argv[2],"drow") == 0) {DRow (argv[3]) ;}
/*
irow R - vloží řádek tabulky před řádek R > 0 (insert-row).                                               DONE
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
