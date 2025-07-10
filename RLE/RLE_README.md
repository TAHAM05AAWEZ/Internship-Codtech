## Task 4 – Run-Length Encoding (RLE)

Run-Length Encoding (RLE) is a basic technique of lossless data compression where sequences of repeated characters are stored as a single character followed by the count of its repetitions. For example, the string "aaabb" becomes "a3b2" after compression. It is useful for minimizing storage size when dealing with repetitive data, such as simple image or text files.

This task involves developing a C program that demonstrates both compression and decompression using RLE. The user is prompted to either compress a string or decompress an RLE-encoded string. For compression, the program traverses the input and replaces sequences of the same character with that character followed by the number of times it appears consecutively. For decompression, it interprets the character followed by the number and rebuilds the original sequence.

The program ensures that user interaction is simple, using a menu where the user inputs 'c' or 'd' to select compression or decompression, respectively. Input is captured using `fgets()` for better handling of spaces and multi-word strings. Loops and conditionals manage the logic for parsing characters and applying the encoding/decoding rules. This task demonstrates how compression algorithms can optimize memory use and bandwidth, especially in scenarios where repetitive data is common.

### Files Included

* `Task4_RLE.c` – Source code containing both compression and decompression functions.
* `README.md` – Explains the logic, functionality, and expected I/O for the program.

### Sample Output

Below is a sample output reflecting both compression and decompression processes handled by the program:

```bash
===== RLE Compression & Decompression =====
Enter 'c' to compress or 'd' to decompress: c
Enter the string to compress: aaabbbbbccddddeee
Compressed: a3b5c2d4e3

===== RLE Compression & Decompression =====
Enter 'c' to compress or 'd' to decompress: d
Enter the RLE encoded string (e.g., a3b2): a3b5c2d4e3
Decompressed: aaabbbbbccddddeee
```
---
