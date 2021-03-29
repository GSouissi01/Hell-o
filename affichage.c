#include "ennemi.h"
void afficherEnnemi(Ennemi *e,SDL_Surface *screen)
{
*screen=NULL; 
initEnnemi(&e);
SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE); 
SDL_BlitSurface(e->sprite,&e.PosSprite,screen,&e.PosScreen);
SDL_FLip(screen); 
SDL_Quit;
}



