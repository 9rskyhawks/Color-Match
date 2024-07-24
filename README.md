# Color-Match
# Match-Three Puzzle Game

## Description
A terminal-based match-three puzzle game where players match tiles to score points.

## Features
- 8x8 grid of colored tiles
- Swap adjacent tiles to form matches
- Score points based on matches
- Simple command-line interface

## Installation
1. Clone the repository
2. Navigate to the project directory
3. Compile the project: `make`
4. Run the executable: `./match-three`

## Usage
1. Enter coordinates of tiles to swap in the format: `x1 y1 x2 y2`
2. Form matches of three or more tiles to score points
3. Keep playing and score as high as possible

## Examples
```sh
$ ./match-three
R G B Y O G B R 
Y O R G B Y O G 
B R Y O G B R Y 
O G B R Y O G B 
G B R Y O G B R 
B Y O G B R Y O 
R G B Y O G B R 
Y O R G B Y O G 
Score: 0
Enter coordinates of tiles to swap (x1 y1 x2 y2): 
