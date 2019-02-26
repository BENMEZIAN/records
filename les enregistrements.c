#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct etudiant{
	char nom[20];
	char prenom[25];
	int matricule;
}etudiant;

void color(int couleurDuTexte,int couleurDeFond);
void remplissage(etudiant etud[],int n);
void afficher(etudiant etud[],int n);

void main(int argc, char *argv[]) {

        struct etudiant etud[10];
	        int i,n;
	        // lecture de la taille
	        printf("donner la valeur n:");

	        do{
	        	 scanf("%d",&n);
			}while(n<0  ||  n>10);
			color(5,0);
			printf("1-le remplissage de tableau:\n");
	        remplissage(etud,n);
			printf("\n");
			color(5,0);
			printf("2-l'affichage de tableau:\n");
	        afficher(etud,n);
}

void color(int couleurDuTexte,int couleurDeFond){
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void remplissage(etudiant etud[],int n){
	       int i;
	      for(i=0;i<n;i++){
	      	     color(1,0);
                 printf("les informations de l'etudiant numero:%d\n",i+1);
				 color(1,0);
	         	 printf("donner le nom d'etudiant:");
				 color(1,0);
	         	 scanf("%s",&etud[i].nom);
				 color(1,0);
	             printf("donner le prenom d'etudiant:");
				 color(1,0);
	             scanf("%s",&etud[i].prenom);
				 color(1,0);
	             printf("donner le matricule d'etudiant:");
				 color(1,0);
	         	 scanf("%d",&etud[i].matricule);
	         	 printf("\n");
				 }
}

void afficher(etudiant etud[],int n){
	       int i;
	      for(i=0;i<n;i++){
	             color(2,0);
                 printf("l'affichage des informatins l'etudiant numero:%d\n",i+1);
				 color(2,0);
	         	 printf("donner le nom d'etudiant:%s\n",etud[i].nom);
				 color(2,0);
	             printf("donner le prenom d'etudiant:%s\n",etud[i].prenom);
				 color(2,0);
	             printf("donner le matricule d'etudiant:%d\n",etud[i].matricule);
				 color(4,0);
	             printf("\n");
				 }
}
