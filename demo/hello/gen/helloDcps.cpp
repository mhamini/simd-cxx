#include "helloDcps.h"
#if EORB_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq <swatch::hello, struct helloSeq_uniq_>;
#endif

const char * swatch::helloTypeSupportInterface::_local_id = "IDL:swatch/helloTypeSupportInterface:1.0";

swatch::helloTypeSupportInterface_ptr swatch::helloTypeSupportInterface::_duplicate (swatch::helloTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean swatch::helloTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, swatch::helloTypeSupportInterface::_local_id) == 0)
   {
      return TRUE;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return TRUE;
   }

   return FALSE;
}

swatch::helloTypeSupportInterface_ptr swatch::helloTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   swatch::helloTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (swatch::helloTypeSupportInterface::_local_id))
   {
      result = dynamic_cast<swatch::helloTypeSupportInterface_ptr> (p);
      result->m_count++;
   }
   return result;
}

swatch::helloTypeSupportInterface_ptr swatch::helloTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   swatch::helloTypeSupportInterface_ptr result;
   result = dynamic_cast<swatch::helloTypeSupportInterface_ptr> (p);
   result->m_count++;
   return result;
}

const char * swatch::helloDataWriter::_local_id = "IDL:swatch/helloDataWriter:1.0";

swatch::helloDataWriter_ptr swatch::helloDataWriter::_duplicate (swatch::helloDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean swatch::helloDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, swatch::helloDataWriter::_local_id) == 0)
   {
      return TRUE;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return TRUE;
   }

   return FALSE;
}

swatch::helloDataWriter_ptr swatch::helloDataWriter::_narrow (DDS::Object_ptr p)
{
   swatch::helloDataWriter_ptr result = NULL;
   if (p && p->_is_a (swatch::helloDataWriter::_local_id))
   {
      result = dynamic_cast<swatch::helloDataWriter_ptr> (p);
      result->m_count++;
   }
   return result;
}

swatch::helloDataWriter_ptr swatch::helloDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   swatch::helloDataWriter_ptr result;
   result = dynamic_cast<swatch::helloDataWriter_ptr> (p);
   result->m_count++;
   return result;
}

const char * swatch::helloDataReader::_local_id = "IDL:swatch/helloDataReader:1.0";

swatch::helloDataReader_ptr swatch::helloDataReader::_duplicate (swatch::helloDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean swatch::helloDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, swatch::helloDataReader::_local_id) == 0)
   {
      return TRUE;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return TRUE;
   }

   return FALSE;
}

swatch::helloDataReader_ptr swatch::helloDataReader::_narrow (DDS::Object_ptr p)
{
   swatch::helloDataReader_ptr result = NULL;
   if (p && p->_is_a (swatch::helloDataReader::_local_id))
   {
      result = dynamic_cast<swatch::helloDataReader_ptr> (p);
      result->m_count++;
   }
   return result;
}

swatch::helloDataReader_ptr swatch::helloDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   swatch::helloDataReader_ptr result;
   result = dynamic_cast<swatch::helloDataReader_ptr> (p);
   result->m_count++;
   return result;
}



