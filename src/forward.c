#include "game.h"

void forward(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 530, 777, 920, 950)) {
        container->time -= 5;
        container->current_scene_1 = 12.4;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_3B.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
