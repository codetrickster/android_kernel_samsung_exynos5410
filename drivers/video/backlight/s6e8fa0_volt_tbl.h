#ifndef __REF_VOLT_TABLE_H__
#define __REF_VOLT_TABLE_H__

u32 volt_table_vt[16] = {
	412876800,	407115728,	401354657,	395593585,	389832514,	384071442,	378310370,	372549299,
	366788227,	361027155,	346624476,	341823583,	337022690,	332221797,	327420904,	323580190,
};

u32 volt_table_v255[] = {
	412876800,	377830281,	377350192,	376870102,	376390013,	375909924,	375429834,	374949745,
	374469656,	373989567,	373509477,	373029388,	372549299,	372069209,	371589120,	371109031,
	370628941,	370148852,	369668763,	369188673,	368708584,	368228495,	367748406,	367268316,
	366788227,	366308138,	365828048,	365347959,	364867870,	364387780,	363907691,	363427602,
	362947513,	362467423,	361987334,	361507245,	361027155,	360547066,	360066977,	359586887,
	359106798,	358626709,	358146620,	357666530,	357186441,	356706352,	356226262,	355746173,
	355266084,	354785994,	354305905,	353825816,	353345727,	352865637,	352385548,	351905459,
	351425369,	350945280,	350465191,	349985101,	349505012,	349024923,	348544833,	348064744,
	347584655,	347104566,	346624476,	346144387,	345664298,	345184208,	344704119,	344224030,
	343743940,	343263851,	342783762,	342303673,	341823583,	341343494,	340863405,	340383315,
	339903226,	339423137,	338943047,	338462958,	337982869,	337502780,	337022690,	336542601,
	336062512,	335582422,	335102333,	334622244,	334142154,	333662065,	333181976,	332701887,
	332221797,	331741708,	331261619,	330781529,	330301440,	329821351,	329341261,	328861172,
	328381083,	327900993,	327420904,	326940815,	326460726,	325980636,	325500547,	325020458,
	324540368,	324060279,	323580190,	323100100,	322620011,	322139922,	321659833,	321179743,
	320699654,	320219565,	319739475,	319259386,	318779297,	318299207,	317819118,	317339029,
	316858940,	316378850,	315898761,	315418672,	314938582,	314458493,	313978404,	313498314,
	313018225,	312538136,	312058047,	311577957,	311097868,	310617779,	310137689,	309657600,
	309177511,	308697421,	308217332,	307737243,	307257153,	306777064,	306296975,	305816886,
	305336796,	304856707,	304376618,	303896528,	303416439,	302936350,	302456260,	301976171,
	301496082,	301015993,	300535903,	300055814,	299575725,	299095635,	298615546,	298135457,
	297655367,	297175278,	296695189,	296215100,	295735010,	295254921,	294774832,	294294742,
	293814653,	293334564,	292854474,	292374385,	291894296,	291414207,	290934117,	290454028,
	289973939,	289493849,	289013760,	288533671,	288053581,	287573492,	287093403,	286613313,
	286133224,	285653135,	285173046,	284692956,	284212867,	283732778,	283252688,	282772599,
	282292510,	281812420,	281332331,	280852242,	280372153,	279892063,	279411974,	278931885,
	278451795,	277971706,	277491617,	277011527,	276531438,	276051349,	275571260,	275091170,
	274611081,	274130992,	273650902,	273170813,	272690724,	272210634,	271730545,	271250456,
	270770367,	270290277,	269810188,	269330099,	268850009,	268369920,	267889831,	267409741,
	266929652,	266449563,	265969473,	265489384,	265009295,	264529206,	264049116,	263569027,
	263088938,	262608848,	262128759,	261648670,	261168580,	260688491,	260208402,	259728313,
	259248223,	258768134,	258288045,	257807955,	257327866,	256847777,	256367687,	255887598,
	255407509,	254927420,	254447330,	253967241,	253487152,	253007062,	252526973,	252046884,
	251566794,	251086705,	250606616,	250126527,	249646437,	249166348,	248686259,	248206169,
	247726080,	247245991,	246765901,	246285812,	245805723,	245325633,	244845544,	244365455,
	243885366,	243405276,	242925187,	242445098,	241965008,	241484919,	241004830,	240524740,
	240044651,	239564562,	239084473,	238604383,	238124294,	237644205,	237164115,	236684026,
	236203937,	235723847,	235243758,	234763669,	234283580,	233803490,	233323401,	232843312,
	232363222,	231883133,	231403044,	230922954,	230442865,	229962776,	229482687,	229002597,
	228522508,	228042419,	227562329,	227082240,	226602151,	226122061,	225641972,	225161883,
	224681793,	224201704,	223721615,	223241526,	222761436,	222281347,	221801258,	221321168,
	220841079,	220360990,	219880900,	219400811,	218920722,	218440633,	217960543,	217480454,
	217000365,	216520275,	216040186,	215560097,	215080007,	214599918,	214119829,	213639740,
	213159650,	212679561,	212199472,	211719382,	211239293,	210759204,	210279114,	209799025,
	209318936,	208838847,	208358757,	207878668,	207398579,	206918489,	206438400,	205958311,
	205478221,	204998132,	204518043,	204037953,	203557864,	203077775,	202597686,	202117596,
	201637507,	201157418,	200677328,	200197239,	199717150,	199237060,	198756971,	198276882,
	197796793,	197316703,	196836614,	196356525,	195876435,	195396346,	194916257,	194436167,
	193956078,	193475989,	192995900,	192515810,	192035721,	191555632,	191075542,	190595453,
	190115364,	189635274,	189155185,	188675096,	188195007,	187714917,	187234828,	186754739,
	186274649,	185794560,	185314471,	184834381,	184354292,	183874203,	183394113,	182914024,
	182433935,	181953846,	181473756,	180993667,	180513578,	180033488,	179553399,	179073310,
	178593220,	178113131,	177633042,	177152953,	176672863,	176192774,	175712685,	175232595,
	174752506,	174272417,	173792327,	173312238,	172832149,	172352060,	171871970,	171391881,
	170911792,	170431702,	169951613,	169471524,	168991434,	168511345,	168031256,	167551167,
	167071077,	166590988,	166110899,	165630809,	165150720,	164670631,	164190541,	163710452,
	163230363,	162750273,	162270184,	161790095,	161310006,	160829916,	160349827,	159869738,
	159389648,	158909559,	158429470,	157949380,	157469291,	156989202,	156509113,	156029023,
	155548934,	155068845,	154588755,	154108666,	153628577,	153148487,	152668398,	152188309,
	151708220,	151228130,	150748041,	150267952,	149787862,	149307773,	148827684,	148347594,
	147867505,	147387416,	146907327,	146427237,	145947148,	145467059,	144986969,	144506880,
	144026791,	143546701,	143066612,	142586523,	142106433,	141626344,	141146255,	140666166,
	140186076,	139705987,	139225898,	138745808,	138265719,	137785630,	137305540,	136825451,
	136345362,	135865273,	135385183,	134905094,	134425005,	133944915,	133464826,	132984737,
};

