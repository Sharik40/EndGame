#include "game.h"

void first_scene(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 488, 1100, 200, 600)) {
        container->current_scene_1 = 1;
        SDL_FreeSurface(container->image);
        container->image = NULL;
        container->image = IMG_Load("./resource/Introduse1.1.jpeg");
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
        play_click(container);
    }
}
