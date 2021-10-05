#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXCHAR 1000 /*

int main(){

    FILE *fp;
    char Ligne[MAXCHAR];
    char *Sortie;
    unsigned int ip_from[4];        
    unsigned int ip_to;             
    char country_code;     
    char country_name;     
    char region_name;     
    char city_name;         
    double latitude;        
    double longitude; 
    int cal;
    
    printf("Donne des chiffres \n");
    scanf("%d.%d.%d.%d", &ip_from[0], &ip_from[1], &ip_from[2], &ip_from[3]);

    cal=ip_from[0]* 256 * 256 * 256 + ip_from[1] * 256 * 256 + ip_from[2] * 256 + ip_from[3];
    
    printf("%ld\n",cal);
    fp = fopen("geoip.csv","r");


    while (!feof(fp) )
    {
        fgets(Ligne, MAXCHAR, fp);
        printf("Ligne: %s", Ligne);

        Sortie = strtok(Ligne, ",");

        while(Sortie != NULL)
        {
            printf("Sortie: %s\n", Sortie);
            Sortie = strtok(NULL, ",");
        }

    }

    return 0;

}   

int main(){
    
    unsigned int ip_from[4];        
    unsigned int ip_to;             
    char country_code;     
    char country_name;     
    char region_name;     
    char city_name;         
    double latitude;        
    double longitude; 
    int cal;
    
    printf("Donne tes chiffres \n");
    scanf("%d.%d.%d.%d", &ip_from[0], &ip_from[1], &ip_from[2], &ip_from[3]);

    cal=ip_from[0]* 256 * 256 * 256 + ip_from[1] * 256 * 256 + ip_from[2] * 256 + ip_from[3];
    
    printf("%ld",cal);
    
	 
        return 0;

}   */
  while(Sortie != NULL)
        {
            for(int i = 1; i < strlen(Sortie); i++){
                if(Sortie[i] == '"'){
                    Sortie[i] = Sortie[i+1];
                }
                Sortie[i-1] = Sortie[i];
            }
            printf("Compteur : %d ", exit_compteur);
            printf(" Sortie: %s\n", Sortie);
            Sortie = strtok(NULL, ",");

            if(ip_from_int == 0){
                printf("Sortie : %s \n", Sortie);
                ip_from = Sortie;
                ip_from_int++;
            }

            if(ip_to_int == 1){
                printf("Sortie : %s \n", Sortie);
                ip_to = Sortie;
                ip_to_int++;
            }

            if(exit_compteur == 2){
                printf("C'est plus'");
                if(ip_csv_compatible >= ip_from && ip_csv_compatible <= ip_to){
                    printf("L'IP vient de : %s", Sortie);
                    exit(0);
                }
            } 
            
            exit_compteur++;
            ip_to_int++;

        }

    }

    printf("\n");

    return 0;
}
 

