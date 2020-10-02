#include "game.h"

void mutant(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 285, 500, 850, 880)) {
        container->time -= 5;
        container->current_scene_1 = 12.1;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_3D.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
