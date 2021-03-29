#include "ennemi.h"
void initEnnemi(Ennemi *e)
{
int nbCol,nbLignes; 
SDL_Rect PosImage; 
SDL_Rect PosEnnemi; 
SDL_Surface *ennemi_image=NULL; 
e->PosEnnemi.x=0;
e->PosEnnemi.y=0;
e->PosEnnemi.w=PosImage.w/nbCol; //PosImage->w=800; 
e->PosEnnemi.h=PosImage.h/nbLignes;  //PosImage->h=600; 
ennemi_image=IMG_Load("agent.png"); 
}

