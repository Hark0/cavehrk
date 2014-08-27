/* variables */

int main_bucle;
int contador;
int tecla;
int accion_tecla;

int mundo_ancho;
int mundo_alto;
char mundo[] =
	"a11111111111111ab11111111111111bc11111111111111c111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111a11111111111111ab11111111111111bc11111111111111cd11111111111111de22222222222222ef11111111111111f111111111111111122111222222222221111111111111111111111111111111122222222222222221111111111111111111111111111111122222222222222221111111111111111111111111111111122222222222222221111111111111111111111111111111122222222233332221111111111111111111111111111111122222222233322221111111111111111111111111111111122222222233332221111111111111111111111111111111122222222222222221111111111111111d11111111111111de22222222222222ef11111111111111fg11111111111111gh11111111111111hi11111111111111i111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111g11111111111111gh11111111111111hi11111111111111i";

int mapa_an;
int mapa_al;
char mapa[16][10];

int hero_x;
int hero_y;
int hero_map;
char hero_val;

int mundo_map_an;
int mundo_map_al;

int hero_mundo_map_an;
int hero_mundo_map_al;

char graficos[] = " .xe";

struct enemigos
{
	int x;
	int y;
	int grfx;
} bot[8][9];

char cant_bot[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

char bot_cant_map;


void inicia_vars(void)
{
	main_bucle = 1;
	contador = 0;
	tecla = 0;
	accion_tecla = 0;

	mapa_an = 16;
	mapa_al = 10;

	hero_x = 0;
	hero_y = 0;
	hero_map = 5;
	hero_val = 0;

	mundo_map_an = 3;
	mundo_map_al = 3;

	hero_mundo_map_an = 1;
	hero_mundo_map_al = 1;

	mundo_ancho = 48;
	mundo_alto = 30;
}


void inicia_vars_bots()
{
	// 1
	bot[0][0].x = 0;
	bot[0][0].y = 0;
	bot[0][0].grfx = 3;

	// 2
	bot[0][1].x = 0;
	bot[0][1].y = 0;
	bot[0][1].grfx = 3;

	bot[1][1].x = 0;
	bot[1][1].y = 0;
	bot[1][1].grfx = 3;

	// 3
	bot[0][2].x = 0;
	bot[0][2].y = 0;
	bot[0][2].grfx = 3;

	bot[1][2].x = 0;
	bot[1][2].y = 0;
	bot[1][2].grfx = 3;

	bot[2][2].x = 0;
	bot[2][2].y = 0;
	bot[2][2].grfx = 3;

	// 4
	bot[0][3].x = 0;
	bot[0][3].y = 0;
	bot[0][3].grfx = 3;

	bot[1][3].x = 0;
	bot[1][3].y = 0;
	bot[1][3].grfx = 3;

	bot[2][3].x = 0;
	bot[2][3].y = 0;
	bot[2][3].grfx = 3;

	bot[3][3].x = 0;
	bot[3][3].y = 0;
	bot[3][3].grfx = 3;

	// 5
	bot[0][4].x = 0;
	bot[0][4].y = 0;
	bot[0][4].grfx = 3;

	bot[1][4].x = 1;
	bot[1][4].y = 1;
	bot[1][4].grfx = 3;

	bot[2][4].x = 2;
	bot[2][4].y = 2;
	bot[2][4].grfx = 3;

	bot[3][4].x = 0;
	bot[3][4].y = 0;
	bot[3][4].grfx = 3;

	bot[4][4].x = 0;
	bot[4][4].y = 0;
	bot[4][4].grfx = 3;

	// 6
	bot[0][5].x = 0;
	bot[0][5].y = 0;
	bot[0][5].grfx = 3;

	bot[1][5].x = 0;
	bot[1][5].y = 0;
	bot[1][5].grfx = 3;

	bot[2][5].x = 0;
	bot[2][5].y = 0;
	bot[2][5].grfx = 3;

	bot[3][5].x = 0;
	bot[3][5].y = 0;
	bot[3][5].grfx = 3;

	bot[4][5].x = 0;
	bot[4][5].y = 0;
	bot[4][5].grfx = 3;

	bot[5][5].x = 0;
	bot[5][5].y = 0;
	bot[5][5].grfx = 3;

	// 7
	bot[0][6].x = 0;
	bot[0][6].y = 0;
	bot[0][6].grfx = 3;

	bot[1][6].x = 0;
	bot[1][6].y = 0;
	bot[1][6].grfx = 3;

	bot[2][6].x = 0;
	bot[2][6].y = 0;
	bot[2][6].grfx = 3;

	bot[3][6].x = 0;
	bot[3][6].y = 0;
	bot[3][6].grfx = 3;

	bot[4][6].x = 0;
	bot[4][6].y = 0;
	bot[4][6].grfx = 3;

	bot[5][6].x = 0;
	bot[5][6].y = 0;
	bot[5][6].grfx = 3;

	bot[6][6].x = 0;
	bot[6][6].y = 0;
	bot[6][6].grfx = 3;

	// 8
	bot[0][7].x = 0;
	bot[0][7].y = 0;
	bot[0][7].grfx = 3;

	bot[1][7].x = 0;
	bot[1][7].y = 0;
	bot[1][7].grfx = 3;

	bot[2][7].x = 0;
	bot[2][7].y = 0;
	bot[2][7].grfx = 3;

	bot[3][7].x = 0;
	bot[3][7].y = 0;
	bot[3][7].grfx = 3;

	bot[4][7].x = 0;
	bot[4][7].y = 0;
	bot[4][7].grfx = 3;

	bot[5][7].x = 0;
	bot[5][7].y = 0;
	bot[5][7].grfx = 3;

	bot[6][7].x = 0;
	bot[6][7].y = 0;
	bot[6][7].grfx = 3;

	bot[7][7].x = 0;
	bot[7][7].y = 0;
	bot[7][7].grfx = 3;

	// 9
	bot[0][8].x = 0;
	bot[0][8].y = 0;
	bot[0][8].grfx = 3;

	bot[1][8].x = 0;
	bot[1][8].y = 0;
	bot[1][8].grfx = 3;

	bot[2][8].x = 0;
	bot[2][8].y = 0;
	bot[2][8].grfx = 3;

	bot[3][8].x = 0;
	bot[3][8].y = 0;
	bot[3][8].grfx = 3;

	bot[4][8].x = 0;
	bot[4][8].y = 0;
	bot[4][8].grfx = 3;

	bot[5][8].x = 0;
	bot[5][8].y = 0;
	bot[5][8].grfx = 3;

	bot[6][8].x = 0;
	bot[6][8].y = 0;
	bot[6][8].grfx = 3;

	bot[7][8].x = 0;
	bot[7][8].y = 0;
	bot[7][8].grfx = 3;

	bot[8][8].x = 0;
	bot[8][8].y = 0;
	bot[8][8].grfx = 3;
}


void transfiere_mapa(int mapa_actual)
{
	int x, y;
	int contador = (16 * mapa_actual) - 16;

	if (mapa_actual >= 4 & mapa_actual <= 6)
	{
		contador = contador + 432;
	}

	if (mapa_actual >= 7 & mapa_actual <= 9)
	{
		contador = contador + 864;
	}

	for (y = 0; y < mapa_al; y++)
	{
		for (x = 0; x < mapa_an; x++)
		{
			mapa[x][y] = mundo[contador];
			contador++;
		}
		contador = contador + 32;
	}

	bot_cant_map = cant_bot[mapa_actual - 1];
}

