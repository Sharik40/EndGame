#include "game.h"

void diapers_duct_tape(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 300, 580, 885, 911)) {
        container->current_scene_1 = 13.3;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene3A1.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
