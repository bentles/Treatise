function getospeed
  movc r1, 1
  movc r2, 0
  newo p0, r1
  seto p0, r2, r1
  movc r3, 3000000

loop:
  geto r4, p0, r2
  print r4
  addc r3, -1
  jcmpc r3, 0, end, end, loop

end:
ret
  