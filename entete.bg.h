#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>


typedef strcut {
SDL_Surface *screen ;
SDL_Surface *screen=NULL;
SDL_Surface *image1=NULL;
SDL_Surface *perso=NULL;
SDL_Surface *vie=NULL;
Mix_Music *music;
Mix_Chunk *clic;
SDL_Rect positionecran,positionperso,camera_pos,position_vie;;
}background;


void initBack(Background * b) ;
void aficherBack(Background b, SDL_Surface * screen);
void scrolling (background * b, int direction ); 
