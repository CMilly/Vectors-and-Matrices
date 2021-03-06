# Overview
Project that implements both Vectors and Matrices that allow for the transformation, translation and rotation of objects in 2-Dimensional, 3-Dimensional and 4-Dimensional space in relation to Computer Graphics (This project is in Part-3 out of Part-4 in the creation of a Math Engine, details will be provided further below).

# Abstract
Over my summer break of what is currently Spring 2019, I told myself that I wanted to learn new conecpts and ideas involving development. I have always wanted to understand the inner workings of game development and the game engines that operate behind the scenes to make everything possible. When conducting research I learned their is not a sort of one-in-all game engine, but rather multiple engines that work unanimously together to produce an overall effect. That being said, to truly understand how another engine works, you must understad the engine prior sort of like a hierarchical structure. This structure in the game development/engine world goes as: Math Engine, Physics Engine and then Rendering Engine, not including everything in between that is needed as well. With all this being said, I sought out my research involving game engine's starting with as mentioned above, the Math Engine.

# Important Concepts to Understand
  - Vectors: A mathematical structure that is able to represent both magnitude and direction simultaneously. (Part-1)
  
  
![alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fd/3D_Vector.svg/300px-3D_Vector.svg.png)
  
  
  - Matrices: Rectangular array of numbers arranged in rows in columns. These rows and columns can be used to represent rotations and transformations with relation to Vectors. (Part-2)
  
  
![alt text](https://cdn.kastatic.org/googleusercontent/9XeqQ2stwpGbXuli1TWSbnHQwITfrYV_AtmjMFEtQZbAo9VvWQ0KYNBnyRx5x9Ekpwh_Pdwzu4dC6b3Y0Wb0Qsu5)
  
  
  - Linear Algebra: Branch of mathermatics that concerns linear equations. (Part-1-4)
  
  
![alt text](https://4.bp.blogspot.com/-9Apj2QC98l0/Ws90aLaIY2I/AAAAAAAALZw/VkNC2antiGUpjVjB7LJiYHLAKeEXXlfagCPcBGAYYCw/s1600/image9.png)
  
  
  - Quaternions: A number system that expands the complex numbers. In computer graphics, we use these for more optimal rotation and transformation as opposed to just Vectors and Matrices. (Part-4 - FINAL)
![alt text](http://www.tobynorris.com/work/prog/csharp/quatview/help/orientations_and_quaternionsb4.PNG)
  
# Implementations (CURRENTLY)
As of now this project is a placeholder for the overall Math Engine project. Parts 1-3(including 3 as a whole) have been completed and are what this repository shows only. These include:
- Vector2, Vector3, and Vector4 class all representing Vectors in opposing dimensional spaces
- Matrix2, Matrix3, and Matrix4 class all representing Matrices in opposing dimensional spaces
- Mathematial conecpts for both Vectors and Matrices

# TODO
Since the scope of this project is to only cover the conecepts of a Math Engine in computer graphics, implementation of Quaternions are the final part of this 4-part project to be instantiated accordingly. Apart from this, extra implementation may include:
- Ability to showcase transformations and rotations by graphing (GNUplot, graphics.h, boost library, etc..).
- Code cleanup, mathematical checks, and syntax

# Resources (Not all resources are shown yet)
   - Vectors
      - https://math.dartmouth.edu/archive/m22s07/public_html/VectorSlides.pdf
      - https://www.khanacademy.org/math/linear-algebra/matrix-transformations/linear-transformations/v/vector-transformations
      - https://www.wikihow.com/Normalize-a-Vector
      - http://mines.lumpylumpy.com/Electronics/Computers/Software/Cpp/Graphics/Vector/DotProduct.php#.XOVtbMhKiMp
      - https://www.gamedev.net/forums/topic/362459-dot-product-between-3d-and-4d-vector/
      - https://www.mathsisfun.com/algebra/vectors-cross-product.html
   - Matrices
      - https://www.mathsisfun.com/algebra/matrix-inverse.html
      - https://www.youtube.com/watch?v=kK-Uj2nJgus
      - https://www.khanacademy.org/math/linear-algebra/matrix-transformations/determinant-depth/v/linear-algebra-simpler-4x4-determinant
  
  
