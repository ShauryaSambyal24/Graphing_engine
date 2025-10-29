# Graphing_engine
C console app plots y=2^(-x^2) (can be edited in code to change into an implicit function in teems of y)onto an 801 1601 array. Critical  {2:1} scaling (X:800, Y:400) corrects console font distortion for accurate graph visualization. fo uses 0.05 steps.
Console Graphing Calculator (2^(-x^2))

This repository contains a simple, single-file C program that acts as a console-based graphing calculator. It initializes a large 2D character array and plots the function $y = 2^{(-x^2)}$ directly onto the terminal screen using extended ASCII characters.

Program Mechanics and Resolution

The graph is plotted on a grid defined by an array of size 801 rows (Y-axis) by 1601 columns (X-axis).

Center: The origin (0, 0) is mapped to the array index [400][800].

Axis Drawing: The fill function draws the X and Y axes using the solid block character (219 in extended ASCII).

Scaling and Aspect Ratio Correction

A key clarification in this code is the scaling used to display the graph effectively in a console environment:

X-Axis Scaling: The mathematical x-coordinate (xv) is multiplied by 80.

Y-Axis Scaling: The mathematical y-coordinate (yv) is multiplied by 40.

This means the X-axis has twice the visual resolution (80 pixels per unit) compared to the Y-axis (40 pixels per unit). This intentional difference is used to visually compensate for the typical console character aspect ratio, where characters are often twice as tall as they are wide. Doubling the X-scale helps the plotted graph appear more proportionally correct (closer to a square resolution) on a standard terminal.

Core Functions

Function

Description

main

Initializes the array, clears the console (prints 100 newlines), calls fo to draw the function, and calls print to display the result.

fill

Initializes the 801x1601 character array with spaces (' ') and draws the X-axis (row 400) and Y-axis (column 800) using character 219.

fo

Function Plotting: Iterates the X-value (xv) from -10.0 to 10.0 in steps of 0.005. It calculates the corresponding Y-value using $y = 2^{(-x^2)}$, applies the scaling factors (80 for X, 40 for Y), and marks the final [row][col] with the block character 219.

print

Iterates through the entire array, printing each character and a newline at the end of each row to display the final graph.

prox

Unused utility: A function intended to round a float to two decimal places. It is defined but not called within the main plotting logic.

Compilation

To compile this program (assuming a standard C environment like GCC):

gcc -o graph graph.c -lm


(The -lm flag is required to link the pow function from the math library.)

Output

The program outputs a visual representation of the Gaussian-like function $y = 2^{(-x^2)}$ centered at the origin, scaled appropriately for a terminal window.
