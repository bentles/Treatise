function addtest
    addc r0, 1
    addc r1, 2
    add r0, r1
    newa r2 r1
    out r1
ret
