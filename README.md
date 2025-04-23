# Student Marks & Grade Management System

This C program allows users to enter marks for 5 subjects and calculates the total, average, and grade based on the marks provided.

## 📌 Features

- Takes input for 5 subjects
- Calculates:
  - Total marks
  - Average marks
  - Grade (A/B/C/D/Fail)
- Uses functions for modular design
- Input validation for mark entries

 
## 🧮 Grading Scale

| Average Marks | Grade |
|---------------|-------|
| 90 and above  | A     |
| 75 - 89       | B     |
| 60 - 74       | C     |
| 40 - 59       | D     |
| Below 40      | Fail  |


## 🛠 How to Compile

### 🔸 Using GCC (Linux/Mac/WSL/Git Bash)

bash
gcc student_grade.c -o student_grade

🔸 On Windows (MinGW or GCC installed)
bash
gcc student_grade.c -o student_grade.exe

▶ How to Run
🔹 On Linux/Mac/WSL
bash
./student_grade

🔹 On Windows CMD/Powershell
bash
student_grade.exe
✅ Tip: Run the program from the terminal to view the output. If running by double-clicking, ensure you added system("pause"); to keep the window open.

✅ Requirements
C Compiler (GCC recommended)
VS Code or any text editor
Terminal / Command Prompt
