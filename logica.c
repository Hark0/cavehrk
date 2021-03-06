/* logica */

void accion_tile_hero(int x, int y)
{
	hero_val = mapa[hero_x][hero_y];
	switch (hero_val)
	{
	case 50:
		mapa[hero_x][hero_y] = 49;
		break;
	}
}


int check_direccion(int vista)
{
	int respuesta = 0;

	switch (vista)
	{
	case 1:					// q
		if (hero_y == 0 & hero_mundo_map_al > 0)
		{
			respuesta = 0;
			hero_mundo_map_al--;
			hero_y = mapa_al - 1;
			hero_map = hero_map - 3;
			transfiere_mapa(hero_map);
			render_mapa();
			render_bots();
			return respuesta;
		}

		if (hero_y > 0)			// normal
		{
			respuesta = 1;

			if (mapa[hero_x][hero_y - 1] == 48)
			{
				respuesta = 0;
			}
			return respuesta;
		}
		break;

	case 2:					// a
		if (hero_y == mapa_al - 1 & hero_mundo_map_al < mundo_map_al - 1)
		{
			respuesta = 0;
			hero_mundo_map_al++;
			hero_y = 0;
			hero_map = hero_map + 3;
			transfiere_mapa(hero_map);
			render_mapa();
			render_bots();
			return respuesta;
		}

		if (hero_y < mapa_al - 1)	// normal
		{
			respuesta = 1;

			if (mapa[hero_x][hero_y + 1] == 48)
			{
				respuesta = 0;
			}
			return respuesta;
		}
		break;

	case 3:					// o
		if (hero_x == 0 & hero_mundo_map_an > 0)
		{
			respuesta = 0;
			hero_mundo_map_an--;
			hero_x = mapa_an - 1;
			hero_map = hero_map - 1;
			transfiere_mapa(hero_map);
			render_mapa();
			render_bots();
			return respuesta;
		}

		if (hero_x > 0)			// normal
		{
			respuesta = 1;
			if (mapa[hero_x - 1][hero_y] == 48)
			{
				respuesta = 0;
			}
			return respuesta;
		}
		break;

	case 4:					// p
		if (hero_x == mapa_an - 1 & hero_mundo_map_an < mundo_map_an - 1)
		{
			respuesta = 0;
			hero_mundo_map_an++;
			hero_x = 0;
			hero_map = hero_map + 1;
			transfiere_mapa(hero_map);
			render_mapa();
			render_bots();
			return respuesta;
		}

		if (hero_x < mapa_an - 1)	// normal
		{
			respuesta = 1;
			if (mapa[hero_x + 1][hero_y] == 48)
			{
				respuesta = 0;
			}
			return respuesta;
		}
		break;
	}

	return respuesta;
}


void logica_app(void)
{
	contador++;
}


void accion_teclado(int accion)
{
	switch (accion)
	{
	case 255:					// halt
		main_bucle = 0;
		break;

	case 254:					// reset
		clrscr();
		inicia_vars();
		inicia_vars_bots();
		transfiere_mapa(hero_map);
		accion_tile_hero(hero_x, hero_y);
		render_mapa();
		break;

	case 1:					// q
		if (check_direccion(1) == 1)
		{
			render_item(hero_x, hero_y, mapa[hero_x][hero_y]);
			hero_y--;
			render_hero(hero_x, hero_y);
			accion_tile_hero(hero_x, hero_y);
		}
		break;

	case 2:					// a
		if (check_direccion(2) == 1)
		{
			render_item(hero_x, hero_y, mapa[hero_x][hero_y]);
			hero_y++;
			render_hero(hero_x, hero_y);
			accion_tile_hero(hero_x, hero_y);
		}
		break;

	case 3:					// o
		if (check_direccion(3) == 1)
		{
			render_item(hero_x, hero_y, mapa[hero_x][hero_y]);
			hero_x--;
			render_hero(hero_x, hero_y);
			accion_tile_hero(hero_x, hero_y);
		}
		break;

	case 4:					// p
		if (check_direccion(4) == 1)
		{
			render_item(hero_x, hero_y, mapa[hero_x][hero_y]);
			hero_x++;
			render_hero(hero_x, hero_y);
			accion_tile_hero(hero_x, hero_y);
		}
		break;
	}

	accion_tecla = 0;
}

