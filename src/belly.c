#include "game.h"

void belly(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 281, 430, 860, 882)) {
        container->time += 5;
        container->current_scene_1 = 13.1;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_3D1_belly_0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
