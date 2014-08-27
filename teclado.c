/* teclado */

void lee_teclado(void)
{
	tecla = getch();

	switch (tecla)
	{
	case TECLA_H:
		accion_tecla = 255;
		break;

	case TECLA_R:
		accion_tecla = 254;
		break;

	case TECLA_Q:
		accion_tecla = 1;
		break;

	case TECLA_A:
		accion_tecla = 2;
		break;

	case TECLA_O:
		accion_tecla = 3;
		break;

	case TECLA_P:
		accion_tecla = 4;
		break;

	default:
		accion_tecla = 0;
		break;
	}
}

