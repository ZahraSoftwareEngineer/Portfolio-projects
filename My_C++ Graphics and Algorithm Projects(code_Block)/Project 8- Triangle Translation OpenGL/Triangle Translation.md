OpenGL Project: Triangle Translation

## 📌 Project Description

This OpenGL project draws a *triangle* based on user input and performs *translation (movement)* of the triangle by specified values tx and ty.

It demonstrates basic 2D geometric transformations using OpenGL in the C programming language.

---

## 🧩 Features

- Draws a triangle using three user-defined points.
- Translates (moves) the triangle to a new location based on translation factors.
- Displays both the *original* and *translated* triangles in the same window.
- Uses glVertex2i, GL_POLYGON, and glColor3f for drawing.

---

## 🛠️ Technologies Used

- *Programming Language*: C  
- *Graphics Library*: OpenGL with GLUT  
- *Recommended Tools*: Code::Blocks, GCC, Visual Studio with OpenGL setup

---

## 📥 User Input

The program prompts the user to enter:

- Triangle coordinates:
  - xo1, yo1
  - xo2, yo2
  - xo3, yo3
  
- Translation values:
  - tx (translation along the X-axis)
  - ty (translation along the Y-axis)

---

## ▶️ How to Compile and Run

1. Make sure OpenGL and GLUT are installed.
2. Save the code as triangle_translation.c
3. Compile with:
   ```bash
   gcc triangle_translation.c -o triangle_translation -lGL -lGLU -lglut

4. Run the program:

./triangle_translation




---

🎨 Output

The first triangle is drawn at the original coordinates with color glColor3f(0.25, 0.54, 0.48).

The translated triangle is drawn after applying (tx, ty) to all vertices.

Both triangles are shown in the same OpenGL window.



---

📝 Notes

You can change the triangle color by editing glColor3f(...).

Coordinate space is defined as:

gluOrtho2D(10, 790, 10, 590);

Ensure your input values stay within this range.



---

👨‍💻 Author

Created as part of a computer graphics exercise to demonstrate basic 2D transformations using OpenGL.