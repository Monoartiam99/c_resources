### C Programming — Resources :
- This repository contains a curated collection of C programming questions and answers that are, in my opinion, the most effective way to test and reinforce your understanding of C. There are many ways to study C, but simply reading without actively questioning yourself leads to shallow understanding. This repository exists to fix that—by putting the question first and letting you think before you look at the answer.

---

## Avoid

> **TutorialsPoint.** TutorialsPoint may seem useful for quick reference, but it is not a good place to learn C from. The explanations are shallow, lack context, and often skip over why things work the way they do. Reading it gives you a false confidence that you understand something when you have only memorized the surface.

> **Random YouTube channels.** Most C-related YouTube content is simplified to the point of being misleading. To keep viewers engaged, creators often skip the hard parts—which are exactly the parts that matter most in C. Pointers, memory management, and undefined behavior are glossed over or explained incorrectly. You may finish a video feeling like you understood and then find yourself completely lost when writing real code.

> **Some similar course platforms.** Many of these courses are outdated, expensive, and lack any proof of the author's actual expertise in C. A course that costs $80 is not automatically better than a free textbook written by the people who designed the language.

> **Copying code without understanding it.** This is perhaps the most dangerous habit a C learner can develop. C gives you direct access to memory. Pasting code you do not fully understand is a reliable way to introduce bugs that are very difficult to trace.


---

## Consider

- Each question is chosen because it targets a concept that students commonly misunderstand or overlook. Before looking at the answer, genuinely attempt to solve it. Write the code. Compile it. If it does not behave the way you expected, that is the most valuable learning moment — do not skip past it.

- **The C Programming Language, 2nd Edition.** Written by Brian Kernighan and Dennis Ritchie, who co-created both C and UNIX. This book is so foundational that it is known universally by the authors' initials alone. It is concise, precise, and written by people who understood C not as a language to be taught but as a tool they built to solve real problems. Some practices in it are dated by modern standards, so read it alongside the errata and supplement it with the C11 standard where needed.

- Beej's Guide to C Programming: This book is arguably the most thorough and well-structured C textbook available today. It covers the language in full, including the C99 standard, and does so with clarity that K&R sometimes lacks for beginners. The exercises at the end of each chapter are genuinely challenging and worth completing in full. [link](https://beej.us/guide/bgc/html/split/index.html)
-
- Written by Brian "Beej Jorgensen" Hall, this is one of the most approachable and accurate free C guides available online. It is written in a conversational tone that does not talk down to the reader, covers the C11 standard, and is actively maintained. It is an excellent companion to a formal textbook — particularly strong on pointers, strings, and types. [link](https://github.com/practical-tutorials/project-based-learning#cc)

- Reading about C and writing C are two entirely different things. This curated list of project-based tutorials forces you to build real, working programs — which is where genuine understanding develops. Working through even one or two projects here will expose gaps in your knowledge that no amount of passive reading would reveal. [link](https://port70.net/~nsz/c/c11/n1570.html)
 
- This is not a tutorial. It is the formal specification of the C language, and it is the final authority on what C is and is not. When you encounter a behavior you do not understand, or when two sources give you conflicting information, this is where you look. Reading the standard also teaches you to think precisely—a skill that makes you a better programmer in any language. [link](https://publications.gbdirect.co.uk//c_book/)
 
- Written by Mike Banahan, Declan Brady, and Mark Doran, this is a complete, university-level C textbook available freely online. It covers the type system, expressions, control flow, functions, pointers, structures, and the standard library in systematic detail. It has been used in formal CS courses for decades and holds up well.
 
- **NASA C Style Guide.** NASA publishes guidelines on how to write C code that is safe, readable, and maintainable for critical systems. Reading it gives you a sense of what professional, production-grade C looks like—a very different standard from code that merely compiles and runs.
 
- **Steve Summit's C Programming Notes.** These notes were originally written to accompany university C courses and expand on topics that K&R treats briefly. They are available freely online and are particularly useful for understanding pointer concepts and common beginner mistakes.

---

## Why Learn C?

There are programmers who consider C not worth learning in an age of Python, Rust, and Go. This is a position worth examining carefully.

C was created by Dennis Ritchie to build UNIX. It was designed to give the programmer direct access to hardware while remaining portable across machines. That combination — low-level control with high portability — is the reason C is still used everywhere, decades later.

Your keyboard is almost certainly running C. So are your router, your microwave, your car's braking system, and the credit card reader at the supermarket. Windows, Linux, macOS, iOS—all written substantially in C. MySQL, PostgreSQL, SQLite—C. The Python interpreter itself is written in C. When you run Python code, C is doing the work underneath it.

C is also a lingua franca among programmers. When researchers publish new algorithms, they often publish the reference implementation in C because it is the language most other programmers can read, regardless of what language they primarily write in. Not being able to read C limits your ability to engage with a significant portion of technical literature.

Beyond the practical arguments: C teaches you how a computer actually works. Memory addresses, stack frames, the relationship between arrays and pointers, what happens when you call a function—these are not abstractions in C; they are concrete realities you work with directly. A programmer who understands C understands what their higher-level code is ultimately doing. That understanding has value regardless of what language you use professionally.

---

## Best Environment for Learning C

Use a UNIX-based system — GNU/Linux or macOS. C and UNIX were built together by the same people for the same purpose. The tools available on a UNIX system—`make`, `gcc`, `gdb`, `awk`, and the `man` pages—are the natural habitat of C programming. If you are on Windows, use WSL (Windows Subsystem for Linux) rather than trying to adapt a development environment that was not designed for this kind of work.

Get comfortable with the terminal. Not because it is fashionable, but because it is the most direct interface to the tools you will use constantly.

---

## How to Use This Repository

Read the question. Close the answer. Try to solve it—write real code, compile it, and run it. If you get it wrong, understand specifically why before moving on. C does not reward rushing. A single poorly understood concept — particularly around pointers or memory — will cause problems that compound over time.

Work through the topics in order if you are a beginner. If you are using this to reinforce or test existing knowledge, use it as a reference and focus on the areas where you are least confident.

---

## Contribute

This repository is based on my own judgement about what questions best target important and commonly misunderstood concepts in C. If you believe a question is incorrect, misleading, or that an important topic is missing, please open an issue or submit a pull request. Constructive disagreement is welcome — the goal is accuracy and usefulness for students, not personal authority.
