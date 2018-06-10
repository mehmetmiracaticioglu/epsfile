#include <stdio.h>
#include "epsgraphics.h"
#include <string.h>
#include <stdlib.h>


int main(void){
char *file_name;
Figure *fig;
file_name= (char *)malloc(sizeof(char));
strcpy(file_name,"proje.eps");

fig=start_figure(100.0,102.0);
export_eps(fig,file_name);

return 0;
}
