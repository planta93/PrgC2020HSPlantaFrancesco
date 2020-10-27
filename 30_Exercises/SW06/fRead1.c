#include <stdio.h>
#include <stdlib.h>
 
struct data {
  int nummer;
  int daten;
};
 
int main (void)
{
  FILE *datei = fopen ("meinedatei.bin","rb");
  struct data Daten[3];
  unsigned int ret = 0;
 
  ret = fread (Daten, sizeof(struct data), 3, datei);
 
  printf("%d\n", ret);
  if (ret != 3) 
    printf ("Hupps, ein Fehler...\n");
  else 
    printf ("Erfolgreich gelesen!\n");
 
  fclose (datei);
  return EXIT_SUCCESS;
}
