#include "game.h"

void third_scene(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 260, 510, 965, 995)) {
        container->current_scene_1 = 7;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Sewers1.0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
