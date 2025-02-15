# Problem J. J322

**ICPC 2024/2025: Georgian Regional Contest**  
*Tbilisi, Kutaisi, Sunday, November 17, 2024*

### Input File: `standard input`  
### Output File: `standard output`  
### Time Limit: `1 second`  
### Memory Limit: `1024 mebibytes`  

---

### **This is an interactive problem.**

For a large telecommunications operator, the **diversification** of the equipment used while maintaining the **unification** of the software is a **vital issue**. Therefore, the engineers of the company **Cell-U-Lari** decided to investigate the **portability of system software** between fundamentally different types of processors.

A **module for auto-adaptation**, code-named **J322**, is planned to be developed, which will **recognize the architecture** of the microprocessor and generate **efficient code** for it. Your task within this development is to **write a module that distinguishes between two types of input-output stream organizations: stack and queue**.

You are given a **data structure** `p`, which represents **either a stack or a queue**. The structure **can be empty** or contain **a certain number of elements** (no more than **297**).

Your module has **exclusive access** to the structure and can **make up to 300 requests** of one of two types:
- **put x** → Add the number `x` (**1 ≤ x ≤ 1000**) to the data structure.
- **get** → Retrieve the value from the **head of the queue** (or **top of the stack**) and remove the corresponding element.

If the structure is **empty**, you receive a special message.

After **300 requests** (or earlier), you **must determine** whether it is a **stack or a queue**.

---

## Interaction Protocol

The interaction begins with **your program outputting one of the commands**:

1. **Placing an element in the data structure:**  
   ```
   put x
   ```
   where **1 ≤ x ≤ 1000**.
   
2. **Removing an element from the structure:**  
   ```
   get
   ```
   - The jury program will output a **single integer**:
     - The **value of the retrieved element**.
     - `-1` if the structure is empty.

It is **guaranteed** that the **structure initially contains no more than 297 elements**.

### **Final Answer**
Once you have determined whether the structure is **stack** or **queue**, output:
```
stack
```
if it is a stack, or
```
queue
```
if it is a queue.

This action **does not count towards the number of requests**.

### **Important Notes**
- The **interactor is adaptive**, meaning the **final answer is constructed during the interaction**.
- The interactor **always satisfies all available information and the problem conditions**.

---

## Example

### **Standard Input**
```
put 3
put 4
get
3
```

### **Standard Output**
```
queue
```

---

## **Explanation of the Example**

| **Standard Input (Commands Issued)** | **Standard Output (Response from Interactor)** |
|--------------------------------------|----------------------------------------------|
| `put 3`                              | *(No output, element added)*                |
| `put 4`                              | *(No output, element added)*                |
| `get`                                 | `3` *(Element retrieved - behaves like a queue)* |
| `3` *(Final answer - inferred from previous interactions)* | `queue` |

- In this case, since **`get` retrieves `3` (the first inserted value), it behaves like a queue (FIFO)**.
- Thus, the correct answer is `queue`.
