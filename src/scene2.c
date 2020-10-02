#include "game.h"

void second_scene(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 580, 730, 1110, 1170)) {
        container->current_scene_1 = 4;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/StreetS1_0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
