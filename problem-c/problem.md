# Problem C. Certainly Best

### Input File: `standard input`
### Output File: `standard output`
### Time Limit: `1 second`
### Memory Limit: `1024 megabytes`

There are **n** people. Each two people among them are either friends or not. Friendship is **bidirectional**.

Each person wants to select **best friends** — some non-empty subset of their friends. The only condition they want to satisfy is that **all sets of best friends among n people must be unique**. Note that the “being the best friends” property may not be bidirectional (i.e., it is possible that X is the best friend for Y, but Y is not the best friend for X).

You are given all friendships. Find any possible selection of sets of best friends such that the **total size of sets of best friends is minimum possible**. Or you should state that it is impossible to find such a selection.

---

## Input

- The first line contains a single integer **t** (1 ≤ t ≤ 10⁴) — the number of test cases. Next lines contain descriptions of test cases.
- The first line of each test case contains a single integer **n** (2 ≤ n ≤ 500) — the number of people.
- Then **n − 1** lines follow, the **i-th** line contains a string of length **n − i** consisting of characters `0` and `1`.  
  - For each **j** (i < j ≤ n), the (**j - i**)-th character of this string is **1** if **i** and **j** are friends, and **0** otherwise.

It is guaranteed that the sum of **n²** does not exceed **2.5 × 10⁵**.

---

## Output

Print answers to test cases in the given order.

- If it is **impossible** to select sets of best friends to satisfy the conditions, print a single integer `-1`.
- Otherwise, print **n** lines.
  - The **i-th** line should start with **sᵢ** (**sᵢ ≥ 1**) — the number of selected best friends for the **i-th** person.
  - Then **sᵢ** different integers **aᵢ,₁, ..., aᵢ,sᵢ** (1 ≤ aᵢ,ⱼ ≤ n, aᵢ,ⱼ ≠ i) should follow — best friends of the **i-th** person.
  - For each **j** (1 ≤ j ≤ sᵢ), people **i** and **aᵢ,ⱼ** should be friends.

All sets `{aᵢ,₁, ..., aᵢ,sᵢ}` should be **different** for each person.  
The total sum of **∑ sᵢ** should be **minimum possible**.

If there are **multiple possible answers**, you should print **any**.

---

## Example

### **Input**
```
2
5
1000
011
1 3
10
2 2 4
3
11
0
```

### **Output**
```
1 2
1 1
1 4
1 3
2 2 4
-1
```