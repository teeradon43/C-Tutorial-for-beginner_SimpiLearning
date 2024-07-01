# Lesson 3 - Difference Between C, C++ & Java

This lesson compares C, C++ and Java which seems not that useful and some information are inaccurate.
Here are some of the comments on this lesson.

I disagree with many of the points made. Here are some of my problems:

1. Object-Oriented Programming
I have a minor problem with this comparison. C++ is presented as an OOP language, but you can write in it programs fully procedurally (actually it's same with Java). I don't want to dwell on this point too much, because I belive in general the categorization of languages by programming paradigms is almost useless. That is because of how vague the definitions are and how paradigms like procedural/object-oriented/functional are really more about the way you construct code. I can write C code in OOP way (with inheritance, polymorphism etc) or functional way. The difference is just how given language's features help me to follow given style.

On this point you also said that "Java supports Cross platforms". I don't see how is it related to the question of programming language paradigm, but I don't see how isn't C or C++ Cross platform. It wasn't defined what is meant by langauge being "Cross platform", so I cannot really say anything more.

2. Platform Dependency
You've said that if I write code in C I cannot use it for both Windows and Linux operating systems without making changes to the code. That is not true. As long as I don't directly call windows or Linux specific functions, but use the C standard library (+ additionally libraries with cross platform support) I do not need to change a single line of code. Sure if I write my code using say Windows API functions I will need to change that when porting to Linux, but in contrast to Java (without external tools) I can actually do that. So C/C++ has an additional ability of being able to call system specific function and it's seen as a downside?

But also really it's not even a language comparison subject. The platform dependability can be argued over only a given implementation of a language. So for example if I use a tool like GCC-Bridge (https://github.com/bedatadriven/renjin/tree/master/tools/gcc-bridge ) I can compile my C/C++ code to Java bytecode and run it on the same JVM as the program written in Java.

3. Enterprise Support
I don't think I understand what does it even mean. from 3:59: "Enterprise support is [...] where multiple programmers [...] work on a single goal". So I guess you mean something like how much a language is helping you in working on the same program in a team? So then what are the differences in C/C++/Java? You've only stated the "level" of support so I have no idea what do you mean.

4. Compiler Operational Procedures
It's similar to what I've said in point 2. The implementation is separate from the language. But ok, I guess implicitly we are talking about the most popular implementations of languages. 
The given explanation of how Java is usually implemented is somewhat confusing, but I will give it a pass, because it's actually a quite complicated process so it's hard to provide a quick, simple and accurate description.
However the point at 5:35 "[Java] sometimes provides you suggestions when you're using [...] IDE like Eclipse" doesn't make a lot of sense. This is done by a code completion tool (often refered to as intellisense) which is separate from the implementation of the language (although it can share code base with an implementation). But also C and C++ both have many code completion tools which are used in many different IDEs so I don't see why would you only single out Java on this one.

6. Datatypes and Keywords
I don't see how the number of keywords matter, but it actually depends on the version so the accurate counts are:
Java 1.0: 47
Java 1.2: 48
Java 1.4: 49
Java 5.0: 50
C89: 32
C99: 37
C11: 44
C++98: 63
C++11: 73
(although in C++ the alternative representations for operators and punctuators might also be counted as keywords depending on your interpretation of the standard and then you need to add 11 to both of the numbers above).
So (besides the fact that it doesn't matter) why show the number of keywords from the most recent Java implementation but not most recent C and C++ implementations?

8. Exception Handling
I don't see how doesn't C++ support exception handling. It has all the tools to handle exceptions just like you do in Java. I will concede that for example in C++ the build-in array types don't throw exceptions on index out of bounds, but I would argue that it's a good thing. And the reason it's a good thing is because you can implement your own wrapper on the build-in array types (or use std::array/std::vector) with exceptions. So in C++ you can choose between having exceptions and not having exceptions (which can be better for performance), but in Java you have no choice.

10. Data Security
If I wouldn't find so many inaccuracies in this video I would assume that it's just a poor choice of words, but it really seems like you are claiming that encapsulation has something to do with security in a cybersecurity sense? Encapsulation is about not using the object's data (and possibly some methods) directly instead of using "public" methods. And it is just enforced in the implementations by not allowing you to use fields or methods labeled as private (or protected). It's a constraint on a programmer during coding-time and not on a program during run-time. I can't belive I'm even writing this stuff. 
And also I really wonder what "advanced level objected oriented programming language [...] special features for data security" are.

11. Multi-Threading
C++11 does support multi-threading.

12. Support for Constructors and Destructors
Destructors are not replaced by Garbage Collector in Java. In Java the destructor is the finalize() method which every class can override. It's different from the destructor in C++, because in C++ the time in which the destructor is called is deterministic, however in case of Java the finalize() method can be called at any time by the garbage collector after the object is no longer being used. This means that the typical job of a destructor in C++ which is to free all of object's resources (yes including allocated memory, but it's not limited to that) cannot be done using finalize() method in Java.
So for example in C++ if my class opens a file I can close it in the destructor and be sure that after the object is destroyed the file is free to be opened again. In case of Java, because this problem cannot be solved using finalize() method, they introduced AutoCloseable interface and the try-with-resources statement so that you can deterministically "destroy" your objects.

15. Pre-processor Directives
Preprocessor directive is a term defined in C and C++ standards which basically means any line which starts with # followed by the directive name. I'm pretty sure you've ment something along the lines of "library access" instead.