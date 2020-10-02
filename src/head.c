#include "game.h"

void head(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 470, 600, 860, 882)) {
        container->current_scene_1 = 13.2;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_3D2_head_0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
