# Problem L. Laura and Arrays

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `5 seconds`  
### Memory Limit: `1024 mebibytes`  

---

There is an array **a** of length **n** consisting of **independent uniformly random integers** `aᵢ` (1 ≤ aᵢ ≤ 10⁹).  
Also, there is an array **b** of length **n** consisting of **independent uniformly random integers** `bᵢ` (0 ≤ bᵢ ≤ 1).  

Laura wants to erase some (**possibly zero**) elements from array **a**, then take the **prefix** of array **b** with the **matching length**, and **maximize the resulting dot product** of the arrays (i.e.  
**∑ aᵢ * bᵢ**). Help her to do that.

---

## Input

- The **first line** contains **one integer** `n` (**1 ≤ n ≤ 4 × 10⁵**) — the length of the arrays **a** and **b**.  
- The **second line** contains `n` integers **a₁, ..., aₙ** (**1 ≤ aᵢ ≤ 10⁹**) — the elements of the array **a**.  
- The **third line** contains `n` integers **b₁, ..., bₙ** (**0 ≤ bᵢ ≤ 1**) — the elements of the array **b**.  

### **Additional Constraints**
- It is **guaranteed** that in all tests (except the first one from the examples), all numbers **aᵢ** and **bᵢ** are generated **independently from a uniform distribution** over the corresponding ranges.  
- It is **guaranteed** that there are **no more than 20 test cases in total**.

---

## Output

Print **one number** — the **maximum possible dot product** after erasing **some** elements from array **a**.

---

## Example

### **Input**
```
8
1 4 6 5 1 2 3 6
1 0 1 0 1 0 0 1
```

### **Output**
```
15
```

### **Input**
```
4
843693973 430360361 788359887 531088030
1 1 1 0
```

### **Output**
```
2163141890
```

---

## **Explanation of the Example**

| **Standard Input**                            | **Standard Output** |
|----------------------------------------------|---------------------|
| `8`                                          | `15`               |
| `1 4 6 5 1 2 3 6`                            |                     |
| `1 0 1 0 1 0 0 1`                            |                     |
| `4`                                          | `2163141890`       |
| `843693973 430360361 788359887 531088030`    |                     |
| `1 1 1 0`                                    |                     |

### **Explanation of First Example**
- We can **erase** the **first, fifth, and sixth elements** from **a**.
- The result will be the **dot product** of the arrays:
  - **New a** → `[4, 6, 5, 3, 6]`
  - **New b** → `[1, 0, 1, 0, 1]`
- The dot product:
  ```
  4 * 1 + 6 * 0 + 5 * 1 + 3 * 0 + 6 * 1 = 4 + 0 + 5 + 0 + 6 = 15
  ```