// Benutze die String-Funktionen der Bibliothek <string.h>,
// um aus einem vollständigen Pfad in Form eines Strings das Verzeichnis,
// den Dateinamen und die Extension der Datei zu ermitteln. 

#include<stdio.h>
#include<string.h>

int main() {

	char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";

	printf("\n Pfad: %s \n\n", string);

	char *c1 = strrchr(string, '\\');

	// if(strrchr(string, '.') != NULL) { 
	// if-Abfrage & != NULL nicht erforderlich, weil wir wissen,
	// dass ein Punkt vorhanden ist

 	printf(" Dateiendung: %s\n", strrchr(string, '.')+1);
  	printf(" Dateiname: %s\n", strrchr(string, '\\')+1);


	//}

	if (strrchr(string, '\\')) {
		*c1 = '\0';
		printf(" Verzeichnis: %s\n\n", string);
	}

return 0;
}

