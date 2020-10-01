#include "game.h"

void music_on_off(t_game *container) {
	if (on_click(SDL_BUTTON_LEFT, 227, 276, 1104, 1138)) {
		SDL_FreeSurface(container->image);
		container->image = NULL;
		container->image = SDL_LoadBMP("./resource/MenuFinalOn.bmp");
		container->Music = Mix_LoadMUS( "./resource/123_2.mp3" );
		if( Mix_PlayingMusic() == 0 )
			Mix_PlayMusic(container->Music, -1);
	}
	if (on_click(SDL_BUTTON_LEFT, 300, 365, 1104, 1138)) {
        SDL_FreeSurface(container->image);
        container->image = NULL;
		container->image = SDL_LoadBMP("./resource/MenuFinalOff.bmp");
		if(Mix_PlayingMusic() == 1 ) {	
			Mix_FreeMusic(container->Music);
			container->Music = NULL;
		}
    }
}
