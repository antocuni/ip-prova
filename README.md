Simple programming exercises
=============================

To start, you need to "clone" this git repository:

```
$ apt install git # if necessary
$ git clone https://github.com/antocuni/programming-exercises.git
...

$ cd programming-exercises/es01-simple-linked-list
```

- The first exercise is to implement a simple linked list

- `SimpleList.h` contains the definition of the type and functions. You are
  **NOT** allowed to modify it.
  
- You need to create `SimpleList.cpp`

- `test01.cpp` and `test02.cpp` are two programs to test that your functions
  work. I strongly suggest to do them in order:
  
  1. Write the minimal amout of code needed to pass `test01`: do **not**
     implement `SimpleList_push_back` and `SimpleList_print` at this stage.
  
  2. Check that `test01` passes.
  
  3. Try to run `test02`: it will fail.
  
  4. Modify `SimpleList.cpp` so that `test02` passes
  
  5. Check that `test01` still passes


- To compile a test, you can use the provided `compile.sh` script. You are
  encouraged to look inside the script and/or to compile the program manually
  if you want.



Example session:

```
$ git clone https://github.com/antocuni/programming-exercises.git
$ cd programming-exercises/es01-simple-linked-list

# the following happens because we have not yet created SimpleList.cpp
$ ./compile.sh test01
g++: error: SimpleList.cpp: No such file or directory

# create the file in the editor and try again...

$ ./compile.sh test01
$ ./test01 
Test01 OK

# try test02: it will fail because we have not yet created some functions...

$ ./compile.sh test02
/usr/bin/ld: /tmp/cclUd7oX.o: in function `main':
/.../es01-simple-linked-list/test02.cpp:10: undefined reference to `SimpleList_push_back(SimpleList*, int)'
/usr/bin/ld: /.../es01-simple-linked-list/test02.cpp:11: undefined reference to `SimpleList_push_back(SimpleList*, int)'
/usr/bin/ld: /.../es01-simple-linked-list/test02.cpp:15: undefined reference to `SimpleList_print(SimpleList*)'
collect2: error: ld returned 1 exit status

# modify SimpleList.cpp and try again

$ ./compile.sh test02
$ ./test02 
Calling SimpleList_print...
123
456
Done!

test02 completed. Check that it printed the following
    123
    456
```