u32 volt_table_cv_64_dv_320[256] = {
	13104,	13308,	13513,	13718,	13923,	14127,	14332,	14537,
	14742,	14946,	15151,	15356,	15561,	15765,	15970,	16175,
	16380,	16585,	16789,	16994,	17199,	17404,	17608,	17813,
	18018,	18223,	18427,	18632,	18837,	19042,	19246,	19451,
	19656,	19861,	20065,	20270,	20475,	20680,	20884,	21089,
	21294,	21499,	21703,	21908,	22113,	22318,	22522,	22727,
	22932,	23137,	23341,	23546,	23751,	23956,	24160,	24365,
	24570,	24775,	24979,	25184,	25389,	25594,	25798,	26003,
	26208,	26413,	26617,	26822,	27027,	27232,	27436,	27641,
	27846,	28051,	28255,	28460,	28665,	28870,	29074,	29279,
	29484,	29689,	29893,	30098,	30303,	30508,	30712,	30917,
	31122,	31327,	31531,	31736,	31941,	32146,	32350,	32555,
	32760,	32965,	33170,	33374,	33579,	33784,	33989,	34193,
	34398,	34603,	34808,	35012,	35217,	35422,	35627,	35831,
	36036,	36241,	36446,	36650,	36855,	37060,	37265,	37469,
	37674,	37879,	38084,	38288,	38493,	38698,	38903,	39107,
	39312,	39517,	39722,	39926,	40131,	40336,	40541,	40745,
	40950,	41155,	41360,	41564,	41769,	41974,	42179,	42383,
	42588,	42793,	42998,	43202,	43407,	43612,	43817,	44021,
	44226,	44431,	44636,	44840,	45045,	45250,	45455,	45659,
	45864,	46069,	46274,	46478,	46683,	46888,	47093,	47297,
	47502,	47707,	47912,	48116,	48321,	48526,	48731,	48935,
	49140,	49345,	49550,	49755,	49959,	50164,	50369,	50574,
	50778,	50983,	51188,	51393,	51597,	51802,	52007,	52212,
	52416,	52621,	52826,	53031,	53235,	53440,	53645,	53850,
	54054,	54259,	54464,	54669,	54873,	55078,	55283,	55488,
	55692,	55897,	56102,	56307,	56511,	56716,	56921,	57126,
	57330,	57535,	57740,	57945,	58149,	58354,	58559,	58764,
	58968,	59173,	59378,	59583,	59787,	59992,	60197,	60402,
	60606,	60811,	61016,	61221,	61425,	61630,	61835,	62040,
	62244,	62449,	62654,	62859,	63063,	63268,	63473,	63678,
	63882,	64087,	64292,	64497,	64701,	64906,	65111,	65316
};

