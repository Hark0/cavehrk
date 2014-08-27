/* render */

void render_item(int x, int y, int grfx)
{
	gotoxy(x + 1, y + 1);
	switch (grfx)
	{
	case 48:					// char 0 -> espacio
		printf("%c", graficos[0]);
		break;

	case 49:					// char 1 -> .
		printf("%c", graficos[1]);
		break;

	case 50:					// char 2 -> x
		printf("%c", graficos[2]);
		break;

	default:
		printf("%c", grfx);
		break;
	}
}


void render_mapa(void)
{
	clrscr();
	int x, y;

	for (y = 0; y < mapa_al; y++)
	{
		for (x = 0; x < mapa_an; x++)
		{
			render_item(x, y, mapa[x][y]);
		}
	}
}


void render_hero(int x, int y)
{
	gotoxy(x + 1, y + 1);
	printf("@");
}


void render_bots(void)
{
	int x, y, contador;

	for (contador = 0; contador < bot_cant_map; contador++)
	{
		gotoxy(20, contador + 1);
		printf("%i,%i: %i x %i   \n", contador, hero_map - 1,
			   bot[contador][hero_map - 1].x, bot[contador][hero_map - 1].y);
	}
}

