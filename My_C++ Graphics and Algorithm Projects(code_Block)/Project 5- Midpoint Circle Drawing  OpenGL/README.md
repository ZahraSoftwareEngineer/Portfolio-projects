# Midpoint Circle Drawing using OpenGL

This project demonstrates the *Midpoint Circle Drawing Algorithm* using the C programming language and the OpenGL graphics library.

## 📌 Description
The program allows the user to input the center coordinates and the radius of a circle. It then uses the *Midpoint algorithm* to plot the circle on the screen using symmetric points.

## 🛠️ Technologies Used
- Language: C
- Graphics Library: OpenGL (GLUT)
- IDE: Code::Blocks / Dev C++ / Visual Studio (any that supports OpenGL)

## ▶️ How It Works
1. User inputs:
   - xcenter (X coordinate of the center)
   - ycenter (Y coordinate of the center)
   - radius (Radius of the circle)

2. The algorithm calculates symmetrical points in 8 octants to efficiently draw the circle using only integer arithmetic.

3. The circle is displayed in a 550x550 window using red color and point size 6.

##output.png

## 💡 Purpose
This project was created to demonstrate low-level graphics programming and the Midpoint circle algorithm, which is fundamental in computer graphics.

## 📎 Run Instructions
To compile and run this code:
```bash
Midpoint Circle Drawing.ppn -lGL -lGLU -lglut -o circle_draw
./circle_draw

🔗 Project Status

✅ Completed – Fully functional and tested
