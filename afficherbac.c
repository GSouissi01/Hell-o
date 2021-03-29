void aficherBack(Background b, SDL_Surface * screen);
{SDL_BlitSurface(image1, NULL, screen, &positionecran);
SDL_BlitSurface(perso, NULL, screen, &positionperso);
SDL_BlitSurface(b.vie, NULL, screen, &position_vie);
SDL_Flip(screen);