const u32 gamma_300_gra_table[256] = {
	0,	2,	7,	17,	32,	53,	78, 110,
	148,	191,	241,	298,	361,	430,	506,	589,
	679,	776,	880,	991,	1109,	1235,	1368,	1508,
	1657,	1812,	1975,	2147,	2325,	2512,	2706,	2909,
	3119,	3338,	3564,	3799,	4042,	4293,	4553,	4820,
	5096,	5381,	5674,	5975,	6285,	6604,	6931,	7267,
	7611,	7965,	8327,	8697,	9077,	9465,	9863,	10269,
	10684,	11109,	11542,	11984,	12436,	12896,	13366,	13845,
	14333,	14830,	15337,	15852,	16378,	16912,	17456,	18009,
	18572,	19144,	19726,	20317,	20918,	21528,	22148,	22778,
	23417,	24066,	24724,	25392,	26070,	26758,	27456,	28163,
	28880,	29607,	30344,	31090,	31847,	32613,	33390,	34176,
	34973,	35779,	36596,	37422,	38259,	39106,	39963,	40830,
	41707,	42594,	43492,	44399,	45317,	46246,	47184,	48133,
	49092,	50062,	51042,	52032,	53032,	54043,	55065,	56097,
	57139,	58192,	59255,	60329,	61413,	62508,	63613,	64729,
	65856,	66993,	68141,	69299,	70469,	71648,	72839,	74040,
	75252,	76475,	77708,	78952,	80207,	81473,	82750,	84037,
	85336,	86645,	87965,	89296,	90638,	91990,	93354,	94729,
	96114,	97511,	98919,	100337,	101767,	103208,	104659,	106122,
	107596,	109081,	110577,	112085,	113603,	115132,	116673,	118225,
	119788,	121362,	122948,	124544,	126152,	127772,	129402,	131044,
	132697,	134361,	136037,	137724,	139422,	141132,	142853,	144586,
	146330,	148085,	149852,	151630,	153419,	155220,	157033,	158857,
	160692,	162540,	164398,	166268,	168150,	170043,	171948,	173864,
	175792,	177731,	179683,	181645,	183620,	185606,	187603,	189613,
	191634,	193667,	195711,	197767,	199835,	201915,	204006,	206109,
	208224,	210351,	212489,	214640,	216802,	218976,	221161,	223359,
	225569,	227790,	230023,	232268,	234525,	236794,	239075,	241368,
	243672,	245989,	248318,	250658,	253011,	255375,	257752,	260141,
	262541,	264954,	267379,	269815,	272264,	274725,	277198,	279683,
	282180,	284689,	287211,	289744,	292290,	294848,	297418,	300000
};

