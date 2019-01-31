// generated from file './/fenderizer.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace fenderizer {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec4[2];
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec5[2];
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fRec6[6];
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fRec2[4];
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fRec0[9];
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "fenderizer";
	name = N_("fenderizer");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<6; i++) fRec6[i] = 0;
	for (int i=0; i<4; i++) fRec2[i] = 0;
	for (int i=0; i<9; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (1.35304140951404e-41 * fConst0);
	fConst2 = (6.70836787929614e-08 + (fConst0 * ((fConst0 * (8.01917961917164e-13 + (fConst0 * ((fConst0 * (1.45225355827373e-20 + (fConst0 * ((fConst0 * (3.60570986742437e-29 + (fConst0 * (fConst1 - 2.94529539570927e-34)))) - 1.12712211169357e-24)))) - 1.76808724839847e-16)))) - 4.5799213919247e-10)));
	fConst3 = (1.08243312761123e-40 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (5.36669430343691e-07 + (fConst0 * ((fConst0 * (3.20767184766866e-12 + (fConst0 * ((fConst4 * (2.25424422338715e-24 + (fConst0 * ((fConst0 * (1.76717723742556e-33 - fConst3)) - 1.44228394696975e-28)))) - 3.53617449679695e-16)))) - 2.74795283515482e-09)));
	fConst6 = (3.7885159466393e-40 * fConst0);
	fConst7 = (1.87834300620292e-06 + (fConst0 * ((fConst0 * (3.20767184766866e-12 + (fConst0 * (3.53617449679695e-16 + (fConst0 * ((fConst0 * (2.25424422338715e-24 + (fConst0 * (1.44228394696975e-28 + (fConst0 * (fConst6 - 4.12341355399298e-33)))))) - 5.8090142330949e-20)))))) - 6.41188994869459e-09)));
	fConst8 = (7.57703189327861e-40 * fConst0);
	fConst9 = (3.75668601240584e-06 + (fConst0 * ((fConst0 * ((fConst0 * (1.06085234903908e-15 + (fConst4 * ((fConst0 * (1.44228394696975e-28 + (fConst0 * (4.12341355399298e-33 - fConst8)))) - 6.76273267016145e-24)))) - 3.20767184766866e-12)) - 6.41188994869459e-09)));
	fConst10 = (4.6958575155073e-06 + (fConst4 * ((fConst4 * (8.71352134964236e-20 + (fConst4 * ((9.47128986659826e-40 * fConst4) - 3.60570986742437e-28)))) - 8.01917961917164e-12)));
	fConst11 = (3.75668601240584e-06 + (fConst0 * (6.41188994869459e-09 + (fConst0 * ((fConst0 * ((fConst4 * (6.76273267016145e-24 + (fConst0 * (1.44228394696975e-28 + (fConst0 * (0 - (4.12341355399298e-33 + fConst8))))))) - 1.06085234903908e-15)) - 3.20767184766866e-12)))));
	fConst12 = (1.87834300620292e-06 + (fConst0 * (6.41188994869459e-09 + (fConst0 * (3.20767184766866e-12 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.44228394696975e-28 + (fConst0 * (4.12341355399298e-33 + fConst6)))) - 2.25424422338715e-24)) - 5.8090142330949e-20)) - 3.53617449679695e-16)))))));
	fConst13 = (5.36669430343691e-07 + (fConst0 * (2.74795283515482e-09 + (fConst0 * (3.20767184766866e-12 + (fConst0 * (3.53617449679695e-16 + (fConst4 * ((fConst0 * ((fConst0 * (0 - (1.76717723742556e-33 + fConst3))) - 1.44228394696975e-28)) - 2.25424422338715e-24)))))))));
	fConst14 = (1.0 / (6.70836787929614e-08 + (fConst0 * (4.5799213919247e-10 + (fConst0 * (8.01917961917164e-13 + (fConst0 * (1.76808724839847e-16 + (fConst0 * (1.45225355827373e-20 + (fConst0 * (1.12712211169357e-24 + (fConst0 * (3.60570986742437e-29 + (fConst0 * (2.94529539570927e-34 + fConst1))))))))))))))));
	fConst15 = (1.7584737334004e-14 * fConst0);
	fConst16 = (0 - (3.99653121227363e-10 + fConst15));
	fConst17 = (1.6047831291012e-14 * fConst0);
	fConst18 = (3.64633916308782e-10 + fConst17);
	fConst19 = (2.50775235730737e-15 * fConst0);
	fConst20 = (1.92964225857399e-09 + (fConst0 * (5.7097713237236e-11 + fConst19)));
	fConst21 = (1.75845614883891e-14 * fConst0);
	fConst22 = (fConst21 - 3.99649124736115e-10);
	fConst23 = (1.51930611259682e-14 * fConst0);
	fConst24 = (0 - (1.41323923489185e-09 + fConst23));
	fConst25 = (2.39150036242091e-15 * fConst0);
	fConst26 = ((fConst0 * (1.81288835962797e-09 - fConst25)) - 1.81658693061871e-09);
	fConst27 = (fConst15 - 3.99653121227363e-10);
	fConst28 = (3.64633916308782e-10 - fConst17);
	fConst29 = ((fConst0 * (5.7097713237236e-11 - fConst19)) - 1.92964225857399e-09);
	fConst30 = (5.27542120020119e-14 * fConst0);
	fConst31 = (3.99653121227363e-10 - fConst30);
	fConst32 = (4.8143493873036e-14 * fConst0);
	fConst33 = (fConst32 - 3.64633916308782e-10);
	fConst34 = (7.52325707192211e-15 * fConst0);
	fConst35 = ((fConst0 * (fConst34 - 5.7097713237236e-11)) - 1.92964225857399e-09);
	fConst36 = (3.99653121227363e-10 + fConst30);
	fConst37 = (0 - (3.64633916308782e-10 + fConst32));
	fConst38 = (1.92964225857399e-09 + (fConst0 * (0 - (5.7097713237236e-11 + fConst34))));
	fConst39 = (1.81507022746482e-24 * fConst0);
	fConst40 = (5.38015721930222e-16 + (fConst0 * (3.47208331969157e-18 + (fConst0 * (1.31024249517221e-20 + fConst39)))));
	fConst41 = (1.21121707635467e-22 * fConst0);
	fConst42 = (2.31542734194331e-16 + (fConst0 * (8.73769956369654e-19 + fConst41)));
	fConst43 = (5.56353010082836e-24 * fConst0);
	fConst44 = (2.44552600877374e-13 + (fConst0 * (3.95624918170048e-15 + (fConst0 * (2.11973702360197e-17 + (fConst0 * (5.80759627050819e-20 + fConst43)))))));
	fConst45 = (3.71260712724523e-22 * fConst0);
	fConst46 = (1.91631646685486e-13 + (fConst0 * (1.13998059455169e-15 + (fConst0 * (3.82469406243314e-18 + fConst45)))));
	fConst47 = (2.17867970467523e-23 * fConst0);
	fConst48 = (fConst0 * (0 - (3.34577023648853e-23 + fConst47)));
	fConst49 = (1.45385783000571e-21 * fConst0);
	fConst50 = (fConst49 - 4.54379251162467e-20);
	fConst51 = (7.10781930801284e-24 * fConst0);
	fConst52 = (7.58572148544382e-20 + (fConst0 * (4.93853559579293e-20 - fConst51)));
	fConst53 = (4.74312893861592e-22 * fConst0);
	fConst54 = (fConst53 - 3.29330977201307e-18);
	fConst55 = (3.69437583152281e-21 * fConst0);
	fConst56 = ((fConst0 * (fConst55 - 2.24471772057783e-17)) - 3.44805522065628e-17);
	fConst57 = (5.38015721930222e-16 + (fConst0 * ((fConst0 * (1.31024249517221e-20 - fConst39)) - 3.47208331969157e-18)));
	fConst58 = (2.31542734194331e-16 + (fConst0 * (fConst41 - 8.73769956369654e-19)));
	fConst59 = ((fConst0 * (3.95624918170048e-15 + (fConst0 * ((fConst0 * (5.80759627050819e-20 - fConst43)) - 2.11973702360197e-17)))) - 2.44552600877374e-13);
	fConst60 = ((fConst0 * (1.13998059455169e-15 + (fConst0 * (fConst45 - 3.82469406243314e-18)))) - 1.91631646685486e-13);
	fConst61 = (9.07535113732408e-24 * fConst0);
	fConst62 = (5.38015721930222e-16 + (fConst0 * (3.47208331969157e-18 + (fConst0 * (fConst61 - 3.93072748551664e-20)))));
	fConst63 = (3.63365122906399e-22 * fConst0);
	fConst64 = (2.31542734194331e-16 + (fConst0 * (8.73769956369654e-19 - fConst63)));
	fConst65 = (2.78176505041418e-23 * fConst0);
	fConst66 = ((fConst0 * (3.95624918170048e-15 + (fConst0 * (2.11973702360197e-17 + (fConst0 * (fConst65 - 1.74227888115246e-19)))))) - 7.33657802632121e-13);
	fConst67 = (1.11378213817357e-21 * fConst0);
	fConst68 = ((fConst0 * (1.13998059455169e-15 + (fConst0 * (3.82469406243314e-18 - fConst67)))) - 5.74894940056459e-13);
	fConst69 = (1.81507022746482e-23 * fConst0);
	fConst70 = ((fConst0 * (6.94416663938315e-18 + (fConst0 * (2.62048499034442e-20 - fConst69)))) - 1.07603144386044e-15);
	fConst71 = (2.42243415270933e-22 * fConst0);
	fConst72 = ((fConst0 * (1.74753991273931e-18 + fConst71)) - 4.63085468388662e-16);
	fConst73 = (5.56353010082836e-23 * fConst0);
	fConst74 = ((fConst0 * ((fConst0 * (4.23947404720395e-17 + (fConst0 * (1.16151925410164e-19 - fConst73)))) - 7.91249836340096e-15)) - 4.89105201754747e-13);
	fConst75 = (7.42521425449046e-22 * fConst0);
	fConst76 = ((fConst0 * ((fConst0 * (7.64938812486627e-18 + fConst75)) - 2.27996118910338e-15)) - 3.83263293370973e-13);
	fConst77 = ((fConst0 * ((fConst0 * (2.62048499034442e-20 + fConst69)) - 6.94416663938315e-18)) - 1.07603144386044e-15);
	fConst78 = ((fConst0 * (fConst71 - 1.74753991273931e-18)) - 4.63085468388662e-16);
	fConst79 = (4.89105201754747e-13 + (fConst0 * ((fConst0 * ((fConst0 * (1.16151925410164e-19 + fConst73)) - 4.23947404720395e-17)) - 7.91249836340096e-15)));
	fConst80 = (3.83263293370973e-13 + (fConst0 * ((fConst0 * (fConst75 - 7.64938812486627e-18)) - 2.27996118910338e-15)));
	fConst81 = (5.38015721930222e-16 + (fConst0 * ((fConst0 * (0 - (3.93072748551664e-20 + fConst61))) - 3.47208331969157e-18)));
	fConst82 = (2.31542734194331e-16 + (fConst0 * (0 - (8.73769956369654e-19 + fConst63))));
	fConst83 = (7.33657802632121e-13 + (fConst0 * (3.95624918170048e-15 + (fConst0 * ((fConst0 * (0 - (1.74227888115246e-19 + fConst65))) - 2.11973702360197e-17)))));
	fConst84 = (5.74894940056459e-13 + (fConst0 * (1.13998059455169e-15 + (fConst0 * (0 - (3.82469406243314e-18 + fConst67))))));
	fConst85 = (1.08933985233761e-22 * fConst0);
	fConst86 = (fConst0 * (1.00373107094656e-22 + fConst85));
	fConst87 = (4.36157349001713e-21 * fConst0);
	fConst88 = (4.54379251162467e-20 - fConst87);
	fConst89 = (3.55390965400642e-23 * fConst0);
	fConst90 = ((fConst0 * (fConst89 - 1.48156067873788e-19)) - 7.58572148544382e-20);
	fConst91 = (1.42293868158478e-21 * fConst0);
	fConst92 = (3.29330977201307e-18 - fConst91);
	fConst93 = (1.10831274945684e-20 * fConst0);
	fConst94 = ((fConst0 * (2.24471772057783e-17 - fConst93)) - 3.44805522065628e-17);
	fConst95 = (2.17867970467523e-22 * fConst0);
	fConst96 = (fConst0 * (0 - (6.69154047297706e-23 + fConst95)));
	fConst97 = (2.90771566001142e-21 * fConst0);
	fConst98 = (9.08758502324933e-20 + fConst97);
	fConst99 = (7.10781930801284e-23 * fConst0);
	fConst100 = ((fConst0 * (9.87707119158586e-20 - fConst99)) - 1.51714429708876e-19);
	fConst101 = (9.48625787723184e-22 * fConst0);
	fConst102 = (6.58661954402615e-18 + fConst101);
	fConst103 = (7.38875166304562e-21 * fConst0);
	fConst104 = (6.89611044131256e-17 + (fConst0 * (4.48943544115566e-17 + fConst103)));
	fConst105 = (fConst0 * (fConst95 - 6.69154047297706e-23));
	fConst106 = (fConst97 - 9.08758502324933e-20);
	fConst107 = (1.51714429708876e-19 + (fConst0 * (9.87707119158586e-20 + fConst99)));
	fConst108 = (fConst101 - 6.58661954402615e-18);
	fConst109 = (6.89611044131256e-17 + (fConst0 * (fConst103 - 4.48943544115566e-17)));
	fConst110 = (fConst0 * (1.00373107094656e-22 - fConst85));
	fConst111 = (0 - (4.54379251162467e-20 + fConst87));
	fConst112 = (7.58572148544382e-20 + (fConst0 * (0 - (1.48156067873788e-19 + fConst89))));
	fConst113 = (0 - (3.29330977201307e-18 + fConst91));
	fConst114 = ((fConst0 * (0 - (2.24471772057783e-17 + fConst93))) - 3.44805522065628e-17);
	fConst115 = (fConst0 * (fConst47 - 3.34577023648853e-23));
	fConst116 = (4.54379251162467e-20 + fConst49);
	fConst117 = ((fConst0 * (4.93853559579293e-20 + fConst51)) - 7.58572148544382e-20);
	fConst118 = (3.29330977201307e-18 + fConst53);
	fConst119 = ((fConst0 * (2.24471772057783e-17 + fConst55)) - 3.44805522065628e-17);
	fConst120 = (5.27536844651672e-14 * fConst0);
	fConst121 = (3.99649124736115e-10 - fConst120);
	fConst122 = (4.55791833779045e-14 * fConst0);
	fConst123 = (1.41323923489185e-09 + fConst122);
	fConst124 = (7.17450108726274e-15 * fConst0);
	fConst125 = ((fConst0 * (fConst124 - 1.81288835962797e-09)) - 1.81658693061871e-09);
	fConst126 = (3.99649124736115e-10 + fConst120);
	fConst127 = (1.41323923489185e-09 - fConst122);
	fConst128 = (1.81658693061871e-09 + (fConst0 * (0 - (1.81288835962797e-09 + fConst124))));
	fConst129 = (0 - (3.99649124736115e-10 + fConst21));
	fConst130 = (fConst23 - 1.41323923489185e-09);
	fConst131 = (1.81658693061871e-09 + (fConst0 * (1.81288835962797e-09 + fConst25)));
	fConst132 = (2.19852000179812e-16 * fConst0);
	fConst133 = (2.52055840508282e-13 - fConst132);
	fConst134 = (4.39704000359624e-16 * fConst0);
	fConst135 = (1.00822336203313e-12 - fConst134);
	fConst136 = (1.00822336203313e-12 + fConst134);
	fConst137 = (1.31911200107887e-15 * fConst0);
	fConst138 = (fConst137 - 1.00822336203313e-12);
	fConst139 = (0 - (1.00822336203313e-12 + fConst137));
	fConst140 = (2.52055840508282e-13 + fConst132);
	fConst141 = (0 - (2.52055840508282e-12 * fConst4));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
	double 	fSlow0 = (0.007000000000000006 * (1 - double(fslider0)));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	double 	fSlow3 = (0.007000000000000006 * double(fslider3));
	int 	iSlow4 = int(double(fslider4));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		double fTemp0 = (8.25729589312733e-10 + (fConst0 * (fConst20 + (fRec1[0] * ((fConst0 * (fConst18 + (fConst16 * fRec1[0]))) - 1.63494458683921e-09)))));
		fRec3[0] = (fSlow1 + (0.993 * fRec3[1]));
		fRec4[0] = (fSlow2 + (0.993 * fRec4[1]));
		double fTemp1 = (5.19219959399944e-12 + (fConst0 * (fConst46 + ((fConst44 * fRec3[0]) + (fRec4[0] * (3.58780991945361e-14 + (fConst0 * (fConst42 + (fConst40 * fRec3[0])))))))));
		fRec5[0] = (fSlow3 + (0.993 * fRec5[1]));
		fRec6[0] = ((double)input0[i] - ((((((fRec6[1] * (2.59609979699972e-11 + (fConst0 * (fConst84 + ((fConst83 * fRec3[0]) + (fRec4[0] * (1.07634297583608e-13 + (fConst0 * (fConst82 + (fConst81 * fRec3[0])))))))))) + (fRec6[2] * (5.19219959399944e-11 + (fConst0 * (fConst80 + ((fConst79 * fRec3[0]) + (fRec4[0] * (7.17561983890723e-14 + (fConst0 * (fConst78 + (fConst77 * fRec3[0]))))))))))) + (fRec6[3] * (5.19219959399944e-11 + (fConst0 * (fConst76 + ((fConst74 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst72 + (fConst70 * fRec3[0]))) - 7.17561983890723e-14)))))))) + (fRec6[4] * (2.59609979699972e-11 + (fConst0 * (fConst68 + ((fConst66 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst64 + (fConst62 * fRec3[0]))) - 1.07634297583608e-13)))))))) + (fRec6[5] * (5.19219959399944e-12 + (fConst0 * (fConst60 + ((fConst59 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst58 + (fConst57 * fRec3[0]))) - 3.58780991945361e-14)))))))) / fTemp1));
		fRec2[0] = ((fConst4 * (((((((fRec6[0] * (((fConst119 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst118 + (fConst117 * fRec3[0]))) - 5.05861179930677e-18))) + (fRec5[0] * ((fConst0 * (fConst116 + (fConst115 * fRec3[0]))) - 7.3207117211386e-20)))) + (fRec6[1] * (((fConst114 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst113 + (fConst112 * fRec3[0]))) - 5.05861179930677e-18))) + (fRec5[0] * ((fConst0 * (fConst111 + (fConst110 * fRec3[0]))) - 7.3207117211386e-20))))) + (fRec6[2] * (((fConst109 * fRec3[0]) + (fRec4[0] * (1.01172235986135e-17 + (fConst0 * (fConst108 + (fConst107 * fRec3[0])))))) + (fRec5[0] * (1.46414234422772e-19 + (fConst0 * (fConst106 + (fConst105 * fRec3[0])))))))) + (fRec6[3] * (((fConst104 * fRec3[0]) + (fRec4[0] * (1.01172235986135e-17 + (fConst0 * (fConst102 + (fConst100 * fRec3[0])))))) + (fRec5[0] * (1.46414234422772e-19 + (fConst0 * (fConst98 + (fConst96 * fRec3[0])))))))) + (fRec6[4] * (((fConst94 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst92 + (fConst90 * fRec3[0]))) - 5.05861179930677e-18))) + (fRec5[0] * ((fConst0 * (fConst88 + (fConst86 * fRec3[0]))) - 7.3207117211386e-20))))) + (fRec6[5] * (((fConst56 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst54 + (fConst52 * fRec3[0]))) - 5.05861179930677e-18))) + (fRec5[0] * ((fConst0 * (fConst50 + (fConst48 * fRec3[0]))) - 7.3207117211386e-20))))) / fTemp1)) - ((((fRec2[1] * (2.4771887679382e-09 + (fConst0 * (fConst38 + (fRec1[0] * ((fConst0 * (fConst37 + (fConst36 * fRec1[0]))) - 1.63494458683921e-09)))))) + (fRec2[2] * (2.4771887679382e-09 + (fConst0 * (fConst35 + (fRec1[0] * (1.63494458683921e-09 + (fConst0 * (fConst33 + (fConst31 * fRec1[0])))))))))) + (fRec2[3] * (8.25729589312733e-10 + (fConst0 * (fConst29 + (fRec1[0] * (1.63494458683921e-09 + (fConst0 * (fConst28 + (fConst27 * fRec1[0])))))))))) / fTemp0));
		double fTemp2 = (fConst0 * (((((fRec2[0] * (fConst131 + (fRec1[0] * ((fConst0 * (fConst130 + (fConst129 * fRec1[0]))) - 1.81658693061871e-09)))) + (fRec2[1] * (fConst128 + (fRec1[0] * ((fConst0 * (fConst127 + (fConst126 * fRec1[0]))) - 1.81658693061871e-09))))) + (fRec2[2] * (fConst125 + (fRec1[0] * (1.81658693061871e-09 + (fConst0 * (fConst123 + (fConst121 * fRec1[0])))))))) + (fRec2[3] * (fConst26 + (fRec1[0] * (1.81658693061871e-09 + (fConst0 * (fConst24 + (fConst22 * fRec1[0])))))))) / fTemp0));
		fRec0[0] = (fTemp2 - (fConst14 * ((((((((fConst13 * fRec0[1]) + (fConst12 * fRec0[2])) + (fConst11 * fRec0[3])) + (fConst10 * fRec0[4])) + (fConst9 * fRec0[5])) + (fConst7 * fRec0[6])) + (fConst5 * fRec0[7])) + (fConst2 * fRec0[8]))));
		output0[i] = (FAUSTFLOAT)((iSlow4)?fTemp2:(fConst14 * ((fConst141 * fRec0[4]) + (fConst4 * ((((((((fConst140 * fRec0[0]) + (fConst136 * fRec0[1])) + (fConst135 * fRec0[2])) + (fConst139 * fRec0[3])) + (fConst138 * fRec0[5])) + (fConst136 * fRec0[6])) + (fConst135 * fRec0[7])) + (fConst133 * fRec0[8]))))));
		// post processing
		for (int i=8; i>0; i--) fRec0[i] = fRec0[i-1];
		for (int i=3; i>0; i--) fRec2[i] = fRec2[i-1];
		for (int i=5; i>0; i--) fRec6[i] = fRec6[i-1];
		fRec5[1] = fRec5[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BASS: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case BRIGHT: 
		fslider4_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case MID: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BASS, 
   BRIGHT, 
   MID, 
   TREBLE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace fenderizer
