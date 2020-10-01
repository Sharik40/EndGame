#include "game.h"

void duct_tape(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 525, 815, 850, 880)) {
        container->time -= 5;
        container->current_scene_1 = 12.2;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = SDL_LoadBMP("./resource/Scene 3C.bmp");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
