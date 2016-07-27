#ifndef PG_CURRENCY_H
#define PG_CURRENCY_H

#include "postgres.h"
#include "fmgr.h"
#include "access/hash.h"
#include "libpq/pqformat.h"

typedef unsigned char currency;

#define PG_RETURN_CURRENCY(x) PG_RETURN_CHAR(x)
#define PG_GETARG_CURRENCY(x) PG_GETARG_CHAR(x)

#define AED 4277572
#define AFN 4277838
#define ALL 4279372
#define AMD 4279620
#define ANG 4279879
#define AOA 4280129
#define ARS 4280915
#define AUD 4281668
#define AWG 4282183
#define AZN 4282958
#define BAM 4342093
#define BBD 4342340
#define BDT 4342868
#define BGN 4343630
#define BHD 4343876
#define BIF 4344134
#define BMD 4345156
#define BND 4345412
#define BOB 4345666
#define BRL 4346444
#define BSD 4346692
#define BTN 4346958
#define BWP 4347728
#define BYN 4348238
#define BYR 4348242
#define BZD 4348484
#define CAD 4407620
#define CDF 4408390
#define CHF 4409414
#define CLP 4410448
#define CNY 4410969
#define COP 4411216
#define CRC 4411971
#define CUC 4412739
#define CUP 4412752
#define CVE 4412997
#define CZK 4414027
#define DJF 4475462
#define DKK 4475723
#define DOP 4476752
#define DZD 4479556
#define EGP 4540240
#define ERN 4543054
#define ETB 4543554
#define EUR 4543826
#define FJD 4606532
#define FKP 4606800
#define GBP 4670032
#define GEL 4670796
#define GGP 4671312
#define GHS 4671571
#define GIP 4671824
#define GMD 4672836
#define GNF 4673094
#define GTQ 4674641
#define GYD 4675908
#define HKD 4737860
#define HNL 4738636
#define HRK 4739659
#define HTG 4740167
#define HUF 4740422
#define IDR 4801618
#define ILS 4803667
#define IMP 4803920
#define INR 4804178
#define IQD 4804932
#define IRR 4805202
#define ISK 4805451
#define JEP 4867408
#define JMD 4869444
#define JOD 4869956
#define JPY 4870233
#define KES 4932947
#define KGS 4933459
#define KHR 4933714
#define KMF 4934982
#define KPW 4935767
#define KRW 4936279
#define KWD 4937540
#define KYD 4938052
#define KZT 4938324
#define LAK 4997451
#define LBP 4997712
#define LKR 5000018
#define LRD 5001796
#define LSL 5002060
#define LTL 5002316
#define LYD 5003588
#define MAD 5062980
#define MDL 5063756
#define MGA 5064513
#define MKD 5065540
#define MMK 5066059
#define MNT 5066324
#define MOP 5066576
#define MRO 5067343
#define MUR 5068114
#define MVR 5068370
#define MWK 5068619
#define MXN 5068878
#define MYR 5069138
#define MZN 5069390
#define NAD 5128516
#define NGN 5130062
#define NIO 5130575
#define NOK 5132107
#define NPR 5132370
#define NZD 5134916
#define OMR 5197138
#define PAB 5259586
#define PEN 5260622
#define PGK 5261131
#define PHP 5261392
#define PKR 5262162
#define PLN 5262414
#define PYG 5265735
#define QAR 5325138
#define RON 5394254
#define RSD 5395268
#define RUB 5395778
#define RWF 5396294
#define SAR 5456210
#define SBD 5456452
#define SCR 5456722
#define SDG 5456967
#define SEK 5457227
#define SGD 5457732
#define SHP 5458000
#define SLL 5459020
#define SOS 5459795
#define SPL 5460044
#define SRD 5460548
#define STD 5461060
#define SVC 5461571
#define SYP 5462352
#define SZL 5462604
#define THB 5523522
#define TJS 5524051
#define TMT 5524820
#define TND 5525060
#define TOP 5525328
#define TRY 5526105
#define TTD 5526596
#define TVD 5527108
#define TWD 5527364
#define TZS 5528147
#define UAH 5587272
#define UGX 5588824
#define USD 5591876
#define UYU 5593429
#define UZS 5593683
#define VEF 5653830
#define VND 5656132
#define VUV 5657942
#define WST 5722964
#define XAF 5783878
#define XCD 5784388
#define XDR 5784658
#define XOF 5787462
#define XPF 5787718
#define YER 5850450
#define ZAR 5914962
#define ZMW 5918039
#define ZWD 5920580

