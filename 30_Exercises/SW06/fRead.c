#include <stdio.h>
#include <stdlib.h>


 
struct data {
  int nummer;
  int daten;
};
 
int main (void)
{
  FILE *datei = fopen ("meinedatei.txt","wb");
  struct data Daten[3];
  
  unsigned int ret = 0;





  ret = fwrite (Daten,sizeof(struct data),3,datei);
 
  if (ret != 3) 
    printf ("Hupps, ein Fehler...\n");
  else 
    printf ("Erfolgreich geschrieben!\n");
 
  fclose (datei);
  return EXIT_SUCCESS;
}


