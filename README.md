# Moved to [https://github.com/prolang-tutorials/tutorials](https://github.com/prolang-tutorials/tutorials)

# .cpp
This is the C++ Tutorial Repository for ProLang Tutorials. If you wish to teach a new library that hasn't been covered in the tutorial already, in the Libraries folder, please make a new folder with the name of the library. Example: &lt;cctype>

To use, either download, or copy paste into your editor. Access the .cpp file for that lesson, put what you want to run INSIDE main(), go to your terminal, find the directory you are currently in, and compile.


## Useful terminal commands:

```bash 
$ ls -lt
``` 
- This shows the contents of the current directory you are in. ls is the command for listing files and directories where you currenly are, -l formats it a tad, and -t lists by last edited. The file at the top should be your main.cpp file, if it isn't you are in the wrong directory

```bash
$ cd (directoryName)
```

or 

```bash 
$ cd ..
``` 
- This goes back one directory. cd is the Change Directory command. .. after it takes you back one directory. The name of a directory in the one you are in currently can be put in after cd to take you to that directory.

```bash
$ g++ (fileName).cpp -std=c++17
```
- If you are running Windows or Mac, this will compile your code, and make a file in the directory you are currently in. This file is called a.out.

```bash
$ ./a.out
``` 
- This will run the computer-generated code you just compiled, and will run your code!

# Contributing

If you want to help, fork, or pull, and I will see what you can do, and most likely add you.

Commit Format - (Header: Commit (Commit Number) C-E-D (Add letter if Create/Edit/Deleted Files in commit), Body: (Files Created | Files Edited (If any) | Files Deleted (If any) | Synopsis))

I'm sorry for the unorthodox commit format, but this is very important for myself, and beign able to quickly run through Version Control
to find what went wrong where, and why.

# Collaborators 
- Orest Brykowytch
