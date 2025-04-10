🔧 restrict Keyword in C (C99)
🔹 Definition:
The restrict qualifier tells the compiler:
"For the lifetime of this pointer, only it (or a pointer directly derived from it) will access the object it points to."

🎯 Why Use restrict?
It removes the possibility of pointer aliasing.

That gives the compiler freedom to aggressively optimize code.

🧠 Pointer Aliasing? What's That?
If two pointers point to the same memory, compiler must assume:

Changing one might affect the other.

➡️ So, the compiler avoids reordering reads/writes to avoid bugs — which limits optimization.

🔥 With restrict, You Say:
“Trust me, these pointers don't overlap. You can optimize freely!”

📌 Real-World Example: Without vs With restrict
❌ Without restrict:

void add_arrays(int *a, int *b, int *c, int n) {
    for (int i = 0; i < n; i++)
        a[i] = b[i] + c[i];
}
The compiler can't assume a, b, and c point to different memory. ➡️ So it must do safe, sequential operations.

✅ With restrict:

void add_arrays(int *restrict a, int *restrict b, int *restrict c, int n) {
    for (int i = 0; i < n; i++)
        a[i] = b[i] + c[i];
}
Now the compiler knows there's no overlap. ➡️ It can:

Pipeline loads/stores

Vectorize

Use SIMD

Reduce cache reloads

🚀 This can mean huge performance boosts in DSP/audio/image/memory firmware code.

✅ Embedded Optimization Benefits
Benefit	How restrict helps
Speed up memcpy/memset-like ops	Enables loop unrolling, vectorization
Faster DSP/math libs	Allows register reuse, instruction fusion
Reduces unnecessary memory reads/writes	Improves battery + performance
⚠️ Big Warning: Misuse = Undefined Behavior

void func(int *restrict a, int *restrict b) {
    a[0] = 10;
    b[0] = a[0] + 5;
}
If a and b point to the same memory, you're violating restrict rules → undefined behavior!

✅ Only use restrict when you're 100% sure pointers don’t overlap.

💬 In an Interview, Say:
"I use restrict in performance-critical firmware, especially for functions doing memory copies or math on buffers. It tells the compiler there's no aliasing, so it can apply aggressive optimizations like loop vectorization or instruction scheduling."

🔁 Bonus: Combine with const + restrict

void process(const int *restrict input, int *restrict output, int n);
const → input buffer won't be modified.

restrict → no aliasing with output.

Perfect for DSP or sensor data processing!

