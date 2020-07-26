#include <imageprocessing.h>
#include <stdio.h>

void matriz_blue(unsigned  int width , unsigned int height, imagem img, int N){
	int i, j = 0;
	int a, b = 0;
	int cont = 0;
	float soma = 0;
 
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height  j++) {
			if((i >= N) && (j >= N) && (width - i > N) && (height - j > N) ){
				// SOMA DOS ELEMENTOS 
				cont = 0;
				for(a = (i-N); a < (i+N); a++){
					for(b = (j-N); b < (j+N); b++){
					  soma += img.b[b*width + a];
					  cont++;
					}
				 }
				 img.b[j*width + i] = soma/cont;
			}
		}
	}
}