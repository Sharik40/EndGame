#include "game.h"

void one(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 290, 390, 860, 882)) {
        container->current_scene_1 = 15.1;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene-4A-_lower-platform_-0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
