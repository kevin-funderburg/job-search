/*
 * $Header: lobdemo1.h 01-aug-96.21:02:57 lvbcheng Exp $
 */

/* Copyright (c) Oracle Corporation 1996, 1998. All Rights Reserved. */ 
 
/* 
   NAME 
     lobdemo1.h - LOB Demonstration Header File

   DESCRIPTION 

   RELATED DOCUMENTS 
 
   INSPECTION STATUS 
     Inspection date: 
     Inspection status: 
     Estimated increasing cost defects per page: 
     Rule sets: 
 
   ACCEPTANCE REVIEW STATUS 
     Review date: 
     Review status: 
     Reviewers: 
 
   PUBLIC FUNCTION(S) 

   PRIVATE FUNCTION(S)

   EXAMPLES

   NOTES

   MODIFIED   (MM/DD/YY)
   mchiocca    05/18/98 - Rewrite LOB Demo using Embedded LOB Interface
   lvbcheng    08/01/96 - disable pbm fetch
   lvbcheng    08/01/96 - Header file for lobdemo1.
   lvbcheng    08/01/96 - Creation

*/

#ifndef LOBDEMO1_ORACLE
# define LOBDEMO1_ORACLE

#define JOHN_DOE_TXT_SUMMARY \
  "Address: 51 Cokejoy Drive Caffeine, CA 91021 Tel. no: 415-555-1000"

#define JANE_A_DEER_TXT_SUMMARY \
  "Address: 123 Sesame St. Hollywood, CA 90012 Tel. no: 415-555-1001"

/* Use bogus pictures - Can be replaced with actual graphics files. */
#define JOHN_DOE_MUG_FILE "lobdemo1.h"
#define JANE_A_DEER_MUG_FILE "lobdemo1.pc"

#endif                                              /* lobdemo1 */
