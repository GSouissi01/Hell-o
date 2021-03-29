#include "ennemi.h"
int collisionBB( SDL_Rect posp, SDL_Rect pose) 
{
int coll;
initEnnemi(&e);
afficherEnnemi(e, &screen);
if(posp.x+posp.w<pose.x || posp.x> pose.x+posp.w || posp.y+posp.h<pose.y || posp.y> pose.y+pose.h)
coll=1;
else coll=0;
return coll; 
} 

