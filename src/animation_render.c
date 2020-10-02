#include "game.h"

static void pre_loop(t_game *container) {
	container->window3Rect.x = 890;
	container->window3Rect.y = 150;
	container->window3Rect.w = 630;
	container->window3Rect.h = 816;
	container->texture3Rect.x = 0;
	container->texture3Rect.y = 0;
    SDL_QueryTexture(container->animationTex, NULL, NULL, &container->texture3Rect.w, &container->texture3Rect.h);
    container->texture3Rect.w /= 22;
    container->windowRect.x = 300;
	container->windowRect.y = 200;
	container->windowRect.w = 1000;
	container->windowRect.h = 800;
	container->textureRect.x = 0;
	container->textureRect.y = 0;
    SDL_QueryTexture(container->glichTex, NULL, NULL, &container->textureRect.w, &container->textureRect.h);
    container->textureRect.w /= 20;
}

void animation_render(t_game *container) {
    if (container->current_scene_1 == -1) {
        pre_loop(container);
        int totalFrames3 = 20;
        int delayPerFrame3 = 100;
        int frame3 = (SDL_GetTicks() / delayPerFrame3) % totalFrames3;
        container->textureRect.x = frame3 * container->textureRect.w;
        SDL_RenderClear(container->renderer);
        SDL_RenderCopy(container->renderer, container->imageTex, 0, 0);
        SDL_RenderCopy(container->renderer, container->glichTex, &container->textureRect, &container->windowRect);
        SDL_RenderPresent(container->renderer);
        SDL_RenderClear(container->renderer);
    }
    if (container->current_scene_1 >= 1 && container->current_scene_1 <= 3) {
        pre_loop(container);
        int totalFrames3 = 22;
        int delayPerFrame3 = 100;
        int frame3 = (SDL_GetTicks() / delayPerFrame3) % totalFrames3;
        container->texture3Rect.x = frame3 * container->texture3Rect.w;
        SDL_RenderClear(container->renderer);
        SDL_RenderCopy(container->renderer, container->imageTex, 0, 0);
        SDL_RenderCopy(container->renderer, container->animationTex, &container->texture3Rect, &container->window3Rect);
        SDL_RenderPresent(container->renderer);
        SDL_RenderClear(container->renderer);
    }
    if (container->current_scene_1 != -1 || (container->current_scene_1 < 1 && container->current_scene_1 > 3)) {
        SDL_RenderClear(container->renderer);
        SDL_RenderCopy(container->renderer, container->imageTex, 0, 0);
        SDL_RenderPresent(container->renderer);
        SDL_RenderClear(container->renderer);
    }
}