const u32 gamma_control_set_19[] = {
	0,	26,	99,	215,	372,	569,	805,	1079,
	1391,	1740,	2126,	2548,	3006,	3499,	4029,	4593,
	5192,	5826,	6495,	7197,	7934,	8705,	9509,	10348,
	11219,	12124,	13062,	14033,	15037,	16074,	17143,	18245,
	19380,	20547,	21746,	22977,	24240,	25536,	26863,	28222,
	29613,	31035,	32489,	33975,	35492,	37040,	38620,	40230,
	41872,	43545,	45249,	46984,	48750,	50547,	52374,	54232,
	56121,	58041,	59991,	61971,	63982,	66023,	68095,	70197,
	72329,	74491,	76684,	78907,	81159,	83442,	85755,	88097,
	90470,	92872,	95304,	97766,	100258,	102779,	105330,	107910,
	110520,	113160,	115829,	118528,	121256,	124013,	126800,	129616,
	132461,	135336,	138240,	141173,	144135,	147126,	150146,	153196,
	156274,	159382,	162518,	165683,	168878,	172101,	175353,	178634,
	181943,	185282,	188649,	192044,	195469,	198922,	202404,	205914,
	209453,	213021,	216617,	220241,	223894,	227576,	231286,	235024,
	238791,	242586,	246409,	250261,	254141,	258049,	261985,	265950,
	269943,	273964,	278013,	282090,	286196,	290329,	294491,	298681,
	302898,	307144,	311418,	315719,	320049,	324406,	328792,	333205,
	337646,	342115,	346612,	351136,	355689,	360269,	364877,	369513,
	374176,	378867,	383586,	388332,	393106,	397908,	402737,	407594,
	412478,	417390,	422330,	427297,	432291,	437313,	442363,	447440,
	452544,	457676,	462835,	468021,	473235,	478477,	483745,	489041,
	494365,	499715,	505093,	510498,	515930,	521390,	526877,	532391,
	537932,	543500,	549095,	554718,	560368,	566045,	571749,	577480,
	583238,	589023,	594835,	600674,	606541,	612434,	618354,	624301,
	630275,	636276,	642304,	648359,	654441,	660550,	666686,	672848,
	679037,	685254,	691497,	697766,	704063,	710386,	716737,	723113,
	729517,	735948,	742405,	748889,	755399,	761936,	768500,	775091,
	781708,	788352,	795022,	801720,	808443,	815194,	821971,	828774,
	835604,	842461,	849344,	856253,	863190,	870152,	877141,	884157,
	891199,	898268,	905363,	912484,	919632,	926806,	934007,	941234,
	948488,	955767,	963074,	970406,	977765,	985150,	992562,	1000000
};

const u32 gamma_control_set_20[] = {
	0,	15,	61,	138,	246,	384,	553,	753,
	984,	1245,	1537,	1860,	2214,	2599,	3014,	3460,
	3936,	4444,	4982,	5551,	6151,	6782,	7443,	8135,
	8858,	9611,	10396,	11211,	12056,	12933,	13840,	14778,
	15747,	16747,	17777,	18838,	19930,	21053,	22206,	23391,
	24605,	25851,	27128,	28435,	29773,	31141,	32541,	33971,
	35432,	36924,	38446,	40000,	41584,	43198,	44844,	46520,
	48227,	49965,	51733,	53533,	55363,	57224,	59115,	61038,
	62991,	64975,	66989,	69034,	71111,	73217,	75355,	77524,
	79723,	81953,	84213,	86505,	88827,	91180,	93564,	95978,
	98423,	100899,	103406,	105943,	108512,	111111,	113740,	116401,
	119092,	121814,	124567,	127351,	130165,	133010,	135886,	138792,
	141730,	144698,	147697,	150726,	153787,	156878,	160000,	163152,
	166336,	169550,	172795,	176070,	179377,	182714,	186082,	189480,
	192910,	196370,	199861,	203383,	206935,	210519,	214133,	217777,
	221453,	225159,	228896,	232664,	236462,	240292,	244152,	248043,
	251964,	255916,	259900,	263913,	267958,	272033,	276139,	280276,
	284444,	288642,	292871,	297131,	301422,	305743,	310096,	314479,
	318892,	323337,	327812,	332318,	336855,	341422,	346020,	350649,
	355309,	360000,	364721,	369473,	374256,	379069,	383913,	388788,
	393694,	398631,	403598,	408596,	413625,	418685,	423775,	428896,
	434048,	439231,	444444,	449688,	454963,	460269,	465605,	470972,
	476370,	481799,	487258,	492748,	498269,	503821,	509404,	515017,
	520661,	526336,	532041,	537777,	543544,	549342,	555171,	561030,
	566920,	572841,	578792,	584775,	590788,	596831,	602906,	609011,
	615148,	621314,	627512,	633740,	640000,	646289,	652610,	658961,
	665344,	671757,	678200,	684675,	691180,	697716,	704282,	710880,
	717508,	724167,	730857,	737577,	744329,	751111,	757923,	764767,
	771641,	778546,	785482,	792449,	799446,	806474,	813533,	820622,
	827743,	834894,	842076,	849288,	856532,	863806,	871111,	878446,
	885813,	893210,	900638,	908096,	915586,	923106,	930657,	938239,
	945851,	953494,	961168,	968873,	976608,	984375,	992172,	1000000
};

