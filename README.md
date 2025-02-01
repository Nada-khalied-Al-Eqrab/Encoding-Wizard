# Universal Code Converter in C++

This C++ program provides a versatile tool for exploring character encodings. It allows users to examine the different encoding representations (ASCII, UTF-8, UTF-16, UTF-32) of individual characters, convert entire strings to their ASCII values, and view a list of common symbols along with their encoding details.

## Project Overview

This project demonstrates several key C++ concepts:

*   **Character Encoding:**  Understanding and working with different character encoding schemes (ASCII, UTF-8, UTF-16, UTF-32).
*   **String Manipulation:**  Using the `<string>` library to handle text input and processing.
*   **Input/Output Operations:**  Taking user input and displaying formatted output using `cin` and `cout`, along with `<iomanip>` for formatting.
*   **Function Design:**  Modularizing the code into functions for better organization and reusability (e.g., `displayCharacterDetails`, `convertTextToASCII`, `displayCommonSymbols`).
*   **Control Flow:**  Using a `while` loop for the main menu and `if-else if` statements for handling user choices.
*   **Type Casting:**  Explicitly casting between different character types (`char`, `wchar_t`, `char32_t`) to get the correct encoding values.
*   **Data Structures (Implicit):**  Using `std::string` which is a dynamic character array, to store and iterate over text.

## Features

*   **Character Encoding Details:** Displays ASCII, UTF-8, UTF-16, and UTF-32 representations of a given character.
*   **Text to ASCII Conversion:** Converts a string of text into its corresponding ASCII values.
*   **Common Symbol Display:** Shows a list of common symbols (like space, newline, tab, etc.) along with their descriptions and ASCII values.
*   **Menu-Driven Interface:** Provides a user-friendly menu for selecting different functionalities.
*   **Input Validation (Basic):** Checks if the number entered for ASCII conversion is within the valid range (0-127).

## How It Works - A Detailed Look

1.  **Menu Display:** The `main` function displays a menu with options for different encoding operations.

2.  **User Input:** The program takes user input for their choice of operation.

3.  **`displayCharacterDetails` Function:**
    *   Takes a character as input.
    *   Displays the character itself.
    *   Shows the ASCII value of the character using `int(ch)`.
    *   Displays the UTF-8 representation (which is the same as ASCII for characters in the basic ASCII range).
    *   Shows the UTF-16 representation by casting the character to `wchar_t` and then to `int`.
    *   Displays the UTF-32 representation by casting the character to `char32_t` and then to `int`.

4.  **`convertTextToASCII` Function:**
    *   Takes a string as input.
    *   Iterates through each character in the string.
    *   Prints each character along with its ASCII value.

5.  **`displayCommonSymbols` Function:**
    *   Displays a formatted table of common symbols, their descriptions, and their ASCII values.

6.  **Main Logic (`main` function):**
    *   The `main` function contains the main loop that displays the menu and processes user input.
    *   A `switch` statement handles the different choices.
    *   Calls the appropriate function based on the user's choice.
    *   Includes basic input validation for the "Convert number to ASCII" option.

## Future Enhancements

*   **Base64 Encoding/Decoding:** Implement Base64 encoding and decoding functionality.
*   **UTF-8 Encoding/Decoding:** Add functions to convert between UTF-8 and other encoding formats.
*   **More Encoding Support:** Include support for other encoding schemes (e.g., Latin-1, ISO-8859-1, etc.).
*   **String Encoding Conversion:** Allow conversion of strings between different encoding formats (e.g., UTF-8 to UTF-16).
*   **Input Validation:** Implement more robust input validation to handle invalid characters or input formats.
*   **Error Handling:** Add error handling for potential issues like invalid input or encoding errors.
*   **User Interface Improvements:**
    *   **CLI Enhancements:** Use libraries like `ncurses` for a more interactive command-line interface.
    *   **GUI:** Consider creating a graphical user interface for a better user experience.
*   **Character Lookup:** Add a feature to search for a character by its encoding value.

## Technologies Used

*   **C++:** The core programming language.
*   **Standard Template Library (STL):** Uses `<iostream>` for input/output, `<iomanip>` for formatting, `<string>` for string manipulation, `<locale>` and `<codecvt>` for more advanced character handling (although not fully utilized in this basic version).

## Conclusion

This Universal Code Converter provides a useful tool for understanding and working with character encodings. The program demonstrates several important C++ concepts and can be extended to support more encoding schemes and functionalities. The suggested enhancements would make the program more comprehensive and user-friendly. It's a good example of how C++ can be used for text and character processing.
