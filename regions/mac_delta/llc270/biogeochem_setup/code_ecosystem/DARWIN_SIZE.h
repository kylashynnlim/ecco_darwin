#ifdef ALLOW_DARWIN

CBOP
C     !ROUTINE: DARWIN_SIZE.h
C     !INTERFACE:
C #include DARWIN_SIZE.h

C     !DESCRIPTION:
C Contains dimensions for the darwin model.
C
C nplank   :: number of plankton types
C nGroup   :: number of plankton functional groups
C             (for allometric trait generation)
C nopt     :: number of optical types (spectra to read in)
C nPhoto   :: number of phototrophs
C             (will have Chl tracer if DARWIN_ALLOW_CHL is defined)
C nPPplank :: number of primary production diagnostics to collect
C nGRplank :: number of grazing loss diagnostics to collect
C nlam     :: number of wavebands (set in radtrans package if compiled)

      integer nplank
      integer nGroup
      integer nopt
      integer nPhoto
CSD these are obsolete in newest code
c     integer nPPplank
c     integer nGRplank
      parameter(nplank=8)
      parameter(nGroup=7)
      parameter(nopt=12)
      parameter(nPhoto=5)
CSD I think these are obsolete in newest code
c     parameter(nPPplank=0)
c     parameter(nGRplank=0)

#ifndef ALLOW_RADTRANS
      integer nlam
      parameter(nlam=1)
#endif

CEOP
#endif /* ALLOW_DARWIN */