#include "game.h"

void lower_platform_2(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 281, 750, 860, 882)) {
        container->current_scene_1 = 16;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_4A1_lower_platform_0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
