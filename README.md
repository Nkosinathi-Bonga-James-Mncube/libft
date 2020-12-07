# libft
# What is LIBFT?


![wtc](https://user-images.githubusercontent.com/50704452/101298456-b6ba8a80-3836-11eb-8d68-e8e74b8897f5.gif)
- Recreating 28 standard library functions in C lanuage
- Project based on WeThinkCode coding curriculum
- More info on WeThinkCode: https://www.wethinkcode.co.za/

# Language used
![c_programming2](https://user-images.githubusercontent.com/50704452/101298658-bff82700-3837-11eb-82ea-529432360815.jpg)
- C

 
 # Requirements of the project:
 - Student are given the prototype for functions and must re-create behaviors as the originals
 - Heap allocated memory space must be properly freed when necessary (e.g use for Malloc)
 - A Makefile must be used to create a static library called `libft.a`
 - To use functions in library the header `libft.h` is  used
 
 To get a full detail list, please refer to the pdf:
 
  - https://drive.google.com/file/d/1TfamMsyEViL0BiF7JoecFWGvTHw0mruV/view
 
 
# Installation
 > NOTE: Alternatively .gif step-by-step instructions at the bottom too
 1. Create a new folder (e.g `test_libft`)
 2. `git clone` repo inside `test_libft`
 3. Enter `/libft` folder
 4. To compile Makefile type:
 ```C
 make re
 ```
 5. Go back to `/test_libft`
 
 #### To test LIBFT library
 > NOTE: Alternatively .gif step-by-step instructions at the bottom too
 1. Inside `/test_libft` create a file 'eg. `test.c`
 2. Open `test.c` and add library header`#include 'libft/libft.h'`
 3. Create a int main()
 4. Add a function from `libft.h` folder e.g (`ft_putstr("Hello World")`) <- `ft_putstr` is a LIBFT function to display a string to standard output
 5. To compile file type:
 ```C
 gcc test1.c libft/libft.a
 ```
 6. To execute file type:
 ```C
 ./a.out
 ```
 7. You should see `Hello World` displayed to standard output
# Makefile commands
 - `make re` - recompile library when changes are made to functions
 - `make clean` - removes all function objects
 - `make fclean` - removes all function objects created with library object
 # Demo of Installation and Testing library
 ### Installation
 ![makefile](https://user-images.githubusercontent.com/50704452/101298031-a1446100-3834-11eb-90eb-3f502ce13a29.gif)
  ### Test library
  ![output](https://user-images.githubusercontent.com/50704452/101298118-1adc4f00-3835-11eb-923e-278d15634e4f.gif)
