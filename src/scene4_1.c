#include "game.h"

void forth_scene_2(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 430, 862, 890)) {
        container->time -= 5;
        container->current_scene_1 = 9;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Sewers3.0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
