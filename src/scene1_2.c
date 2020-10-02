#include "game.h"

void first_scene_2(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 580, 730, 1110, 1170)) {
        container->current_scene_1 = 2;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Introduse1.2.jpeg");
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
        play_click(container);
    }
}
