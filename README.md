# 🪙 Gold Rush - CLI Game

A simple and fun command-line game built using C++. The objective is to dig for gold by guessing the correct coordinates on a 10x10 grid. You only have 10 moves, so make every guess count!

---

## 🎮 How to Play

- You’ll see a 10x10 grid filled with dots (`.`).
- Enter the **column and row numbers** (e.g., `3 4`) to dig a spot.
- If you find gold, a `+` appears and your score increases!
- If not, you’ll see a `-`.
- The game ends after 10 moves.

---

## 🧠 What’s Inside

- C++ arrays to store hidden gold positions and player guesses.
- Random gold placement using `rand()` and `time(NULL)`.
- Score calculation and feedback system.
- Basic cross-platform screen clearing using `system("clear")` or `system("cls")`.

---

## 🛠️ Technologies Used

- C++
- Command Line Interface (CLI)
- Linux/macOS/Windows compatible

---

## 📸 Preview

    . . . . - . . . .

. . + . . . . . . .

. . . - . . . . . .

. + . . . . . . . .

. . . . - . + . . .



---

## ✨ Feedback System

- **80+**: Superb!
- **60-79**: Not bad.
- **30-59**: Needs practice...
- **Below 30**: Better luck next time 😅

---

## 🚀 Run the Game

Make sure you have a C++ compiler installed.

### Linux / macOS:
```bash
g++ -o goldrush goldrush.cpp
./goldrush


Windows:

g++ -o goldrush.exe goldrush.cpp
goldrush.exe

📁 File Structure

goldrush.cpp     // Main game logic
README.md        // This file

📜 License

Free to use, modify, and share! Just give credits if you build something awesome on top of it.
