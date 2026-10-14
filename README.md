# Library Management System (C++)

A console application for managing a small library: readers, book titles, individual copies, and borrowing. Built for my Data Structures and Algorithms course, with every data structure implemented by hand instead of using the standard library containers.

## Data structures

| Data | Structure | Why |
|---|---|---|
| Readers | Binary search tree keyed by card number | Fast lookup, insert and delete by card number |
| Book titles | Array of pointers (up to 200 titles) | Simple indexed access for search by title, ISBN or category |
| Copies of each title | Singly linked list per title | Copies are added over time and the count varies per title |
| Borrowing history | Singly linked list per reader | Keeps each reader's full history in order |

A few algorithms worth pointing out:

- **Deleting a reader** handles all BST cases, including a node with two children (replaced by the rightmost node of its left subtree).
- **Readers sorted by name** are collected from the tree with a traversal and then sorted, while the tree itself stays ordered by card number.
- **Most borrowed books** walks every reader with a breadth-first traversal and counts how often each title appears in the borrowing records.
- **Overdue readers** compares each open loan's borrow date with today's date.

## Features

- **Readers**: add (a unique random card number is assigned automatically), edit, delete, list by name or by card number, list overdue readers
- **Borrowing**: borrow (maximum 3 books per reader), return, view a reader's history
- **Books**: add titles and copies, search by title or category, list the most borrowed books
- Input validation for names, numbers, codes and dates; confirmation before destructive actions
- Data is loaded from and saved to text files: `DocGia.txt` (readers), `DauSach.txt` (books), `MuonTra.txt` (loans)

Navigation uses the arrow keys, Enter to select and Esc to go back. The interface is in Vietnamese.

## Build and run

Windows only, since it uses `Windows.h` and `conio.h` for cursor positioning and key input.

```bash
g++ main.cpp Back.cpp Font.cpp -o library.exe
library.exe
```

Run it from the project folder so it can find the data files. The project can also be opened in Dev-C++ via `Project1.dev`.

## Files

| File | Contents |
|---|---|
| `main.cpp` | Menus and navigation |
| `Back.h`, `Back.cpp` | Data structures, file I/O and all list, tree and search operations |
| `Font.h`, `Font.cpp` | Console drawing: cursor position, colors, menus and table cells |
