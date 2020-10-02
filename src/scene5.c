#include "game.h"

void fifth_scene(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 545, 860, 887)) {
        container->current_scene_1 = 12;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Sewers1.3.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
