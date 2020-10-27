
#include <stdio.h>
#include <stdlib.h>

struct Datenpunkte{
	long long timeStamp;
	int pressure;
	char systemeState;
	char alarmState;
}__attribute__((packed));

//Funktion initialisieren
void PrintDataPoints(struct Datenpunkte array[], long numberOfPoints);

int main(int argc, char *argv[])
{
	//Öffnet das File und setzt den Pointer
	FILE *fid = fopen("pressureSpike.bin", "rb");
	//Schreibt in ein neues File
	FILE *fp = fopen("output.txt", "w+");

	
	
	if( fid != NULL )
	{
		//Sucht das Ende des Files und berechnet die Anzahl Datenpunkte
		long numberOfPoints;
		fseek (fid, 0, SEEK_END);
		numberOfPoints = (ftell (fid)/sizeof(struct Datenpunkte));
		rewind (fid);
		
		//Array mit den Datenpunkten wird generiert
		struct Datenpunkte myDataPoints[numberOfPoints];
		
		//Daten werden in das Array übertragen
		fread(myDataPoints, sizeof(struct Datenpunkte), numberOfPoints, fid);
		
		
		//printf("TimeStamp in ms:\tPressure in Pa:\t\tSysteme State:\tAlarm State:\t\n");
		fprintf(fp,"TimeStamp in ms:\tPressure in Pa:\tSysteme State:\tAlarm State:\t\n");
		
		PrintDataPoints(myDataPoints, numberOfPoints);
			
	}
	fclose(fid);
	fclose(fp);
	return 0;
}

//Funktion
void PrintDataPoints(struct Datenpunkte array[], long numberOfPoints)
{
	FILE *fp = fopen("output.txt", "w+");



	for(int i = 0; i < numberOfPoints; i+=1)
	{
		fprintf(fp,"%lld \t%d \t%d \t%d\n", array[i].timeStamp, array[i].pressure, array[i].systemeState, array[i].alarmState);
	}
	
	
	
	fclose(fp);
}







