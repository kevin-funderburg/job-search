
// This class definition may be included in a Pro*C/C++ application
// program using the EXEC SQL INCLUDE directive only.  Because it
// contains EXEC SQL syntax, it may not be included using a #include
// directive.  Any program that includes this header must be
// precompiled with the CODE=CPP option.  This emp class definition
// is used when building the cppdemo2 C++ Demo Program.

class emp
{
  public:
    emp();   // Constructor: ALLOCATE Cursor Variable
    ~emp();  // Desctructor: FREE Cursor Variable

    void open();              // Open Cursor
    void fetch() throw (int); // Fetch (throw NOT FOUND condition)
    void close();             // Close Cursor

    void emp_error();         // Error Handler

    EXEC SQL BEGIN DECLARE SECTION;
      // When included via EXEC SQL INCLUDE, class variables have 
      // global scope and are thus basically treated as ordinary
      // global variables by Pro*C/C++ during precompilation.
      char ename[11];
      int empno;
    EXEC SQL END DECLARE SECTION;

  private:
    EXEC SQL BEGIN DECLARE SECTION;
      // Pro*C/C++ treats this as a simple global variable also.
      SQL_CURSOR emp_cursor;
    EXEC SQL END DECLARE SECTION;
};