const u32 gamma_control_set_21[] = {
	0,	9,	38,	89,	163,	260,	381,	526,
	697,	892,	1113,	1359,	1632,	1930,	2255,	2607,
	2985,	3391,	3823,	4283,	4770,	5284,	5826,	6396,
	6994,	7620,	8274,	8957,	9668,	10407,	11175,	11971,
	12797,	13651,	14534,	15446,	16388,	17358,	18358,	19387,
	20446,	21534,	22652,	23799,	24976,	26183,	27420,	28687,
	29983,	31310,	32667,	34054,	35471,	36919,	38397,	39905,
	41444,	43014,	44614,	46244,	47906,	49598,	51321,	53074,
	54859,	56674,	58521,	60399,	62307,	64247,	66218,	68220,
	70253,	72318,	74414,	76542,	78700,	80891,	83113,	85366,
	87651,	89968,	92316,	94696,	97108,	99551,	102027,	104534,
	107073,	109644,	112248,	114883,	117550,	120249,	122980,	125744,
	128540,	131367,	134228,	137120,	140045,	143002,	145991,	149013,
	152068,	155155,	158274,	161426,	164610,	167827,	171077,	174359,
	177674,	181022,	184403,	187816,	191262,	194741,	198253,	201797,
	205375,	208985,	212629,	216305,	220015,	223758,	227533,	231342,
	235184,	239059,	242967,	246909,	250883,	254891,	258932,	263007,
	267115,	271256,	275431,	279639,	283880,	288155,	292464,	296806,
	301181,	305590,	310033,	314509,	319019,	323562,	328139,	332750,
	337394,	342073,	346785,	351530,	356310,	361123,	365971,	370852,
	375767,	380715,	385698,	390715,	395766,	400851,	405969,	411122,
	416309,	421530,	426785,	432074,	437397,	442754,	448146,	453572,
	459032,	464526,	470054,	475617,	481214,	486845,	492511,	498211,
	503945,	509714,	515517,	521355,	527227,	533133,	539074,	545050,
	551060,	557104,	563183,	569297,	575445,	581628,	587845,	594097,
	600384,	606705,	613061,	619452,	625877,	632338,	638833,	645362,
	651927,	658526,	665161,	671830,	678533,	685272,	692046,	698854,
	705698,	712576,	719490,	726438,	733421,	740440,	747493,	754581,
	761705,	768863,	776057,	783286,	790550,	797848,	805183,	812552,
	819956,	827396,	834871,	842381,	849926,	857506,	865122,	872773,
	880460,	888181,	895938,	903731,	911558,	919421,	927320,	935254,
	943223,	951228,	959268,	967343,	975454,	983601,	991783,	1000000
};

