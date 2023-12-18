### Ansysplusplus finite element solver
Hobby project

Creating a finite element solver, that read Ansys input files and give us result : strain, stress ...
Ansys input file is .dat

The name is refering to Matplotplusplus from Alan de Freitas

It will support : 
- Shell 181 - 281 : Triangular and quadrangle (TRI3, QUAD4, QUAD8)
- Solid 185 - 186 - 187 : Tetrahedron and Hexagon (TETRA10, HEX8, HEX20)

Static simulation will be our first objective : [K] [U] = [F]

****

### TODO List :

- [X] Node Class
- [X] Material and Part Class
- [x] Element Class
    - [ ] Subclasses : TRI3, QUAD4 ...
    - [ ] Gauss Legendre Integration
- [ ] Class with method to clean input file 


#### Ansys Keywords :
##### Node declaration 
nblock : before node creation : 
- node id, x coordinate, y coordinate, z coordinate
- end with a -1

##### Element declaration
et, part_number, element number
Element number : 
- 188 = beam
- 181 = shell with 4 nodes so QUAD4
- 281 = shell with 8 nodes so QUAD8
- 185 = Solid with 8 nodes so HEX8
- 186 = Solid with 20 nodes so HEX20
- 187 = Solid with 10 nodes so TETRA10


eblock : before element creation
- material id / part id / real constant number / section ID (for Beam 188 or 189) / element coordinate system (if none it's 0) / birth-death flag (?) / solid model reference number/ element shape flag (number of nodes) / 0 / element id / node id for each node of this element (if more than 8 nodes go to next line)
- end with a -1

element format is close to **Nastran** with the 8 column to separate numbers.
**Abaqus** use comma (,) as a separator