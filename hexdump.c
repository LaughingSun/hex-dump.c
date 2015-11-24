
enum memdump_rules {
  MDR_USEDEFAULTS,
  MDR_GROUPALIGN,
  MDR_GROUPSIZE,
  MDR_LINEALIGN,
  MDR_LINESIZE,
  MDR_SHOWASCII,
  MDR_SHOWHEX,
  MDR_GROUPASCII,
  MDR_GROUPHEX,
  MDR_WSCHAR
};

struct memdump_option {
  unsigned int rule;
  union value {
    int numeric;
    char *text;
  }
};

struct memdump_option memdump_defaults[] = {
  { MDR_GROUPALIGN, sizeof(int) },
  { MDR_GROUPSIZE, sizeof(int) },
  { MDR_LINEALIGN, sizeof(int) * 8 },
  { MDR_LINESIZE, 8 },
  { MDR_SHOWCHAR, 1 },
  { MDR_SHOWHEX, 1 },
  { MDR_GROUPCHAR, 1 },
  { MDR_GROUPHEX, 1 },
  { MDR_CHARTYPE, "ASCII",
  { MDR_WSCHAR, ".",
    
};

void *memdump ( void *start, size_t length, const struct memdump_option *options ) {
  int grpalign    = MDR_GROUPALIGN_DEFAULT
    , grpsize     = MDR_GROUPSIZE_DEFAULT
    , linealign   = MDR_LINEALIGN_DEFAULT
    , linesize    = MDR_LINESIZE_DEFAULT;
  bool showchar   = MDR_SHOWCHAR_DEFAULT
    , showhex     = MDR_SHOWHEX_DEFAULT
    , grpchar     = MDR_GROUPCHAR_DEFAULT
    , grphex      = MDR_GROUPHEX_DEFAULT;
  string chartype = MDR_CHARTYPE_DEFAULT
    , wschar      = MDR_WSCHAR_DEFAULT;
};


