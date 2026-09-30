# console-snake

Classic Snake in the console, written in C++ — my practice project for object-oriented programming.

![C++](https://img.shields.io/badge/C%2B%2B-14-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Platform](https://img.shields.io/badge/platform-Windows-0078D6?style=flat-square&logo=windows&logoColor=white)
[![License: MIT](https://img.shields.io/badge/license-MIT-green?style=flat-square)](./LICENSE)

## About

A small console game: the snake moves around the field, eats apples, grows and dies when it hits a wall or itself.
I wrote it to move from "one long file" to proper classes, where each class is responsible for its own part.

## How the code is organised

| File | Responsibility |
| :--- | :--- |
| `Source.cpp` | entry point: creates the game objects and runs the main loop |
| `Snake.h` / `Snake.cpp` | the snake: direction, movement, growth, collision with walls and itself |
| `Map.h` / `Map.cpp` | the field: size, border drawing, apple position |
| `Point.h` / `Point.cpp` | a coordinate pair with an equality operator |

## Controls

| Key | Action |
| :--- | :--- |
| `W` `A` `S` `D` | move up / left / down / right |

## Build and run

1. Install Visual Studio 2019 or 2022 with the **Desktop development with C++** workload.
2. Open `console_snake.sln`.
3. Press `F5` to build and run.

The project has no external dependencies — everything needed is in the repository.

> **Note:** the game is Windows-only. It uses `<conio.h>` for keyboard input without pressing Enter and
> `system("cls")` to redraw the field.

## License

MIT — see [LICENSE](./LICENSE).

<details>
<summary><b>🇷🇺 По-русски</b></summary>

<br>

Змейка в консоли на C++. Учебный проект.

**Управление:** WASD. **Запуск:** открыть `console_snake.sln` в Visual Studio и нажать F5.

Классы: `Snake` (движение, рост, столкновения), `Map` (поле, границы, яблоко), `Point` (координаты).
Проект только под Windows.

</details>
