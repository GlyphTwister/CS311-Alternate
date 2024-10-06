

flowchart LR
    subgraph Wrapper Function {
        A(Initialize board with holes) --> B(Call recursive function)
        B --> C(Return result)
    }
    subgraph Recursive Function {
        C(Check base case) --> D(Iterate through board)
        D --> E(Try horizontal placement)
        D --> F(Try vertical placement)
        E --> G(Recurse) --> H(Restore board) --> C
        F --> G --> H --> C
    }