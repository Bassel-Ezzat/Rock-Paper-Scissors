# 🎮 Rock-Paper-Scissors (C++)

[![Language](https://img.shields.io/badge/C%2B%2B-Game-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](https://github.com/yourusername/Rock-Paper-Scissors/pulls)
[![Made With Fun](https://img.shields.io/badge/Made%20with-Fun-ff69b4.svg)]()

A simple, terminal-based **Rock-Paper-Scissors** game written in C++.

Originally featured a *"rocket"* as an unbeatable secret weapon , but it was removed to keep the game fair and fun. Now, it’s classic RPS just you and the computer, head to head.

---

## 🧠 How It Works

- Input a number (0, 1, or 2) corresponding to your weapon:
  - `0`: Rock 🪨  
  - `1`: Paper 📄  
  - `2`: Scissors ✂️
- The computer randomly picks a weapon.
- The winner is determined based on classic RPS rules.

---

## 🛠️ Tech Stack

- **Language:** C++
- **Platform:** Terminal / Console
- **Randomization:** `rand()` seeded with current time (`srand(time(NULL))`)

---

## ⚙️ How to Compile & Run

```bash
g++ -o rps main.cpp
./rps
