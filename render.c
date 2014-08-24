/* render */

void render_item (int x, int y, int grfx)
{
	gotoxy(x + 1, y + 1);
	switch (grfx)
	{
			case 48:			// char 0 -> espacio
				printf("%c", graficos[0]);
				break;

			case 49:			// char 1 -> .
				printf("%c", graficos[1]);
				break;

			case 50:			// char 2 -> /
				printf("%c", graficos[2]);
				break;

			default:
				printf("%c", grfx);
				break;
	}
}


void render_mapa(void)
{
	int x, y;

	for (y = 0; y < mapa_al; y++)
	{
		for (x = 0; x < mapa_an; x++)
		{
render_item(x,y,mapa[x][y]);
/*
			gotoxy(x + 1, y + 1);

			switch (mapa[x][y])
			{
			case 48:			// char 0 -> espacio
				printf("%c", graficos[0]);
				break;

			case 49:			// char 1 -> .
				printf("%c", graficos[1]);
				break;

			case 50:			// char 2 -> /
				printf("%c", graficos[2]);
				break;

			default:
				printf("%c", mapa[x][y]);
				break;
			}
*/
		}
	}
}


void borra_hero(int x, int y)
{
render_item(x,y,mapa[x][y]);
}


void render_hero(int x, int y)
{
	gotoxy(x + 1, y + 1);
	printf("@");
}