# Problem M. Modern Artist and Ancient Legend

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `2 seconds`  
### Memory Limit: `1024 mebibytes`  

---

Ancient Roman philosopher **Seneca** was the tutor of the future emperor **Nero**. Nero once asked him how great a number may be. Seneca answered that there are numbers so large that even the wisest citizens of Rome cannot imagine them; for example, numbers that can be created by **multiplying usual Roman numbers greater than 1**. 

To avoid the possible ambiguity, Nero decided that **only the integers that have a unique representation** in this form are counted.

Now a modern artist decided to create an installation dedicated to Nero and Seneca and wants to use some **positive integers not exceeding 10¹⁸** in it. But he wants to be sure that they can be **uniquely represented as a product** of one or several numbers greater than 1 **in Roman numeral representation**.  

More formally, the representations are **counted as one representation if they are identical as the multisets**, so the representations `4 ⋅ 2` and `2 ⋅ 4` are **the same representation**.

Any **positive integer strictly less than 4000**, and **only them**, has a unique representation in Roman numerals. Other rules for writing Roman numerals are well known to all participants, so they will not be provided here for brevity.

---

## Input

- The first line of the input contains **one integer** `t` (**1 ≤ t ≤ 2 × 10⁵**) — the number of test cases.
- Each of the following `t` lines describes **one test case** and contains **one integer** `n` (**2 ≤ n ≤ 10¹⁸**) that needs to be checked.

---

## Output

For each request:
- Print **1** on a separate line if the number **can be uniquely represented** as a product of **Roman numerals greater than 1**.
- Print **0** otherwise.

---

## Example

### **Input**
```
4
2024
2025
2026
2027
```

### **Output**
```
0
0
0
1
```

---

## **Explanation of the Table in the Example**

| **Standard Input** | **Standard Output** |
|--------------------|--------------------|
| 4                 |                    |
| 2024             | 0                  |
| 2025             | 0                  |
| 2026             | 0                  |
| 2027             | 1                  |

- The number **2024** cannot be uniquely represented as a product of Roman numeral values **greater than 1**, so the output is `0`.
- The number **2025** also does not have a unique representation, so the output is `0`.
- The number **2026** follows the same rule, outputting `0`.
- However, **2027** has a **unique product representation**, so the output is `1`.
