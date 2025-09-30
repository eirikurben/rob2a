# rob2a
vélmenni I grunnur með VEX
# Námsefni frá VEX og Carnegie Mellon háskólanum
```mermaid
flowchart TD
    A([Start]) --> B[Initialize robot<br/>(drivetrain, motors, GPS)]
    B --> C[Wait for start command]
    C --> D{Stop button pressed?}
    D -- No --> E[Read (x, y) from GPS]
    E --> F[Decide next movement]
    F --> G[Drive motors/drivetrain]
    G --> D
    D -- Yes --> H[Stop all motors]
    H --> I([End])
```
