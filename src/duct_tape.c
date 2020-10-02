#include "game.h"

void duct_tape(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 525, 815, 850, 880)) {
        container->time -= 5;
        container->current_scene_1 = 12.2;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_3C.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
    else if (on_click(SDL_BUTTON_LEFT, 290, 490, 850, 880)) {
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
