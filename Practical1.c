// Installation of VS Code and GCC and execution of first C program

// step1. Installation of VS Code
// Open a web browser.
// Go to the official VS Code website.
// Download Visual Studio Code for your operating system (Windows).
// Run the downloaded installer
// Click Next → Next → Install.
// After installation, open VS Code.


// step2. Installation of GCC Compiler (Windows)
// Using MinGW (common method)
// Download MinGW (Minimalist GNU for Windows).
// Run the installer and install it.
// During installation, select gcc (C compiler).
// Finish the installation.
// Add MinGW bin folder to System Environment Variables → Path.
// Open Command Prompt and type:
// gcc --version
// If version details appear, GCC is installed successfully.


// step3. Writing the First C Program in VS Code
// Open VS Code.
// Click File → New File.
// Save the file as first.c.
// Type the following program:

// #include <stdio.h>
// int main() {
//     printf("Hello World");
//     return 0;
// }


// step4. Execution of the First C Program
// Open Terminal in VS Code
// (Click Terminal → New Terminal).
// Navigate to the folder where first.c is saved.
// Compile the program using:
// gcc first.c
// Run the program:
// a.exe
// Output will be:
// Hello World


// step5. Conclusion
// VS Code is used as the editor.
// GCC is used to compile the C program.
// The program runs successfully and displays output.