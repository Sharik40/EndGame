#include "game.h"

static void preparation(t_game *container) {
	container->current_scene_1 = 0;
	container->time = 20;
	container->window = NULL;
    container->ScreenSurface = NULL;
    container->image = NULL;
    container->Music = NULL;
	container->Click = NULL;
	container->glich = NULL;
	container->success = init(container);
	container->image = IMG_Load("./resource/MenuFinalOn.jpeg");
	container->Music = Mix_LoadMUS("./resource/123_2.mp3");
	container->Click = Mix_LoadWAV("./resource/click.mp3");
	container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
	container->animation = IMG_Load("resource/animation.png");
    container->animationTex = SDL_CreateTextureFromSurface(container->renderer, container->animation);
	container->glich = IMG_Load("resource/gameover.png");
    container->glichTex = SDL_CreateTextureFromSurface(container->renderer, container->glich);
	if(container->Music == NULL) {
        printf("Failed to load main menu music! SDL_mixer Error: %s\n", Mix_GetError());
        container->success = false;
    }
}

void free_resources(t_game *container) {
	SDL_FreeSurface(container->image);
	SDL_FreeSurface(container->animation);
	SDL_FreeSurface(container->glich);
    container->image = NULL;
    SDL_DestroyWindow(container->window);
	SDL_DestroyRenderer(container->renderer);
	Mix_FreeChunk(container->Click);
	container->Music = NULL;
    container->window = NULL;
    Mix_Quit();
	SDL_Quit();
}

int main()
{
	t_game *container;

	container = (t_game *)malloc(sizeof(t_game));
	preparation(container);
	game_loop(container);
	//system("leaks -q endgame");
    return 0;
}
