#include "game.h"

void diapers(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 508, 920, 950)) {
        container->current_scene_1 = 12.3;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Sewers1A.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
