#include "game.h"

void first_game_over(t_game *container) {
    container->current_scene_1 = -1;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/GameOwer.jpeg");
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
}
