# Rubik's Cube

A casual command line game written in C. Tested on macOS only.

## Screenshot

![mix](screenshots/mix.gif)
![solve](screenshots/solve.gif)

## Commands

### Cube rotation (Case sensitive)

| Layer        | Clockwise | Anticlockwise | Remarks         |
|--------------|-----------|---------------|-----------------|
| **L**eft     | `L`       | `l`           |                 |
| **R**ight    | `R`       | `r`           |                 |
| **U**p       | `U`       | `u`           |                 |
| **D**own     | `D`       | `d`           |                 |
| **F**ront    | `F`       | `f`           |                 |
| **B**ack     | `B`       | `b`           |                 |
| **M**iddle   | `M`       | `m`           | Between L and R |
| **E**quator  | `E`       | `e`           | Between U and D |
| **S**tanding | `S`       | `s`           | Between F and B |
| Rotate **X** | `X`       | `x`           |                 |
| Rotate **Y** | `Y`       | `y`           |                 |
| Rotate **Z** | `Z`       | `z`           |                 |

### Others

| Command | Description         |
|---------|---------------------|
| `solve` | Solves the cube     |
| `mix`   | Mixes the cube      |
| `help`  | Lists commands      |
| `exit`  | Terminates the game |