const u32 gamma_control_set_215[] = {
	0,	7,	30,	72, 132,	214,	316,	440,
	586,	755,	947,	1162,	1401,	1664,	1951,	2263,
	2599,	2961,	3348,	3761,	4200,	4664,	5155,	5671,
	6215,	6785,	7382,	8006,	8657,	9335,	10041,	10774,
	11535,	12324,	13141,	13986,	14859,	15761,	16691,	17650,
	18637,	19653,	20698,	21772,	22876,	24008,	25170,	26361,
	27581,	28832,	30111,	31421,	32761,	34130,	35530,	36959,
	38419,	39909,	41430,	42981,	44562,	46175,	47817,	49491,
	51195,	52931,	54697,	56494,	58323,	60182,	62073,	63995,
	65949,	67934,	69950,	71998,	74078,	76190,	78333,	80508,
	82715,	84954,	87225,	89528,	91863,	94231,	96630,	99062,
	101526,	104023,	106552,	109114,	111708,	114335,	116994,	119687,
	122412,	125170,	127961,	130784,	133641,	136531,	139454,	142410,
	145399,	148422,	151477,	154566,	157689,	160845,	164034,	167257,
	170513,	173803,	177127,	180485,	183876,	187301,	190759,	194252,
	197779,	201339,	204934,	208562,	212225,	215922,	219653,	223418,
	227217,	231051,	234919,	238821,	242758,	246729,	250735,	254775,
	258850,	262959,	267103,	271282,	275496,	279744,	284027,	288345,
	292697,	297085,	301507,	305965,	310457,	314985,	319548,	324145,
	328778,	333446,	338150,	342888,	347662,	352471,	357316,	362195,
	367111,	372062,	377048,	382070,	387127,	392220,	397348,	402513,
	407713,	412948,	418220,	423527,	428870,	434248,	439663,	445114,
	450600,	456123,	461681,	467276,	472906,	478573,	484276,	490014,
	495790,	501601,	507448,	513332,	519252,	525209,	531201,	537231,
	543296,	549398,	555537,	561712,	567923,	574171,	580456,	586777,
	593135,	599529,	605961,	612429,	618933,	625475,	632053,	638668,
	645320,	652009,	658735,	665497,	672297,	679133,	686007,	692918,
	699865,	706850,	713872,	720931,	728027,	735161,	742331,	749539,
	756784,	764067,	771387,	778744,	786138,	793570,	801039,	808546,
	816090,	823672,	831291,	838947,	846642,	854374,	862143,	869950,
	877795,	885677,	893597,	901555,	909551,	917584,	925655,	933764,
	941911,	950096,	958318,	966579,	974877,	983214,	991588,	1000000
};

const u32 gamma_control_set_22[] = {
	0,	6,	24,	57,	108,	176,	262,	368,
	493,	639,	805,	993,	1202,	1434,	1687,	1964,
	2263,	2586,	2933,	3303,	3698,	4117,	4560,	5029,
	5522,	6041,	6585,	7156,	7752,	8374,	9022,	9697,
	10398,	11127,	11882,	12664,	13474,	14311,	15176,	16068,
	16989,	17937,	18913,	19918,	20952,	22013,	23104,	24223,
	25372,	26549,	27756,	28992,	30257,	31552,	32876,	34231,
	35615,	37029,	38473,	39948,	41452,	42988,	44553,	46149,
	47776,	49434,	51123,	52842,	54593,	56375,	58188,	60032,
	61908,	63815,	65754,	67725,	69728,	71762,	73828,	75927,
	78057,	80220,	82415,	84642,	86902,	89194,	91519,	93876,
	96267,	98690,	101146,	103635,	106157,	108712,	111300,	113921,
	116576,	119265,	121986,	124741,	127530,	130353,	133209,	136099,
	139023,	141981,	144973,	147999,	151059,	154153,	157281,	160444,
	163641,	166873,	170139,	173440,	176775,	180145,	183549,	186989,
	190463,	193973,	197517,	201096,	204711,	208360,	212045,	215765,
	219520,	223311,	227137,	230999,	234896,	238828,	242797,	246801,
	250841,	254916,	259028,	263175,	267359,	271578,	275833,	280125,
	284453,	288816,	293217,	297653,	302126,	306635,	311181,	315763,
	320382,	325037,	329730,	334458,	339224,	344026,	348865,	353741,
	358654,	363604,	368591,	373616,	378677,	383775,	388911,	394084,
	399294,	404541,	409826,	415149,	420508,	425906,	431341,	436813,
	442323,	447871,	453457,	459080,	464742,	470441,	476178,	481953,
	487766,	493617,	499506,	505433,	511398,	517402,	523444,	529524,
	535642,	541799,	547994,	554228,	560500,	566810,	573159,	579547,
	585973,	592439,	598942,	605485,	612066,	618686,	625345,	632043,
	638780,	645556,	652371,	659224,	666117,	673050,	680021,	687031,
	694081,	701170,	708298,	715466,	722673,	729919,	737205,	744531,
	751896,	759300,	766744,	774228,	781751,	789314,	796917,	804560,
	812242,	819964,	827726,	835528,	843370,	851252,	859174,	867136,
	875138,	883180,	891263,	899385,	907548,	915751,	923994,	932277,
	940601,	948965,	957370,	965815,	974301,	982827,	991393,	1000000
};

