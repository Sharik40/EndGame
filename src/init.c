#include "game.h"

bool init(t_game *container) {
	const int width = 1600, heigh = 1200;
	//Initialization flag
    bool success = true;

    //Initialize SDL
    if(SDL_Init( SDL_INIT_EVERYTHING ) < 0) {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }
	if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 ) {
		printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
        success = false;
    }
    else {
        container->window = SDL_CreateWindow( "Time to change", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, heigh, 0 );
        container->renderer = SDL_CreateRenderer(container->window, -1, 0);
        if(container->window == NULL) {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        }
    }
    return success;
}
