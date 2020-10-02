#include "game.h"

void dt_mutant(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 300, 510, 855, 880)) {
        container->time += 5;
        container->current_scene_1 = 14.1;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene3A1A.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
