#include "game.h"

void dt_forward(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 300, 525, 895, 920)) {
        container->current_scene_1 = 14.2;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_3A1B_forward_0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
