#include "game.h"

void scene_4_final(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 285, 525, 855, 885)) {
        container->current_scene_1 = 15;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene-4-0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
