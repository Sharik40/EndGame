#include "game.h"

void two(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 420, 525, 860, 882)) {
        container->current_scene_1 = 15.2;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene-4B-_two_.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