const u32 gamma_control_set_225[] = {
	0,	4,	19,	46,	88,	144,	217,	307,
	415,	540,	685,	849,	1032,	1235,	1460,	1705,
	1971,	2259,	2569,	2901,	3256,	3634,	4034,	4459,
	4907,	5379,	5875,	6396,	6941,	7511,	8107,	8727,
	9373,	10045,	10743,	11467,	12218,	12994,	13798,	14628,
	15486,	16370,	17283,	18222,	19190,	20185,	21208,	22259,
	23339,	24448,	25584,	26750,	27945,	29168,	30421,	31704,
	33015,	34357,	35728,	37129,	38559,	40020,	41512,	43033,
	44586,	46168,	47782,	49426,	51102,	52808,	54546,	56314,
	58115,	59947,	61810,	63705,	65632,	67591,	69583,	71606,
	73661,	75749,	77870,	80023,	82208,	84427,	86678,	88962,
	91279,	93630,	96014,	98431,	100881,	103365,	105883,	108434,
	111019,	113638,	116291,	118978,	121699,	124454,	127244,	130068,
	132926,	135819,	138747,	141710,	144707,	147739,	150806,	153909,
	157046,	160218,	163426,	166669,	169948,	173262,	176612,	179997,
	183419,	186876,	190369,	193898,	197462,	201063,	204701,	208374,
	212084,	215830,	219613,	223432,	227288,	231181,	235110,	239076,
	243079,	247119,	251196,	255311,	259462,	263650,	267876,	272139,
	276440,	280778,	285154,	289567,	294018,	298507,	303034,	307598,
	312200,	316841,	321519,	326236,	330991,	335784,	340615,	345485,
	350393,	355339,	360325,	365348,	370411,	375512,	380652,	385831,
	391049,	396306,	401601,	406936,	412310,	417723,	423176,	428668,
	434199,	439769,	445379,	451029,	456718,	462447,	468215,	474024,
	479872,	485760,	491687,	497655,	503663,	509711,	515799,	521927,
	528096,	534305,	540554,	546843,	553173,	559544,	565955,	572406,
	578899,	585432,	592005,	598620,	605275,	611971,	618709,	625487,
	632306,	639167,	646068,	653011,	659995,	667020,	674087,	681195,
	688345,	695536,	702768,	710042,	717358,	724715,	732115,	739556,
	747038,	754563,	762130,	769738,	777389,	785081,	792816,	800593,
	808412,	816273,	824177,	832123,	840111,	848142,	856215,	864331,
	872489,	880690,	888934,	897220,	905549,	913921,	922335,	930793,
	939293,	947836,	956423,	965052,	973724,	982440,	991199,	1000000
};

const u32 *GAMMA_CONTROL_TABLE[G_MAX] = {
	gamma_control_set_19,
	gamma_control_set_20,
	gamma_control_set_21,
	gamma_control_set_215,
	gamma_control_set_22,
	gamma_control_set_225
};

