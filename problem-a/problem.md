# Problem A. A+Branding

### Input file: `standard input`
### Output file: `standard output`
### Time limit: `1 second`
### Memory limit: `1024 megabytes`

The Inter-Galaxy Programming Championship takes place in three divisions: **A, B,** and **C**. The number of problems in each division **n** is the same (from **11 to 14**). Some problems may be present in all divisions, some in two adjacent ones, or only in one. Thus, the total number of problems may be less than **3n**.

The organizers of the final decided to create the statements for some problems in collaboration with the general partner of the championship, the company **BrainJets**, and in each division, the number of joint problems turned out to be exactly **k**.

Given **n** and **k**, as well as the distribution of problems by rounds, determine the **minimum number of problem statements** that could have been created in collaboration with the **BrainJets**.

## Input

- The first line of input contains one integer **n** (**11 ≤ n ≤ 14**) – the number of problems in each division.
- The second line contains one integer **k** (**1 ≤ k ≤ n**) – the number of problems in each division whose conditions were created in collaboration with the company **MTS**.
- The third line contains **n** pairwise distinct numbers in the range from **1 to 5 × 10⁵** – unique problem numbers for **division A** in the Polyhedra problem preparation system.
- The fourth line contains **n** pairwise distinct numbers in the range from **1 to 5 × 10⁵** – unique problem numbers for **division B** in the Polyhedra problem preparation system.
- The fifth line contains **n** pairwise distinct numbers in the range from **1 to 5 × 10⁵** – unique problem numbers for **division C** in the Polyhedra problem preparation system.

The same problem number can:

- either appear only in one of the lines from the third to the fifth;
- or appear in all three lines from the third to the fifth;
- or appear in any pair of lines that includes the fourth line.

This means that the corresponding problem is:
- present **only in one division**, or
- present **in all three divisions**, or
- present in **one of the two pairs of adjacent divisions** (A and B or B and C).

## Output

Output one integer – the **minimum number of problems whose statements were created in collaboration with BrainJets**.

## Example

### **Input**

standard input
```
13
3
522 575 426 445 772 81 447 629 497 202 775 325 982
784 575 426 445 417 81 447 629 156 932 902 728 537
784 857 426 739 417 81 447 918 156 932 902 728 537
```

standard output
```
3
```