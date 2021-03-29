void animerEnnemi(Ennemi *e,int frame)
{ //ce sont des valeurs aléatoires pour faire tourner le programme sans aucune signification
 if (e->direction==0) 
 e->PosSprite.y=35; 
 else if (e->direction==1) 
 e->PosSprite.y=146;
  if (e->PosSprite.x>=400) 
  e->PosSprite.x=0; 
  else 
  e->PosSprite.x+=50*frame;}
