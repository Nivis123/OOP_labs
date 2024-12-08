#include "Game.h"

Game::Game(unsigned short int windowSizeX, unsigned short int windowSizeY, unsigned short int paddleSize, bool isRightWall) :
        _windowSizeX(windowSizeX),
        _windowSizeY(windowSizeY),
        _isRightWall(isRightWall),
        _wallThickness(15),
        _score(0),
        _colorSwap(false),
        paddle(new Paddle(windowSizeX, windowSizeY, _wallThickness, 1100.0f, paddleSize)) {
    
    balls.push_back(BallFactory::createBall(windowSizeX, windowSizeY, _wallThickness, 200.0f, 250.0f));
}

bool Game::Initialize() {
    
    int sdlInitializeResult = SDL_Init(SDL_INIT_VIDEO);     
    if (sdlInitializeResult != 0) {
        SDL_Log("Have not been able to initialize SDL; error message: %s", SDL_GetError());
        return false;
        
    }

    mWindow = SDL_CreateWindow("Simple pong in C++ - by Kirill Zimaltynov", 100, 100, _windowSizeX, _windowSizeY, 0);
       
    if (mWindow == nullptr) {
        SDL_Log("Game window initialization failed! Error message: %s", SDL_GetError());
        return false;
        
    }

    mRenderer = SDL_CreateRenderer(mWindow, -1, 0);
    if (mRenderer == nullptr) {
        SDL_Log("Game renderer initialization failed! Error message: %s", SDL_GetError());
        return false;
    }

    SDL_SetRenderDrawColor(mRenderer, 0, 0, 0, 255);
    SDL_RenderClear(mRenderer);     
    SDL_RenderPresent(mRenderer);   

    return true;
}

void Game::ShutDownGame() {
    
    SDL_DestroyWindow(mWindow);
    SDL_DestroyRenderer(mRenderer);
    SDL_Quit();
}

void Game::GameLoop() {
    
    while (mIsRunning) {
        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}

void Game::ProcessInput() {
    
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                mIsRunning = false;
                break;
        }
    }
    
    state = SDL_GetKeyboardState(NULL);
    if (state[SDL_SCANCODE_ESCAPE])
        mIsRunning = false;
}

void Game::UpdateGame() {
    
    float deltaTime = (SDL_GetTicks() - mTicksCount) / 1000.0f;
    mTicksCount = SDL_GetTicks();
    if (deltaTime > 0.05f) deltaTime = 0.05f;

    paddle->changePaddlePosition(state[SDL_SCANCODE_W], state[SDL_SCANCODE_S], deltaTime);

    for (auto& ball : balls) {
        ball->updatePosition(deltaTime, _wallThickness, paddle->getPosition()->y, *(paddle->getLength()));
        
        if (ball->ballOut()) {
            _score -= 10;
            std::cout << "\nBALL OUT!!! Score decremented by 10pts --" << " SCORE: " << _score << "\n" << std::endl;

            std::shared_ptr<Ball> lastBall = balls.front(); 
            balls.clear(); 
            balls.push_back(lastBall); 

            
            lastBall->setPosition(_windowSizeX / 2, _windowSizeY / 2);
            lastBall->resetVelocity();
            _colorSwap = true;

            _score = 0; 
            return; 
        }
        
        if (*(ball->hasBounced())) {
            _score += 1;
            std::cout << "BOUNCE!!! Score incremented by 1pts --" << " SCORE: " << _score << std::endl;
        }
    }

    if (_score > 0 && _score % 15 == 0 && balls.size() == (_score / 15)) {
        balls.push_back(BallFactory::createBall(_windowSizeX, _windowSizeY, _wallThickness, 200.0f, 250.0f));
    }

    paddle->redraw();
    for (auto& ball : balls) {
        ball->redraw();
    }
}

void Game::GenerateOutput() {
    SDL_SetRenderDrawColor(mRenderer, 0, 0, 0, 0);
    SDL_RenderClear(mRenderer);

    const int thickness = 15;
    SDL_SetRenderDrawColor(mRenderer, 255, 255, 255, 255);
    SDL_Rect wallTop {0, 0, _windowSizeX, thickness};
    SDL_RenderFillRect(mRenderer, &wallTop);
    SDL_Rect wallBottom {0, _windowSizeY - thickness, _windowSizeX, thickness};
    SDL_RenderFillRect(mRenderer, &wallBottom);
    if (_isRightWall) {
        SDL_Rect wallRight {_windowSizeX - thickness, 0, thickness, _windowSizeY};
        SDL_RenderFillRect(mRenderer, &wallRight);
    }

    SDL_RenderFillRect(mRenderer, paddle->getDrawingObject());
    
    for (auto& ball : balls) {
        if (_colorSwap)
            ball->switchColor();
        SDL_SetRenderDrawColor(mRenderer, ball->getColor()[0], ball->getColor()[1], ball->getColor()[2], 255);
        SDL_RenderFillRect(mRenderer, ball->getDrawingObject());
    }

    SDL_RenderPresent(mRenderer);

    if (_colorSwap) {
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        _colorSwap = false;
    }
}

unsigned short int* Game::getWallThickness() { return &_wallThickness; }
