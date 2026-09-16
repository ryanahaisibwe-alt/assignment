**Function:** `mean_columns`

**What it does.** --> Prints the average of each column in a matrix.

**Complexity:** O(rows × cols) time, O(1) extra space.

**Key Design Decisions**

- `const&` parameter — avoids copying the nested vector; signals read-only use

- `size_t` indices — matches `vector::size()`'s type, avoids signed/unsigned warnings

- Column-outer loop order — matches print order, but less cache-friendly than row-outer for large matrices

- Early return on empty input — prevents undefined behaviour from indexing an empty vector
