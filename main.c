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
	inicia_vars_bots();
	transfiere_mapa(hero_map);
	accion_tile_hero(hero_x, hero_y);
	render_mapa();
	render_bots();

	while (main_bucle == 1)
	{
		gotoxy(1, 18);
		printf("Loop: %i,%i,%i,%i,%i   \n", contador, hero_map, hero_x, hero_y,
			   hero_val);
		printf("M:%i   \n", bot_cant_map);

		render_hero(hero_x, hero_y);

		gotoxy(1, 19);
		printf("\n");


		lee_teclado();
		accion_teclado(accion_tecla);


		logica_app();
	}

	clrscr();
	printf("** Fin App **\n\n");
}

