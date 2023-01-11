#include <SDL2/SDL.h>
#include<bits/stdc++.h>
#include <iostream>
#include <vector>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int BLOCK_SIZE = 20;

// Represents a single block in the snake's body
struct SnakeBlock {
  int x, y;
};

// Represents the snake
class Snake {
 public:
  Snake(int x, int y) {
    // Initialize the snake at the specified position
    body.push_back({x, y});
  }

  // Moves the snake in the specified direction
  void Move(int dx, int dy) {
    // Add a new block to the front of the snake
    body.insert(body.begin(), {body[0].x + dx, body[0].y + dy});

    // Remove the last block from the snake
    body.pop_back();
  }

  // Draws the snake to the screen
  void Draw(SDL_Renderer* renderer) {
    // Set the drawing color to green
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

    // Iterate through the snake's blocks and draw each one
    for (auto& block : body) {
      SDL_Rect rect = {block.x * BLOCK_SIZE, block.y * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE};
      SDL_RenderFillRect(renderer, &rect);
    }
  }

  // Returns true if the snake is colliding with itself
  bool IsCollidingWithSelf() {
    for (int i = 1; i < body.size(); i++) {
      if (body[0].x == body[i].x && body[0].y == body[i].y) {
        return true;
      }
    }
    return false;
  }

  // Returns true if the snake is out of bounds
  bool IsOutOfBounds() {
    return body[0].x < 0 || body[0].x >= SCREEN_WIDTH / BLOCK_SIZE ||
           body[0].y < 0 || body[0].y >= SCREEN_HEIGHT / BLOCK_SIZE;
  }

 private:
  std::vector<SnakeBlock> body;
};

int main(int argc, char* argv[]) {
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
    return 1;
  }

  SDL_Window* window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                        SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if (window == nullptr) {
    std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
    SDL_Quit
