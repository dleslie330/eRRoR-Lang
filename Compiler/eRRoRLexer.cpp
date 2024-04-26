
// Generated from eRRoR.g4 by ANTLR 4.13.1


#include "eRRoRLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ERRoRLexerStaticData final {
  ERRoRLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ERRoRLexerStaticData(const ERRoRLexerStaticData&) = delete;
  ERRoRLexerStaticData(ERRoRLexerStaticData&&) = delete;
  ERRoRLexerStaticData& operator=(const ERRoRLexerStaticData&) = delete;
  ERRoRLexerStaticData& operator=(ERRoRLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag errorlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ERRoRLexerStaticData *errorlexerLexerStaticData = nullptr;

void errorlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (errorlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(errorlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ERRoRLexerStaticData>(
    std::vector<std::string>{
      "WHITESPACE", "OUTPUT", "INPUT", "WHILE", "IF", "TERMINATE", "ENDLOOP", 
      "ASSIGNMENT", "LESSTHAN", "OR", "NOT", "AND", "CONVERTER", "UNION", 
      "EQUIVALENCE", "BEGIN", "GREATERTHAN", "ONE", "SUBTRACTION", "ADDITION", 
      "DIVISION", "MULTIPLICATION", "ZERO", "VARIABLE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "'!'", "'\\u003F'", "':'", "';'", "'.'", "','", "'error'", 
      "'eRror'", "'erRor'", "'erroR'", "'eRRor'", "'erRoR'", "'eRroR'", 
      "'eRRoR'", "'Error'", "'ERror'", "'ErRor'", "'ErroR'", "'ERRor'", 
      "'ErRoR'", "'ERroR'", "'ERRoR'"
    },
    std::vector<std::string>{
      "", "WHITESPACE", "OUTPUT", "INPUT", "WHILE", "IF", "TERMINATE", "ENDLOOP", 
      "ASSIGNMENT", "LESSTHAN", "OR", "NOT", "AND", "CONVERTER", "UNION", 
      "EQUIVALENCE", "BEGIN", "GREATERTHAN", "ONE", "SUBTRACTION", "ADDITION", 
      "DIVISION", "MULTIPLICATION", "ZERO", "VARIABLE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,24,188,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,
  	1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,4,23,183,8,23,11,23,12,23,184,1,23,1,23,0,
  	0,24,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,1,0,
  	1,2,0,9,10,32,32,191,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,
  	0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,1,49,1,0,0,0,3,53,
  	1,0,0,0,5,55,1,0,0,0,7,57,1,0,0,0,9,59,1,0,0,0,11,61,1,0,0,0,13,63,1,
  	0,0,0,15,65,1,0,0,0,17,71,1,0,0,0,19,77,1,0,0,0,21,83,1,0,0,0,23,89,1,
  	0,0,0,25,95,1,0,0,0,27,101,1,0,0,0,29,107,1,0,0,0,31,113,1,0,0,0,33,119,
  	1,0,0,0,35,125,1,0,0,0,37,131,1,0,0,0,39,137,1,0,0,0,41,143,1,0,0,0,43,
  	149,1,0,0,0,45,155,1,0,0,0,47,161,1,0,0,0,49,50,7,0,0,0,50,51,1,0,0,0,
  	51,52,6,0,0,0,52,2,1,0,0,0,53,54,5,33,0,0,54,4,1,0,0,0,55,56,5,63,0,0,
  	56,6,1,0,0,0,57,58,5,58,0,0,58,8,1,0,0,0,59,60,5,59,0,0,60,10,1,0,0,0,
  	61,62,5,46,0,0,62,12,1,0,0,0,63,64,5,44,0,0,64,14,1,0,0,0,65,66,5,101,
  	0,0,66,67,5,114,0,0,67,68,5,114,0,0,68,69,5,111,0,0,69,70,5,114,0,0,70,
  	16,1,0,0,0,71,72,5,101,0,0,72,73,5,82,0,0,73,74,5,114,0,0,74,75,5,111,
  	0,0,75,76,5,114,0,0,76,18,1,0,0,0,77,78,5,101,0,0,78,79,5,114,0,0,79,
  	80,5,82,0,0,80,81,5,111,0,0,81,82,5,114,0,0,82,20,1,0,0,0,83,84,5,101,
  	0,0,84,85,5,114,0,0,85,86,5,114,0,0,86,87,5,111,0,0,87,88,5,82,0,0,88,
  	22,1,0,0,0,89,90,5,101,0,0,90,91,5,82,0,0,91,92,5,82,0,0,92,93,5,111,
  	0,0,93,94,5,114,0,0,94,24,1,0,0,0,95,96,5,101,0,0,96,97,5,114,0,0,97,
  	98,5,82,0,0,98,99,5,111,0,0,99,100,5,82,0,0,100,26,1,0,0,0,101,102,5,
  	101,0,0,102,103,5,82,0,0,103,104,5,114,0,0,104,105,5,111,0,0,105,106,
  	5,82,0,0,106,28,1,0,0,0,107,108,5,101,0,0,108,109,5,82,0,0,109,110,5,
  	82,0,0,110,111,5,111,0,0,111,112,5,82,0,0,112,30,1,0,0,0,113,114,5,69,
  	0,0,114,115,5,114,0,0,115,116,5,114,0,0,116,117,5,111,0,0,117,118,5,114,
  	0,0,118,32,1,0,0,0,119,120,5,69,0,0,120,121,5,82,0,0,121,122,5,114,0,
  	0,122,123,5,111,0,0,123,124,5,114,0,0,124,34,1,0,0,0,125,126,5,69,0,0,
  	126,127,5,114,0,0,127,128,5,82,0,0,128,129,5,111,0,0,129,130,5,114,0,
  	0,130,36,1,0,0,0,131,132,5,69,0,0,132,133,5,114,0,0,133,134,5,114,0,0,
  	134,135,5,111,0,0,135,136,5,82,0,0,136,38,1,0,0,0,137,138,5,69,0,0,138,
  	139,5,82,0,0,139,140,5,82,0,0,140,141,5,111,0,0,141,142,5,114,0,0,142,
  	40,1,0,0,0,143,144,5,69,0,0,144,145,5,114,0,0,145,146,5,82,0,0,146,147,
  	5,111,0,0,147,148,5,82,0,0,148,42,1,0,0,0,149,150,5,69,0,0,150,151,5,
  	82,0,0,151,152,5,114,0,0,152,153,5,111,0,0,153,154,5,82,0,0,154,44,1,
  	0,0,0,155,156,5,69,0,0,156,157,5,82,0,0,157,158,5,82,0,0,158,159,5,111,
  	0,0,159,160,5,82,0,0,160,46,1,0,0,0,161,182,5,34,0,0,162,163,5,101,0,
  	0,163,164,5,114,0,0,164,165,5,114,0,0,165,166,5,111,0,0,166,183,5,114,
  	0,0,167,168,5,69,0,0,168,169,5,82,0,0,169,170,5,82,0,0,170,171,5,111,
  	0,0,171,183,5,82,0,0,172,173,5,101,0,0,173,174,5,82,0,0,174,175,5,82,
  	0,0,175,176,5,111,0,0,176,183,5,82,0,0,177,178,5,69,0,0,178,179,5,114,
  	0,0,179,180,5,114,0,0,180,181,5,111,0,0,181,183,5,114,0,0,182,162,1,0,
  	0,0,182,167,1,0,0,0,182,172,1,0,0,0,182,177,1,0,0,0,183,184,1,0,0,0,184,
  	182,1,0,0,0,184,185,1,0,0,0,185,186,1,0,0,0,186,187,5,34,0,0,187,48,1,
  	0,0,0,3,0,182,184,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  errorlexerLexerStaticData = staticData.release();
}

}

eRRoRLexer::eRRoRLexer(CharStream *input) : Lexer(input) {
  eRRoRLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *errorlexerLexerStaticData->atn, errorlexerLexerStaticData->decisionToDFA, errorlexerLexerStaticData->sharedContextCache);
}

eRRoRLexer::~eRRoRLexer() {
  delete _interpreter;
}

std::string eRRoRLexer::getGrammarFileName() const {
  return "eRRoR.g4";
}

const std::vector<std::string>& eRRoRLexer::getRuleNames() const {
  return errorlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& eRRoRLexer::getChannelNames() const {
  return errorlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& eRRoRLexer::getModeNames() const {
  return errorlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& eRRoRLexer::getVocabulary() const {
  return errorlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView eRRoRLexer::getSerializedATN() const {
  return errorlexerLexerStaticData->serializedATN;
}

const atn::ATN& eRRoRLexer::getATN() const {
  return *errorlexerLexerStaticData->atn;
}




void eRRoRLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  errorlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(errorlexerLexerOnceFlag, errorlexerLexerInitialize);
#endif
}
