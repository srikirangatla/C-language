 What Are Keywords in C?
Keywords are reserved words in C.

They have predefined meaning and cannot be used as identifiers (like variable names or function names).

These keywords are the foundation of the C language syntax and control.

✅ List of Important C Keywords (Grouped + Explained)
We’ll cover:

Data Types

Storage Classes

Control Flow

Loops

Functions

Type Qualifiers

Special Purpose

📦 1. Data Type Keywords
Keyword	Description
int	Integer data type
char	Character data type
float	Floating-point number
double	Double-precision floating-point
short	Shorter version of int
long	Longer version of int/double
signed	Can hold negative values
unsigned	Only positive values
void	No return or no type (e.g., void func())
📦 2. Storage Class Keywords
Keyword	Description
auto	Default for local variables (rarely used)
static	Retains value across function calls
extern	Declares global variable from another file
register	Suggests storing variable in CPU register (rare now)
🔁 3. Control Flow Keywords
Keyword	Description
if, else	Conditional execution
switch	Multi-branch selection
case	Label for switch
default	Default case in switch
goto	Jump to a label (discouraged use)
return	Return from a function
break	Exit a loop/switch
continue	Skip current iteration of loop
🔂 4. Loop Keywords
Keyword	Description
for	For loop
while	While loop
do	Do-while loop
🧩 5. Function/Declaration Related
Keyword	Description
void	No return or no argument type
return	Used to return a value from a function
🧷 6. Type Qualifiers
Keyword	Description
const	Prevents modification after initialization
volatile	Tells compiler not to optimize access (important in embedded systems, e.g., for hardware registers)
restrict	Pointer is the only reference to an object (C99, used for optimization)
🔧 7. Special Purpose
Keyword	Description
sizeof	Returns size in bytes of a type or variable
typedef	Creates new type names (aliases)
struct	User-defined group of variables
union	Shared memory for multiple variables
enum	Named constants (enumerations)
💬 Sample Interview Question
🟩 Q: What’s the difference between const and #define?

🟦 A: #define is a preprocessor directive (replaced before compilation), while const is a type-safe variable known to the compiler and has a memory location. const can be used with pointers and respects scope and type checking.

🔥 How to Impress in an Interview
Instead of just listing, say:

“In embedded systems, I often use volatile for memory-mapped hardware registers to prevent compiler optimizations. Also, static is useful for preserving state across ISR calls or hiding variables at file scope. Understanding how keywords interact with memory and optimization is critical in firmware.”

