#include "game.h"

void two_back(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 420, 860, 882)) {
        container->time -= 5;
        container->current_scene_1 = 14.2;
        SDL_FreeSurface(container->image);
        container->image = NULL;
        container->image = IMG_Load("./resource/Scene-4-0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
