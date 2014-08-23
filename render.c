/* render */

void render_mapa(void)
{
	int x, y;

	for (y = 0; y < mapa_al; y++)
	{
		for (x = 0; x < mapa_an; x++)
		{
			gotoxy(x + 1, y + 1);

			switch (mapa[x][y])
			{
			case 48:			// char 0
				printf("%c", graficos[0]);
				break;

			default:
				printf("%c", mapa[x][y]);
				break;
			}

		}
	}
}


void borra_hero(int x, int y)
{
	gotoxy(x + 1, y + 1);
	switch (mapa[x][y])
	{
	case 48:					// char 0
		printf("%c", graficos[0]);
		break;

	default:
		printf("%c", mapa[x][y]);
		break;
	}
}


void render_hero(int x, int y)
{
	gotoxy(x + 1, y + 1);
	printf("@");
}
