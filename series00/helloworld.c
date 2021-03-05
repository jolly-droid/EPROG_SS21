#include <stdio.h>

int mai() {
    printf("Hello, World!\n");
    return 0;
}

//semicolon in zeile 5 weg - fehlermedlung, da zeile nicht abgeschlossen,
//compiler fehler
//int in Zeile weg - es funktioniert, da uns compiler hilft
//zeile #include -  printf funktioniert nicht mehr
//zeile return 0 weg - fehlermedleung, main func benötigt bei int einen returntypen
// \n weglassen - alles wird in einer Zeile geprintet