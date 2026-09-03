# include <stdio.h>
# include <assert.h> // Llibreria per fer tests
// Funci ó que volem testejar

int suma (int a, int b) {
    return a + b ;
}

int main () {
    // Tests : Si la condici ó s falsa , el programa s ’ atura amb error
    assert ( suma(2 , 3) == 5) ;
    assert ( suma( -1 , 1) == 0) ;
    assert ( suma(10 , 10) == 20) ;
    printf ( "changing from local EXIT : Tots els tests han passat correctament !\ n" ) ;
    return 0;
}
