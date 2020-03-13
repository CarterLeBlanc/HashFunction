| Carter LeBlanc
:-
| s198027
| Code Design and Data Structures
| Hashing

## I. Requirements

1. Descritpion of Problem

  - **Name**: Hashing
  
  - **Problem Statement**: Implement a namespace that utilizes Hash functions
  
2. Output Information

  - The program displays two windows. One displays a color and the other will print the hashcode.
  
3. User Interface Information
  
  - Information is displayed using the console.
  
## II. Object Information

  **File**: HashFunction.h
  
    Description: Contains hashing functions of different types.
    
    **Attributes**:
    
    Name: function
    Description: Type definition for HashFunc
    Type: typedef
    
    Name: defaultHash
    Description: Holds which function should be used by default
    Type: HashFunc
    
    **Operations**:

    Name: badHash
    Description: A hash that uses basic addition
    Type: int
    
    Name: bkdrHash
    Description: A hash functions that was created by Brian Kernighan and Dennis Ritchie
    Type: int
    
    Name: colorHash
    Description: Hash that is a slight variation of bkdrHash
    Type: int
    
    Name: gravatarHash
    Description: Custom made function meant to create a long hash code
    Type: int

## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
