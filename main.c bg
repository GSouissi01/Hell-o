#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
int main ()
{
int continuer=1;
void initBack(Background * b) ;
void aficherBack(Background b, SDL_Surface * screen);
while(continuer)
{void aficherBack(Background b, SDL_Surface * screen);
SDL_WaitEvent(&event);
SDL_Flip(screen);
switch (event.type)
  {

case SDL_KEYDOWN:
 switch(event.key.keysym.sym)
 { case SDLK_UP :
                            b[2]=1;
                            break;
                        case SDLK_RIGHT:
                            b[0] = 1;
                            break;
                        case SDLK_LEFT:
                            b[1] = 1;
                            break;
                        case SDLK_ESCAPE:
                            continuer=0;
                            break;
                    }
                    break;

                case SDL_KEYUP:
                    switch(event.key.keysym.sym)
                    {
                        case SDLK_UP :
                            b[2]=0;
                            break;
                        case SDLK_RIGHT:
                            b[0] = 0;
                            break;
                        case SDLK_LEFT:
                            b[1] = 0;
                            break;
                    }
                    break;
case SDL_QUIT:
continuer=0;
SDL_Flip(screen);
break;

}//switch event type
}//while

//logic
        if(b[0])
        {
          scrolling_right(&camera,&positionperso,speed);
    
        }
        else if(b[1])
        {
          scrolling_left(&camera,&positionperso,speed);
      
        
        }else if(b[2])
{scrolling_up(&camera,&positionperso,speed);}
}//main



