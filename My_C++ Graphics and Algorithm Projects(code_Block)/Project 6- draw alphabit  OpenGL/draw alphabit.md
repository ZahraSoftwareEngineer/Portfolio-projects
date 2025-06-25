# 🖼️ OpenGL Project: Drawing Rectangles with Two Colors

## 📌 Project Description
This project uses OpenGL to draw three adjacent rectangles horizontally. The rectangles are drawn with the following color sequence:
- First rectangle: Black
- Second rectangle: White
- Third rectangle: Black

The purpose of this project is to practice using GL_POLYGON, color settings, and line width features in OpenGL.

---

## 🛠️ Tools & Technologies Used
- Programming Language: C
- Graphics Library: OpenGL (GLUT)

---

## 🎯 Program Functions
- line1() draws the first rectangle (black).
- line2() draws the second rectangle (white).
- line3() draws the third rectangle (black).

Each rectangle is drawn with fixed dimensions (50x50 pixels) and placed next to each other horizontally.

---

## ▶️ How to Run the Program
1. Make sure OpenGL and GLUT are installed on your system.
2. Use any C/C++ compiler that supports OpenGL (e.g., g++, Code::Blocks).
3. Compile the program:
   ```bash
   g++ filename.cpp -o output -lglut -lGL -lGLU

4. Run the program:

./output




---

📷 Sample Output

█████  ▓▓▓▓▓  █████
Black   White   Black


---

📌 Notes

You can modify the coordinates, colors, or number of rectangles to experiment and learn more.

This project is intended as a basic introduction to OpenGL shape rendering.



---

👨‍💻 Author

This project was created for educational purposes to practice OpenGL basics in 2D shape drawing.