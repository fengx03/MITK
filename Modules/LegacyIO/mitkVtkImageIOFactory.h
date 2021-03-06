/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/
#ifndef __mitkVtkImageIOFactory_h
#define __mitkVtkImageIOFactory_h

#ifdef _MSC_VER
#pragma warning ( disable : 4786 )
#endif

#include <MitkLegacyIOExports.h>

#include "itkObjectFactoryBase.h"
#include "mitkBaseData.h"

namespace mitk
{
//##Documentation
//## @brief Create instances of VtkImageReader objects using an object factory.
//##
//## @ingroup IO
//## @deprecatedSince{2014_10} Use mitk::IOUtils or mitk::FileReaderRegistry instead.
class DEPRECATED() MitkLegacyIO_EXPORT VtkImageIOFactory : public itk::ObjectFactoryBase
{
public:
  /** Standard class typedefs. */
  typedef VtkImageIOFactory   Self;
  typedef itk::ObjectFactoryBase  Superclass;
  typedef itk::SmartPointer<Self>  Pointer;
  typedef itk::SmartPointer<const Self>  ConstPointer;

  /** Class methods used to interface with the registered factories. */
  virtual const char* GetITKSourceVersion(void) const;
  virtual const char* GetDescription(void) const;

  /** Method for class instantiation. */
  itkFactorylessNewMacro(Self);
  static VtkImageIOFactory* FactoryNew() { return new VtkImageIOFactory;}
  /** Run-time type information (and related methods). */
  itkTypeMacro(VtkImageIOFactory, ObjectFactoryBase);

  /**
   * Register one factory of this type
   * \deprecatedSince{2013_09}
   */
  DEPRECATED(static void RegisterOneFactory(void))
  {
    VtkImageIOFactory::Pointer VtkImageIOFactory = VtkImageIOFactory::New();
    ObjectFactoryBase::RegisterFactory(VtkImageIOFactory);
  }

protected:
  VtkImageIOFactory();
  ~VtkImageIOFactory();

private:
  VtkImageIOFactory(const Self&); //purposely not implemented
  void operator=(const Self&); //purposely not implemented

};


} // end namespace mitk

#endif