const struct str_flookup_table flookup_table[302] = {
	{  0,   0},  {  1,  20},
	{ 20,   7},  { 27,   5},
	{ 32,   4},  { 36,   4},
	{ 40,   4},  { 44,   3},
	{ 47,   3},  { 50,   2},
	{ 52,   3},  { 55,   2},
	{ 57,   3},  { 60,   2},
	{ 62,   2},  { 64,   2},
	{ 66,   2},  { 68,   2},
	{ 70,   1},  { 71,   2},
	{ 73,   2},  { 75,   2},
	{ 77,   1},  { 78,   2},
	{ 80,   1},  { 81,   2},
	{ 83,   1},  { 84,   2},
	{ 86,   1},  { 87,   2},
	{ 89,   1},  { 90,   1},
	{ 91,   2},  { 93,   1},
	{ 94,   1},  { 95,   2},
	{ 97,   1},  { 98,   1},
	{ 99,   1},  {100,   1},
	{101,   2},  {103,   1},
	{104,   1},  {105,   1},
	{106,   1},  {107,   1},
	{108,   1},  {109,   1},
	{110,   1},  {111,   1},
	{112,   1},  {113,   1},
	{114,   1},  {115,   1},
	{116,   1},  {117,   1},
	{118,   1},  {119,   1},
	{120,   1},  {121,   1},
	{122,   1},  {123,   1},
	{124,   1},  {125,   1},
	{126,   1},  {127,   1},
	{128,   1},  {129,   1},
	{  0,   0},  {130,   1},
	{131,   1},  {132,   1},
	{133,   1},  {134,   1},
	{  0,   0},  {135,   1},
	{136,   1},  {137,   1},
	{138,   1},  {139,   1},
	{  0,   0},  {140,   1},
	{141,   1},  {142,   1},
	{  0,   0},  {143,   1},
	{144,   1},  {145,   1},
	{146,   1},  {  0,   0},
	{147,   1},  {148,   1},
	{149,   1},  {  0,   0},
	{150,   1},  {151,   1},
	{  0,   0},  {152,   1},
	{153,   1},  {154,   1},
	{  0,   0},  {155,   1},
	{156,   1},  {  0,   0},
	{157,   1},  {158,   1},
	{  0,   0},  {159,   1},
	{160,   1},  {  0,   0},
	{161,   1},  {162,   1},
	{  0,   0},  {163,   1},
	{164,   1},  {  0,   0},
	{165,   1},  {166,   1},
	{  0,   0},  {167,   1},
	{168,   1},  {  0,   0},
	{169,   1},  {170,   1},
	{  0,   0},  {171,   1},
	{  0,   0},  {172,   1},
	{173,   1},  {  0,   0},
	{174,   1},  {  0,   0},
	{175,   1},  {176,   1},
	{  0,   0},  {177,   1},
	{  0,   0},  {178,   1},
	{179,   1},  {  0,   0},
	{180,   1},  {  0,   0},
	{181,   1},  {182,   1},
	{  0,   0},  {183,   1},
	{  0,   0},  {184,   1},
	{  0,   0},  {185,   1},
	{186,   1},  {  0,   0},
	{187,   1},  {  0,   0},
	{188,   1},  {  0,   0},
	{189,   1},  {  0,   0},
	{190,   1},  {191,   1},
	{  0,   0},  {192,   1},
	{  0,   0},  {193,   1},
	{  0,   0},  {194,   1},
	{  0,   0},  {195,   1},
	{  0,   0},  {196,   1},
	{  0,   0},  {197,   1},
	{198,   1},  {  0,   0},
	{199,   1},  {  0,   0},
	{200,   1},  {  0,   0},
	{201,   1},  {  0,   0},
	{202,   1},  {  0,   0},
	{203,   1},  {  0,   0},
	{204,   1},  {  0,   0},
	{205,   1},  {  0,   0},
	{206,   1},  {  0,   0},
	{207,   1},  {  0,   0},
	{208,   1},  {  0,   0},
	{209,   1},  {  0,   0},
	{210,   1},  {  0,   0},
	{211,   1},  {  0,   0},
	{212,   1},  {  0,   0},
	{213,   1},  {  0,   0},
	{  0,   0},  {214,   1},
	{  0,   0},  {215,   1},
	{  0,   0},  {216,   1},
	{  0,   0},  {217,   1},
	{  0,   0},  {218,   1},
	{  0,   0},  {219,   1},
	{  0,   0},  {220,   1},
	{  0,   0},  {221,   1},
	{  0,   0},  {  0,   0},
	{222,   1},  {  0,   0},
	{223,   1},  {  0,   0},
	{224,   1},  {  0,   0},
	{225,   1},  {  0,   0},
	{  0,   0},  {226,   1},
	{  0,   0},  {227,   1},
	{  0,   0},  {228,   1},
	{  0,   0},  {229,   1},
	{  0,   0},  {  0,   0},
	{230,   1},  {  0,   0},
	{231,   1},  {  0,   0},
	{232,   1},  {  0,   0},
	{233,   1},  {  0,   0},
	{  0,   0},  {234,   1},
	{  0,   0},  {235,   1},
	{  0,   0},  {  0,   0},
	{236,   1},  {  0,   0},
	{237,   1},  {  0,   0},
	{238,   1},  {  0,   0},
	{  0,   0},  {239,   1},
	{  0,   0},  {240,   1},
	{  0,   0},  {241,   1},
	{  0,   0},  {  0,   0},
	{242,   1},  {  0,   0},
	{243,   1},  {  0,   0},
	{  0,   0},  {244,   1},
	{  0,   0},  {245,   1},
	{  0,   0},  {  0,   0},
	{246,   1},  {  0,   0},
	{247,   1},  {  0,   0},
	{  0,   0},  {248,   1},
	{  0,   0},  {249,   1},
	{  0,   0},  {  0,   0},
	{250,   1},  {  0,   0},
	{251,   1},  {  0,   0},
	{  0,   0},  {252,   1},
	{  0,   0},  {253,   1},
	{  0,   0},  {  0,   0},
	{254,   1},  {  0,   0},
	{  0,   0},  {255,   1},
};

#endif