#include "pdkcl.h"

/*  13: 84B     14: 85A     15: 86B      16: 83A  */
struct fppinfo_t fppinfo[]= {
  /*   0 */ { "MF520",      8,  0x200, 0x1000, "83B2", "83A"   },
  /*   1 */ { "MF610",      8,  0x200, 0x1000, "83B2", "83A"   },
  /*   2 */ { "MF616",      8,  0x200, 0x1000, "83B2", "83A"   },
  /*   3 */ { "P201CS16A",  2,  0x03A,  0x400, "",     ""      },
  /*   4 */ { "P234CS24",   2,    200, 0x1000, "",     ""      },
  /*   5 */ { "PDK82C12",   8,  0x0C0,  0x800, "",     "83A"   },
  /*   6 */ { "PDK82C13",   8,  0x0C0,  0x800, "",     "83A"   },
  /*   7 */ { "PES501",     1,   0x80,  0x800, "85A",  "86A"   },
  /*   8 */ { "PES502C",    1,   0x80,  0x800, "85A",  "86A"   },
  /*   9 */ { "PES503",     2,   0xA0,  0x800, "83A",  "83A"   },
  /*  10 */ { "PFC151",     1,   0x80,  0x800, "14",   "83B2"  },
  /*  11 */ { "PFC154",     1,   0x80,  0x800, "14",   "83B2"  },
  /*  12 */ { "PFC161",     1,   0x80,  0x800, "14",   "83B2"  },
  /*  13 */ { "PFC232",     2,   0x80,  0x800, "85A",  "83B2"  },
  /*  14 */ { "PFC460",     4,  0x200, 0x1000, "16",   ""      },
  /*  15 */ { "PFC886",     8,  0x200, 0x1000, "83B2", "83A"   },
  /*  16 */ { "PFC887",     8,  0x200, 0x1400, "83B2", "83A"   },
  /*  17 */ { "PFS121",     1,  0x080, 0x0800, "",     "83B2"  },
  /*  18 */ { "PFS122B",    1,  0x080, 0x0800, "85A",  "83B2"  },
  /*  19 */ { "PFS122",     1,  0x080, 0x0800, "14",   "83B2"  },
  /*  20 */ { "PFS123",     1,  0x100, 0x0C00, "15",   "83B2"  },
  /*  21 */ { "PFS132",     1,   0x80,  0x800, "85A",  "83B2"  },
  /*  22 */ { "PFS154",     1,   0x80,  0x800, "85A",  "83B2"  },
  /*  23 */ { "PFS157",     1,  0x100, 0x0C00, "",     "83B2"  },
  /*  24 */ { "PFS172B",    1,  0x080, 0x0800, "",     "83B2"  },
  /*  25 */ { "PFS172",     1,  0x080, 0x0800, "14",   "83B2"  },
  /*  26 */ { "PFS173B",    1,  0x100, 0x0C00, "",     "83B2"  },
  /*  27 */ { "PFS173",     1,  0x100, 0x0C00, "15",   "83B2"  },
  /*  28 */ { "PFS252",     2,   0x80,  0x800, "85A",  "83B2"  },
  /*  29 */ { "PGC134",     1,  0x100, 0x1000, "86B",  "83B2"  },
  /*  30 */ { "PGC152",     1,   0x80,  0x600, "85A",  "86A"   },
  /*  31 */ { "PGR431",     1,  0x100, 0x6000, "",     "86A"   },
  /*  32 */ { "PGS134",     1,  0x100, 0x1000, "86B",  "83B2"  },
  /*  33 */ { "PGS152",     1,   0x80,  0x600, "85A",  "86A"   },
  /*  34 */ { "PMB180",     1,   0x40,  0x500, "85A",  "83B2"  },
  /*  35 */ { "PMB182",     1,   0x50,  0x500, "85A",  "83B2"  },
  /*  36 */ { "PMB183",     1,   0x80,  0x800, "85A",  "83B2"  },
  /*  37 */ { "PMC131",     1,   0x58,  0x600, "85A",  "86A"   },
  /*  38 */ { "PMC150",     1,   0x3C,  0x400, "84B",  "86A"   },
  /*  39 */ { "PMC153",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  40 */ { "PMC156",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  41 */ { "PMC166",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  42 */ { "PMC232",     2,   0xA0,  0x800, "83A",  "83A"   },
  /*  43 */ { "PMC234",     2,   0xD0, 0x1000, "83A",  "83A"   },
  /*  44 */ { "PMC251",     2,     60,  0x400, "83A",  "86A"   },
  /*  45 */ { "PMC271",     2,     64,  0x400, "83A",  "86A"   },
  /*  46 */ { "PMC884",     8,   0xD0, 0x1000, "83A",  "83A"   },
  /*  47 */ { "PML100B",    1,   0x40,  0x400, "85A",  "83B2"  },
  /*  48 */ { "PML100",     1,   0x40,  0x400, "85A",  "83B2"  },
  /*  49 */ { "PMR110",     1,   0x20,  0x280, "84B",  "86A"   },
  /*  50 */ { "PMR210",     1,   0x20,  0x400, "84B",  "86A"   },
  /*  51 */ { "PMS121",     1,   0x60,  0x600, "85A",  "83B2"  },
  /*  52 */ { "PMS130",     1,   0x58,  0x600, "85A",  "86A"   },
  /*  53 */ { "PMS131",     1,   0x58,  0x600, "85A",  "86A"   },
  /*  54 */ { "PMS132B",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  55 */ { "PMS132C",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  56 */ { "PMS132",     1,   0x80,  0x800, "85A",  "86A"   },
  /*  57 */ { "PMS132K",    1,  0x080, 0x1000, "86B",  "86A"   },
  /*  58 */ { "PMS133",     1,  0x100, 0x1000, "86B",  "86A"   },
  /*  59 */ { "PMS134",     1,  0x100, 0x1000, "86B",  "86A"   },
  /*  60 */ { "PMS150B",    1,   0x40,  0x400, "84B",  "86A"   },
  /*  61 */ { "PMS150C",    1,   0x40,  0x400, "84B",  "86A"   },
  /*  62 */ { "PMS150G",    1,   0x40,  0x400, "84B",  "86A"   },
  /*  63 */ { "PMS150",     1,   0x3C,  0x400, "84B",  "86A"   },
  /*  64 */ { "PMS152E",    1,   0x60,  0x600, "85A",  "83B2"  },
  /*  65 */ { "PMS152",     1,   0x50,  0x500, "85A",  "83B2"  },
  /*  66 */ { "PMS153",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  67 */ { "PMS154B",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  68 */ { "PMS154C",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  69 */ { "PMS154G",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  70 */ { "PMS154",     1,   0x80,  0x800, "85A",  "86A"   },
  /*  71 */ { "PMS155B",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  72 */ { "PMS155C",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  73 */ { "PMS155",     1,   0x80,  0x800, "85A",  "86A"   },
  /*  74 */ { "PMS156",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  75 */ { "PMS15A",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  76 */ { "PMS15B",     1,   0x40,  0x400, "84B",  "86A"   },
  /*  77 */ { "PMS160",     1,   0x60,  0x600, "85A",  "//"    },
  /*  78 */ { "PMS161",     1,   0x60,  0x600, "85A",  "83B2"  },
  /*  79 */ { "PMS163",     1,   0xA0, 0x0A00, "86B",  "83B2"  },
  /*  80 */ { "PMS164",     1,   0x80,  0x800, "85A",  "83B2"  },
  /*  81 */ { "PMS165C",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  82 */ { "PMS171B",    1,   0x60,  0x600, "85A",  "83B2"  },
  /*  83 */ { "PMS171C",    1,   0x60,  0x600, "85A",  "83B2"  },
  /*  84 */ { "PMS171",     1,   0x60,  0x600, "85A",  "83B2"  },
  /*  85 */ { "PMS232",     2,   0xA0,  0x800, "83A",  "83A"   },
  /*  86 */ { "PMS234",     2,   0xD0, 0x1000, "83A",  "83A"   },
  /*  87 */ { "PMS271",     2,     64,  0x400, "83A",  "86A"   },
  /*  88 */ { "XDM1301",    1,   0x50,  0x500, "85A",  "83B2"  },
  /*  89 */ { "XDM2801",    1,   0x80,  0x800, "85A",  "83B2"  },
  /*  90 */ { "XDM3101",    1,   0x20,  0x400, "84B",  "86A"   },
  /*  91 */ { "XDM4105",    1,  0x100, 0x0C00, "",     "83B2"  },
  /*  92 */ { "XDM4109",    1,   0x80,  0x800, "85A",  "86A"   },
  /*  93 */ { "XDM4110",    1,   0x80,  0x800, "",     "83B2"  },
  /*  94 */ { "XDM4232",    2,   0x80,  0x800, "85A",  ""      },
  /*  95 */ { "XDM4684",    4,  0x200, 0x1000, "",     ""      },
  /*  96 */ { "XDM4686",    4,  0x200, 0x1000, "",     ""      },
  /*  97 */ { "XDT0164",    1,   0x80,  0x800, "85A",  "83B2"  },
  /*  98 */ { "XFS155",     1,   0x80,  0x800, "85A",  "83B2"  },
  /*  99 */ { "XMS155",     1,   0x80,  0x800, "85A",  "86A"   },
  /* 100 */ { "XN1210C",    1,   0x80,  0x800, "85A",  "86A"   },
  /* 101 */ { "XN1320B",    1,   0x80,  0x800, "85A",  "86A"   },
  /* 102 */ { "XN1320C",    1,   0x80,  0x800, "85A",  "86A"   },
  /* 103 */ { "YFC1614",    1,   0x80,  0x800, "",     "83B2"  },
  /* 104 */ { "YFS1544",    1,   0x80,  0x800, "85A",  "83B2"  },
  /* 105 */ { "YMB1801",    1,   0x40,  0x500, "85A",  "83B2"  },
  /* 106 */ { "YMB1805",    1,   0x40,  0x500, "85A",  "83B2"  },
  /* 107 */ { "YMS1324",    1,   0x80,  0x800, "85A",  "86A"   },
  /* 108 */ { "YMS1524",    1,   0x50,  0x500, "85A",  "83B2"  },
            { NULL, 0, 0, 0, NULL, NULL }
};