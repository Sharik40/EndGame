#include "game.h"

void lower_platform(t_game *container, bool time) {
    if (on_click(SDL_BUTTON_LEFT, 300, 760, 890, 915)) {
        if (time)
            container->time -= 5;
        container->current_scene_1 = 15.3;
        SDL_FreeSurface(container->image);
		container->image = NULL;
        container->image = IMG_Load("./resource/Scene_4A_lower_platform_0.jpeg");
        print_time(container);
        play_click(container);
        container->imageTex = SDL_CreateTextureFromSurface(container->renderer, container->image);
    }
}
