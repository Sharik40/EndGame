#include "game.h"

void forth_scene_3(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 503, 860, 884)) {
        container->current_scene_1 = 11;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = SDL_LoadBMP("./resource/Sewers1.2.bmp");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
