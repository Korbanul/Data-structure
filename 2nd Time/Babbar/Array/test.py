from fpdf import FPDF

class PDF(FPDF):
    def header(self):
        self.set_font('Arial', 'B', 12)
        self.cell(0, 10, 'Data Structures and Algorithms Checklist', 0, 1, 'C')

    def chapter_title(self, title):
        self.set_font('Arial', 'B', 12)
        self.cell(0, 10, title, 0, 1, 'L')
        self.ln(4)

    def chapter_body(self, body):
        self.set_font('Arial', '', 12)
        self.multi_cell(0, 10, body)
        self.ln()

    def add_checklist(self, title, items):
        self.add_page()
        self.chapter_title(title)
        self.set_font('Arial', '', 12)
        for item in items:
            self.cell(10, 10, '[]', 0, 0)
            self.multi_cell(0, 10, item)

pdf = PDF()

basic_data_structures = [
    "Arrays\n    - Static and Dynamic Arrays\n    - Multidimensional Arrays",
    "Linked Lists\n    - Singly Linked List\n    - Doubly Linked List\n    - Circular Linked List",
    "Stacks\n    - Implementation using Arrays and Linked Lists\n    - Applications of Stacks (e.g., expression evaluation, backtracking)",
    "Queues\n    - Simple Queue\n    - Circular Queue\n    - Priority Queue\n    - Deque (Double-ended Queue)",
    "Trees\n    - Binary Trees\n        - Properties and Types (Complete, Full, Perfect)\n        - Traversal Methods (Preorder, Inorder, Postorder, Level Order)\n    - Binary Search Trees (BST)\n        - Insertion, Deletion, Search operations\n        - Self-Balancing Trees (e.g., AVL Tree, Red-Black Tree)\n    - Heaps\n        - Min-Heap, Max-Heap\n        - Heap Operations and Applications (e.g., Heap Sort, Priority Queue)"
]

intermediate_data_structures = [
    "Trie (Prefix Tree)\n    - Construction, Search, Deletion\n    - Applications (e.g., Autocomplete, Spell Checker)",
    "Segment Tree\n    - Range Query, Point Update\n    - Lazy Propagation",
    "Fenwick Tree (Binary Indexed Tree)\n    - Point Update, Range Query\n    - Applications",
    "Graphs\n    - Representation\n        - Adjacency Matrix\n        - Adjacency List\n        - Edge List\n    - Graph Traversal\n        - Depth-First Search (DFS)\n        - Breadth-First Search (BFS)\n    - Shortest Path Algorithms\n        - Dijkstra's Algorithm\n        - Bellman-Ford Algorithm\n        - Floyd-Warshall Algorithm\n        - A* Search Algorithm\n    - Minimum Spanning Tree (MST)\n        - Kruskal's Algorithm\n        - Prim's Algorithm\n    - Advanced Graph Algorithms\n        - Topological Sorting\n        - Strongly Connected Components (Tarjan's Algorithm)\n        - Network Flow (Ford-Fulkerson Algorithm, Edmonds-Karp Algorithm)\n        - Bipartite Graph Checking",
    "Hashing\n    - Hash Tables\n        - Open Addressing (Linear Probing, Quadratic Probing)\n        - Separate Chaining\n    - Hash Functions\n        - Properties and Design\n        - Collision Resolution Techniques"
]

advanced_data_structures = [
    "Skip List\n    - Insertion, Deletion, Search\n    - Applications",
    "B-Trees and B+ Trees\n    - Properties and Operations\n    - Usage in Databases",
    "Splay Trees\n    - Splaying, Insertion, Deletion",
    "Treap\n    - Priority and BST Property\n    - Operations and Applications",
    "Suffix Tree and Suffix Array\n    - Construction\n    - Applications in String Matching",
    "Disjoint Set (Union-Find)\n    - Union by Rank, Path Compression\n    - Applications in Kruskal’s Algorithm",
    "Specialized Data Structures\n    - Bloom Filter\n        - Probabilistic Data Structure\n        - False Positive Rate\n    - Quad Trees and Octrees\n        - Spatial Partitioning\n        - Applications in Graphics and Game Development\n    - K-D Trees\n        - Multidimensional Search\n        - Nearest Neighbor Search\n    - R-trees\n        - Spatial Indexing\n        - Applications in Geographic Information Systems (GIS)",
    "String Data Structures\n    - Rabin-Karp Algorithm\n        - Rolling Hash Technique\n    - Knuth-Morris-Pratt (KMP) Algorithm\n        - Prefix Function\n    - Boyer-Moore Algorithm\n        - Good Suffix, Bad Character Heuristics",
    "Concurrency Data Structures\n    - Concurrent Linked Lists\n        - Lock-based and Lock-free Implementations\n    - Concurrent Queues\n        - Blocking and Non-blocking Queues\n    - Skip List\n        - Concurrent Variants"
]

sorting_algorithms = [
    "Comparison-Based Sorting\n    Simple Sorts\n        - Bubble Sort\n        - Selection Sort\n        - Insertion Sort\n    Efficient Sorts\n        - Merge Sort\n        - Quick Sort\n        - Heap Sort\n    Hybrid Sorts\n        - Timsort\n        - IntroSort",
    "Non-Comparison-Based Sorting\n    - Counting Sort\n    - Radix Sort\n    - Bucket Sort",
    "Specialized Sorts\n    - Shell Sort\n    - Pigeonhole Sort"
]

searching_algorithms = [
    "Linear Search\n    - Simple Linear Search",
    "Binary Search\n    - Classic Binary Search\n    - Binary Search Variants",
    "Hash-Based Search\n    - Direct Addressing\n    - Hash Tables",
    "Tree-Based Search\n    - Binary Search Tree (BST)\n    - AVL Tree\n    - Red-Black Tree\n    - B-Trees and B+ Trees",
    "Graph-Based Search\n    - Depth-First Search (DFS)\n    - Breadth-First Search (BFS)",
    "String Search Algorithms\n    - Naive String Search\n    - Knuth-Morris-Pratt (KMP) Algorithm\n    - Rabin-Karp Algorithm\n    - Boyer-Moore Algorithm",
    "Advanced Search Techniques\n    - Exponential Search\n    - Interpolation Search\n    - Fibonacci Search\n    - Jump Search"
]

pdf.add_checklist('Basic Data Structures', basic_data_structures)
pdf.add_checklist('Intermediate Data Structures', intermediate_data_structures)
pdf.add_checklist('Advanced Data Structures', advanced_data_structures)
pdf.add_checklist('Sorting Algorithms', sorting_algorithms)
pdf.add_checklist('Searching Algorithms', searching_algorithms)

output_path = 'DSA_Checklist.pdf'
pdf.output(output_path)

print(f'PDF created at {output_path}')
