# Game Boy Emulator

Welcome to the Game Boy Emulator project! This emulator allows you to play classic Game Boy games on your computer.

# Build

```bash
gcc -o game-boy src/main.c -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2
```

## Using Taskfile

- TaskFile: https://taskfile.dev/installation/

```bash
task build
```
