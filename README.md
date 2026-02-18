🕒 C Session Timer

A simple C program that tracks the duration of a session and logs the time (in seconds) into a file.

📌 Description

This program:

Starts a timer when executed

Waits for the user to press ENTER

Calculates the session duration

Appends the duration to a file named sessions.txt

Displays the session time on the console

It uses standard C libraries:

stdio.h

time.h

🚀 How It Works

Program starts and records current system time.

User presses ENTER to stop the session.

The difference between start and end time is calculated.

The duration is written to sessions.txt in append mode.

The session duration is printed to the console.

💻 Compilation & Execution
🔹 On Linux / macOS
gcc session_timer.c -o session_timer
./session_timer

🔹 On Windows (MinGW)
gcc session_timer.c -o session_timer.exe
session_timer.exe

📂 Output File

The program creates (or appends to) a file:

sessions.txt


Example content:

Session Duration: 45 seconds
Session Duration: 120 seconds


Each run adds a new session entry.

🧠 Concepts Used

File handling (fopen, fprintf, fclose)

Time measurement (time, difftime)

Basic user input (getchar)

Error handling

📈 Possible Improvements

Log date and time of each session

Store duration in minutes and seconds format

Add session IDs

Improve input handling

Convert into a productivity tracker

📜 License

This project is open-source and free to use for educational purposes.
