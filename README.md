# T9 Autocomplete

This project implements a T9-style autocomplete system using a Trie (prefix tree) structure. The program allows users to input the first letters of a word and suggests possible completions based on the pre-loaded dictionary.

## Features

- Insert words into a Trie structure.
- Autocomplete words based on initial input.
- Display suggestions and allow users to choose from the suggestions.
- Maintain word frequency to prioritize common words.

## Prerequisites

- C++ Compiler (e.g., g++, clang++)
- Git (to clone the repository)
- [Git Bash](https://gitforwindows.org/) (for Windows users)

## Installation

1. **Clone the repository:**

    Open your terminal and run the following command:

    ```bash
    git clone https://github.com/Havpen/tNine.git
    ```

2. **Navigate to the project directory:**

    ```bash
    cd tNine
    ```

3. **Compile the program:**

    Use the following command to compile the program:

    ```bash
    g++ -o t9 main.cpp Trie.cpp
    ```

    This command will create an executable file named `t9`.

## Usage

1. **Run the program:**

    ```bash
    ./t9
    ```

2. **Interact with the program:**

    - The program will prompt you to enter the first letters of a word.
    - Based on your input, it will suggest possible completions.
    - You can choose a word from the suggestions or continue typing more letters.
    - Type `0` to exit the program.

## Files

- `main.cpp`: Contains the main function and user interaction logic.
- `Trie.cpp`: Contains the implementation of the Trie data structure and related functions.
- `Trie.h`: Header file for the Trie data structure.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## Contact

If you have any questions or suggestions, please open an issue in this repository.
