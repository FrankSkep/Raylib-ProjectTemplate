#include <raylib.h>

#define SCR_WIDTH 1280
#define SCR_HEIGHT 720

int main()
{
    InitWindow(SCR_WIDTH, SCR_HEIGHT, "Simon Game");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
