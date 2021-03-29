#include"entete.h"
void initBack(Background * b) ;
{
//verrification
if(SDL_Init(SDL_INIT_VIDEO) != 0)
{
printf("Erreur lors de l'initialisation de la SDL : %s",SDL_GetError());
return (1);
}
//fenetre kahla
b.screen = SDL_SetVideoMode(800, 500, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
if (screen == NULL)
{
printf("Erreur lors du placement du mode video : %s",SDL_GetError());
return (1);
}
//esm el game 
SDL_WM_SetCaption("HELL'O" , NULL);
//TELECHARGEMEN background
b.image1=IMG_Load("back.jpg");
if (b.image1 == NULL)
{
printf("Erreur lors de telechargement de l'image : %s", SDL_GetError());
return (1);
}
////telechargement du vie
b.vie=IMG_Load("vie.png");
if (b.vie == NULL)
{
printf("Erreur lors de telechargement de l'image : %s", SDL_GetError());
return (1);
}
//telechargement du peroso
b.perso=IMG_Load("goku.jpg");
if (b.perso == NULL)
{
printf("Erreur lors de telechargement de l'image : %s", SDL_GetError());
return (1);
}

//verrification du son 
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{
printf("%s",Mix_GetError());
}
//play music
music=Mix_LoadMUS("son.mp3");
Mix_PlayMusic(music, -1);
clic=Mix_LoadWAV("clic.wav");

}
