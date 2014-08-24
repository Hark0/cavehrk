/* CaveHrk 1 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#include "colores.h"
#include "variables.h"
#include "render.c"
#include "logica.c"
#include "teclado.c"


int main(void)
{
	inicia_vars();
	transfiere_mapa(hero_map);
	hero_val = mapa[hero_x][hero_y];
	render_mapa();

	while (main_bucle == 1)
	{
		gotoxy(1, 18);
		printf("Loop: %i,%i,%i,%i,%i   \n", contador, hero_map, hero_x, hero_y,
			   hero_val);

		render_hero(hero_x, hero_y);

		gotoxy(1, 18);
		printf("\n");


		lee_teclado();
		accion_teclado(accion_tecla);


		logica_app();
	}

	clrscr();
	printf("** Fin App **\n\n");
}