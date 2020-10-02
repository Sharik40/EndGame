#include "game.h"

void forth_scene(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 430, 894, 921)) {
        container->current_scene_1 = 10;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Sewers1.1.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
