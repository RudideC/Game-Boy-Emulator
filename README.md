# Game Boy Emulator

Welcome to the Game Boy Emulator project! This emulator allows you to play classic Game Boy games on your computer.

# Build

```bash
gcc -O2 -Wall -Wextra -pedantic -std=c99 src/main.c -o build/gbe -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lSDL2_ttf
```

## Using Makefile

- Makefile: https://www.gnu.org/software/make/manual/make.html

```bash
make build
```

## Using Taskfile

- TaskFile: https://taskfile.dev/installation/

```bash
task build
```
