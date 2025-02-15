# Problem B. Big Deadline

### Input file: `standard input`
### Output file: `standard output`
### Time limit: `1 second`
### Memory limit: `1024 megabytes`

Two programmers, Nikoloz and Bakhodir, are working on a very important project. They still have some tasks to complete, and the deadline is approaching! Fortunately, everything is already discussed, the tasks are distributed between Nikoloz and Bakhodir, and the time needed to complete each task is calculated. The only thing remaining is to decide in which order they will complete these tasks. The guys don’t like doing many tasks simultaneously, so they decided to order the tasks (each person will order his problems) and then complete them one by one in that order.

Unfortunately, there is a small issue. Some tasks are “developer tasks” and some are “tester tasks.” This means that in some tasks the guys are required to add some features to the project, and in other tasks, they need to test the application they develop. Of course, every developer task (even assigned to another person) needs to be completed **strictly before** any tester task is completed. Note that a person may start doing a tester task **before** the completion of the developer tasks: the tester may start the testing process with the existing features (but cannot completely test the application without all planned features).

You are the project manager of this project, and your goal is to watch after the guys so they do not waste any time. This means that **immediately after one of the guys completes some task, he needs to start doing some other task assigned to him** (unless he has already completed all his tasks, of course). More than that, the guys have to start working immediately and simultaneously. Each programmer is free to choose **any order of tasks assigned to him**, but the condition about developer and tester tasks should be satisfied.

You wonder **how many correct ways for the programmers to order their own tasks** there are in total. As this number might be very large, **calculate it modulo 998244353**. Two ways are considered different if and only if there are two tasks assigned to one person such that in the first order, the first task is completed **before** the second task, and in the second order, the second task is completed **before** the first one.

---

## **Input**

- The first line contains two integers **n** and **m** (**1 ≤ n, m ≤ 10⁵**) — the number of tasks for **Nikoloz** and **Bakhodir** to solve, respectively.
- The next **n** lines contain the description of **Nikoloz's** tasks. Each line contains:
  - An integer **tᵢ** (**1 ≤ tᵢ ≤ 10⁹**) — the time to complete this task.
  - A letter **cᵢ** (**cᵢ ∈ {T, D}**) — `"D"` if this task is a **developer task**, `"T"` if this task is a **tester task**.
- The next **m** lines contain the description of **Bakhodir's** tasks in the same format.

---

## **Output**

- Print **one integer** — the number of correct ways to order the tasks **modulo 998244353**.

---

## **Example**
### **Input**
```
2 2
8 T
100 T
3 D
5 D
```
### **Output**
```
2
```

---

### **Input**
```
2 1
10 D
3 T
1 D
```
### **Output**
```
1
```
