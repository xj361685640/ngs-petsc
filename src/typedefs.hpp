#ifndef FILE_NGSPETSC_TYPEDEFS_HPP
#define FILE_NGSPETSC_TYPEDEFS_HPP

namespace ngs_petsc_interface
{

  namespace ngs = ngcomp;
  using ngs::Array;
  using ngs::Range;


  using PETScIS = ::IS;

  using PETScVec = ::Vec;

  using PETScMat = ::Mat;
  using PETScMatType = ::MatType;

  using PETScPC = ::PC;
  using PETScPCType = ::PCType;

} // namespace ngs_petsc_interface

#endif
