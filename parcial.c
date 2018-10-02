
#include <stdlib.h>
#include <stdio.h>
int main() {
    int tam,aux;
    printf("\nINGRESE EL TAMANO DE LA MATRIZ:\n\n");
    scanf("%d",&tam);
    int matriz[tam][tam];
    for(int i=0;i<tam;i++){
		 for(int j=0;j<tam;j++){
        printf("\nINGRESE UN NUMERO:\n\n");
        scanf("%d",&matriz[i][j]);
    }}
    printf("\nDATOS INGRESADOS: ");
    for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
    printf("%d  ",matriz[i][j]);
    }}
printf("\n");
    for(int a=0;a<tam;a++){
        for(int c=0;c<tam;c++){
			 for(int b=0;b<tam;b++){
        for(int d=0;d<tam;d++){
            if(matriz[a][c]>matriz[b][d]){
                aux=matriz[a][c];
                matriz[a][c]=matriz[b][d];
                matriz[b][d]=aux;
            }
            if(matriz[(tam-1)-b]>matriz[(tam-1)-b]){
                aux=matriz[(tam-1)-b;
                matriz[(tam-1)-b]=matriz[(tam-1)-b];
                matriz[(tam-1)-b]=aux;
            if(matriz[(tam-1)-d]>matriz[(tam-1)-d]){
                aux=matriz[(tam-1)-d];
                matriz[(tam-1)-d]=matriz[(tam-1)-d];
                matriz[(tam-1)-d]=aux;
        }}}}}
    }
    for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
        printf("%d  ",matriz[i][j]);
    }}
    printf("\n");
    for(int a=0;a<tam;a++){
		for(int c=0;c<tam;c++){
        for(int b=0;b<tam;b++){
			for(int d=0;d<tam;d++){
            if(matriz[a][c]<matriz[b][d]){
                aux=matriz[a][c];
                matriz[a][c]=matriz[b][d];
                matriz[b][d]=aux;
            }
            if(matriz[(tam-1)-b]<matriz[(tam-1)-b]){
                aux=matriz[(tam-1)-b];
                matriz[(tam-1)-b]=matriz[(tam-1)-b];
                matriz[(tam-1)-b]=aux;
            }if(matriz[(tam-1)-d]<matriz[(tam-1)-d]){
                aux=matriz[(tam-1)-d];
                matriz[(tam-1)-d]=matriz[(tam-1)-d];
                matriz[(tam-1)-d]=aux;
            }
        }}}
    }
    printf("\nDATOS ORDENADOS DE MENOR A MAYOR: ");
    for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
        printf("%d  ",matriz[i][j]);
    }}
    printf("\n\n");
    return 0;
}

	

