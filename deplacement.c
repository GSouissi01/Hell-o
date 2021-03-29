#include "ennemi.h"
void deplacer(Ennemi *e)
{ /*thabet maa lprofa fl les valeurs*/
//Déplacement du joueur selon la direction de e
float posx; 
posx=e->PosEnnemi.x;
e>PosEnnemi.y=8*((pow(exp,posx)+pow(exp,-posx))/2);//y recoit le cos hyperbolique de x 
if(e->PosEnnemi.x%200==0) 
e->direction=rand()%2; 
if(e->direction==0)//d=0: direction de e a droite
 { 
  if(e->PosEnnemi.x+e->PosEnnemi.w <1400) //valeur maximale fl ecran
  e->PosEnnemi.x=e->PosEnnemi.x+e.speed;//déplacement à droite
   else e->direction=1;//sinon changer direction à gauche 
   } 
   if(e->direction==1)//direction de ennemi a gauche
   { 
   if(e->PosEnnemi.x >40)//valeur minimale fl ecran
   e->PosEnnemi.x=e->PosEnnemi.x-e.speed;//déplacement à gauche 
   else e->direction=0;//sinon changer direction a droite 
   } 
}

