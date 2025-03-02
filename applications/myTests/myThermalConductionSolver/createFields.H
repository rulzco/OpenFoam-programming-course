volScalarField T 
(
 	IOobject
 	(
  	"T",
  	runTime.timeName(),
  	mesh,
  	IOobject::MUST_READ,
  	IOobject::AUTO_WRITE
 	),
	 mesh
 );

IOdictionary transportProperties
(
 IOobject
 (
  "transportProperties",
  runTime.constant(),
  mesh,
  IOobject::MUST_READ_IF_MODIFIED,
  IOobject::NO_WRITE
 )
 );

dimensionedScalar k
(
 "k",
 dimArea/dimTime,
 transportProperties
 );

dimensionedScalar su
(
 "su",
 dimTemperature/dimTime,
 transportProperties
 );
dimensionedScalar sp
(
 "sp",
 pow(dimTime,-1),
 transportProperties
 );
Info << "k: " << k << endl;
Info << "su: " << su << endl;
Info << "sp: " << sp << endl;
