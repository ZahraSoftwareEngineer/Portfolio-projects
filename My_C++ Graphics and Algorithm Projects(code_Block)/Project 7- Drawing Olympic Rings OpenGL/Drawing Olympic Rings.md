

# 🏅 OpenGL Project: Drawing Olympic Rings

## 📌 Project Description
This OpenGL project draws the Olympic rings using the *Midpoint Circle Drawing Algorithm*. The program displays five interlaced circles in the official Olympic ring colors.

This project demonstrates how basic computer graphics algorithms like the midpoint circle method can be used to draw complex shapes.

---

## 🖥️ Features
- Uses the *Midpoint Circle Algorithm* to draw smooth circles.
- Draws five Olympic rings with the correct colors and relative positions.
- Implements glVertex2i and glBegin(GL_POINTS) to plot pixel-based points.
- Each ring has a radius of 75 units and is positioned to resemble the Olympic symbol.

---

## 🛠️ Technologies Used
- *Language*: C
- *Library*: OpenGL with GLUT
- *Development Tools*: Any C compiler supporting OpenGL (e.g., GCC, Code::Blocks, Visual Studio with OpenGL setup)

---

## 🎯 Ring Colors and Positions
- 🔵 Blue Ring: (250, 450)
- ⚫ Black Ring: (420, 450)
- 🔴 Red Ring: (590, 450)
- 🟡 Yellow Ring: (335, 360)
- 🟢 Green Ring: (505, 360)

Each ring is drawn using the function midcircle(x, y, radius).

---

## ▶️ How to Compile and Run

1. Make sure OpenGL and GLUT are installed on your machine.
2. Save the file as olympic_rings.cpp or any name you prefer.
3. Compile using terminal or command line:
   ```bash
   g++ olympic_rings.cpp -o olympic_rings -lGL -lGLU -lglut

4. Run the executable:

./olympic_rings




---

📷 Sample Output

The program opens a window showing the Olympic logo drawn using colored circles, spaced and arranged as in the official Olympic emblem.


---

📌 Notes

Ensure your OpenGL environment is set up properly.

You can adjust ring positions or radius in olymring() for experimentation.



---

👨‍💻 Author

Created as a graphics programming exercise to implement basic circle drawing and OpenGL plotting.

