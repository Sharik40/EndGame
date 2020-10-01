#include "game.h"

void fifth_scene(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 545, 860, 887)) {
        container->current_scene_1 = 12;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = SDL_LoadBMP("./resource/Sewers1.3.bmp");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
