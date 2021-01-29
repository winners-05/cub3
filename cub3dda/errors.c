#include "cub3d.h"

void error_gestion(int i)
{
	if (i == 1)
		ft_putstr("ERROR \n check file EXTENSION");
	if (i == 2)
		ft_putstr("ERROR \n ARGUMENT MUST BE SAVE");
	if (i == 3)
		ft_putstr("ERROR \n WRONG FILE CONFIGURATION");
    if(i == 4)
        ft_putstr("ERROR \n WRONG NUMBER OF PARAMETERS");
	exit(0);
}