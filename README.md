# 📄 get_next_line

![C](https://img.shields.io/badge/Language-C-blue) ![42 Project](https://img.shields.io/badge/42%20Project-get_next_line-orange) ![Score Badge](https://img.shields.io/badge/Score-125%2F100-brightgreen)

---

## 📑 Table of Contents

* [About the Project](#about-the-project)
* [Features](#features)
* [Compilation & Usage](#compilation--usage)
* [How It Works](#how-it-works)

---

## 🏫 About the Project <a id="about-the-project"></a>

**get_next_line** is part of the 42 curriculum, focusing on reading files one line at a time efficiently.
It reinforces key programming concepts:

* Dynamic memory allocation and management (`malloc`, `free`)
* File descriptor handling and file I/O (`read`)
* Use of static variables
* Modular and reusable code design

The project is written in accordance with the **42 Norm**, ensuring clean, readable, and maintainable code.

> Peer-graded at **42Barcelona** with a final grade of **125/100**, including the bonus.

---

## 🚀 Features <a id="features"></a>

* Reads a file **one line at a time**, including the newline character (`\n`)
* Handles **any valid file descriptor** (files, stdin, etc.)
* **Manages memory dynamically**, avoiding leaks or undefined behavior
* Bonus version supports **multiple file descriptors** simultaneously
* Compatible with any buffer size via the `BUFFER_SIZE` macro

---

## ⚙️ Compilation & Usage <a id="compilation--usage"></a>

To test **get_next_line**, you can use the provided `main.c` file (for demonstration purposes).

Compile the mandatory version:

```bash
cc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=100 -o prog
```

Compile the bonus version (multiple file descriptors):

```bash
cc -Wall -Wextra -Werror main.c get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=100 -o prog
```

* You can adjust the value of `BUFFER_SIZE` to test different read chunk sizes.
* Run the program with a text file as argument:

```bash
./prog example.txt
```

> 🧪 *Note: The included `main.c` file is provided for testing purposes and is not part of the mandatory submission at 42.*

---

## 🧠 How It Works <a id="how-it-works"></a>

`get_next_line` reads files one line at a time, using a **static buffer** to store leftover data between calls. Each time it’s called:

1. Checks if there’s already a complete line in the static buffer.

   * If so, **returns the line immediately** without reading more.
2. Otherwise, reads from the file descriptor in **chunks of `BUFFER_SIZE`** until a line can be returned.
3. Returns the current line (including `\n`) and keeps any remaining data in a static variable for the next call.

**Important constraints:**

* Must **never read more than necessary** to return the current line.
* Each read operation uses a **buffer of size `BUFFER_SIZE`**.
* Must work correctly with both **files and standard input** (`stdin`).
* `lseek()` and global variables are forbidden.
* Only allowed external functions: `read`, `malloc`, `free`.

This ensures the function is **efficient, safe, and compliant** with the 42 requirements.
