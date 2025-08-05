# Textor - CLI code editor that allows you to write code directly in the terminal and compile it there

### How to use:
```
                   Small CLI redactor for C++
                      for quit enter ':q'.   

Enter file name to save all content (without extension): test
Enter file name extension: .cpp
```


```
Edit: test.cpp

1 | #include <iostream>
2 | 
3 | int main(void) {
4 |     std::cout << "Hello, World!";
5 |     return 0;
6 | }
7 | 
8 | :q
```

```
Compiling: test.cpp

Hello, World!
```