enum Currency {
  AED_INTERNAL=1,
  AFN_INTERNAL,
  ALL_INTERNAL,
  AMD_INTERNAL,
  ANG_INTERNAL,
  AOA_INTERNAL,
  ARS_INTERNAL,
  AUD_INTERNAL,
  AWG_INTERNAL,
  AZN_INTERNAL,
  BAM_INTERNAL,
  BBD_INTERNAL,
  BDT_INTERNAL,
  BGN_INTERNAL,
  BHD_INTERNAL,
  BIF_INTERNAL,
  BMD_INTERNAL,
  BND_INTERNAL,
  BOB_INTERNAL,
  BRL_INTERNAL,
  BSD_INTERNAL,
  BTN_INTERNAL,
  BWP_INTERNAL,
  BYR_INTERNAL,
  BZD_INTERNAL,
  CAD_INTERNAL,
  CDF_INTERNAL,
  CHF_INTERNAL,
  CLP_INTERNAL,
  CNY_INTERNAL,
  COP_INTERNAL,
  CRC_INTERNAL,
  CUC_INTERNAL,
  CUP_INTERNAL,
  CVE_INTERNAL,
  CZK_INTERNAL,
  DJF_INTERNAL,
  DKK_INTERNAL,
  DOP_INTERNAL,
  DZD_INTERNAL,
  EGP_INTERNAL,
  ERN_INTERNAL,
  ETB_INTERNAL,
  EUR_INTERNAL,
  FJD_INTERNAL,
  FKP_INTERNAL,
  GBP_INTERNAL,
  GEL_INTERNAL,
  GGP_INTERNAL,
  GHS_INTERNAL,
  GIP_INTERNAL,
  GMD_INTERNAL,
  GNF_INTERNAL,
  GTQ_INTERNAL,
  GYD_INTERNAL,
  HKD_INTERNAL,
  HNL_INTERNAL,
  HRK_INTERNAL,
  HTG_INTERNAL,
  HUF_INTERNAL,
  IDR_INTERNAL,
  ILS_INTERNAL,
  IMP_INTERNAL,
  INR_INTERNAL,
  IQD_INTERNAL,
  IRR_INTERNAL,
  ISK_INTERNAL,
  JEP_INTERNAL,
  JMD_INTERNAL,
  JOD_INTERNAL,
  JPY_INTERNAL,
  KES_INTERNAL,
  KGS_INTERNAL,
  KHR_INTERNAL,
  KMF_INTERNAL,
  KPW_INTERNAL,
  KRW_INTERNAL,
  KWD_INTERNAL,
  KYD_INTERNAL,
  KZT_INTERNAL,
  LAK_INTERNAL,
  LBP_INTERNAL,
  LKR_INTERNAL,
  LRD_INTERNAL,
  LSL_INTERNAL,
  LTL_INTERNAL,
  LYD_INTERNAL,
  MAD_INTERNAL,
  MDL_INTERNAL,
  MGA_INTERNAL,
  MKD_INTERNAL,
  MMK_INTERNAL,
  MNT_INTERNAL,
  MOP_INTERNAL,
  MRO_INTERNAL,
  MUR_INTERNAL,
  MVR_INTERNAL,
  MWK_INTERNAL,
  MXN_INTERNAL,
  MYR_INTERNAL,
  MZN_INTERNAL,
  NAD_INTERNAL,
  NGN_INTERNAL,
  NIO_INTERNAL,
  NOK_INTERNAL,
  NPR_INTERNAL,
  NZD_INTERNAL,
  OMR_INTERNAL,
  PAB_INTERNAL,
  PEN_INTERNAL,
  PGK_INTERNAL,
  PHP_INTERNAL,
  PKR_INTERNAL,
  PLN_INTERNAL,
  PYG_INTERNAL,
  QAR_INTERNAL,
  RON_INTERNAL,
  RSD_INTERNAL,
  RUB_INTERNAL,
  RWF_INTERNAL,
  SAR_INTERNAL,
  SBD_INTERNAL,
  SCR_INTERNAL,
  SDG_INTERNAL,
  SEK_INTERNAL,
  SGD_INTERNAL,
  SHP_INTERNAL,
  SLL_INTERNAL,
  SOS_INTERNAL,
  SPL_INTERNAL,
  SRD_INTERNAL,
  STD_INTERNAL,
  SVC_INTERNAL,
  SYP_INTERNAL,
  SZL_INTERNAL,
  THB_INTERNAL,
  TJS_INTERNAL,
  TMT_INTERNAL,
  TND_INTERNAL,
  TOP_INTERNAL,
  TRY_INTERNAL,
  TTD_INTERNAL,
  TVD_INTERNAL,
  TWD_INTERNAL,
  TZS_INTERNAL,
  UAH_INTERNAL,
  UGX_INTERNAL,
  USD_INTERNAL,
  UYU_INTERNAL,
  UZS_INTERNAL,
  VEF_INTERNAL,
  VND_INTERNAL,
  VUV_INTERNAL,
  WST_INTERNAL,
  XAF_INTERNAL,
  XCD_INTERNAL,
  XDR_INTERNAL,
  XOF_INTERNAL,
  XPF_INTERNAL,
  YER_INTERNAL,
  ZAR_INTERNAL,
  ZMW_INTERNAL,
  ZWD_INTERNAL,
  BYN_INTERNAL,
  LAST
};

PG_FUNCTION_INFO_V1(currency_in);
PG_FUNCTION_INFO_V1(currency_out);
PG_FUNCTION_INFO_V1(currency_recv);
PG_FUNCTION_INFO_V1(currency_send);
PG_FUNCTION_INFO_V1(currency_lt);
PG_FUNCTION_INFO_V1(currency_le);
PG_FUNCTION_INFO_V1(currency_eq);
PG_FUNCTION_INFO_V1(currency_neq);
PG_FUNCTION_INFO_V1(currency_ge);
PG_FUNCTION_INFO_V1(currency_gt);
PG_FUNCTION_INFO_V1(currency_cmp);
PG_FUNCTION_INFO_V1(hash_currency);

Datum currency_in(PG_FUNCTION_ARGS);
Datum currency_out(PG_FUNCTION_ARGS);
Datum currency_recv(PG_FUNCTION_ARGS);
Datum currency_send(PG_FUNCTION_ARGS);
Datum currency_lt(PG_FUNCTION_ARGS);
Datum currency_le(PG_FUNCTION_ARGS);
Datum currency_neq(PG_FUNCTION_ARGS);
Datum currency_ne(PG_FUNCTION_ARGS);
Datum currency_ge(PG_FUNCTION_ARGS);
Datum currency_gt(PG_FUNCTION_ARGS);
Datum currency_cmp(PG_FUNCTION_ARGS);
Datum hash_currency(PG_FUNCTION_ARGS);

#endif // PG_CURRENCY_H
