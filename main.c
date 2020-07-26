/* Bibliotecas de auxilio */
#include <imageprocessing.h>
#include <stdio.h>
#include <matriz_red.c>
#include <matriz_blue.c>
#include <matriz_green.c>

int main() {
	/* Variaveis que serao utilizadas */
	imagem img;
	img = abrir_imagem("data/cachorro.jpg");
	int N = 3;
	
	/* Primeira abordagem: programação direta */
	matriz_red(img.width, img.height, img, N);
	matriz_blue(img.width, img.height, img, N);
	matriz_green(img.width, img.height, img, N);

	/* Segunda abordagem: uso de threads */
	
	/* Terceira abordagem: uso de process */
	
	/* Salvando e liberando imagens */
	salvar_imagem("cachorro-out.jpg", &img);
	liberar_imagem(&img);
	return 0;
}