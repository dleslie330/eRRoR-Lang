
// Generated from eRRoR.g4 by ANTLR 4.13.1


#include "eRRoRListener.h"
#include "eRRoRVisitor.h"

#include "eRRoRParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ERRoRParserStaticData final {
  ERRoRParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ERRoRParserStaticData(const ERRoRParserStaticData&) = delete;
  ERRoRParserStaticData(ERRoRParserStaticData&&) = delete;
  ERRoRParserStaticData& operator=(const ERRoRParserStaticData&) = delete;
  ERRoRParserStaticData& operator=(ERRoRParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag errorParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ERRoRParserStaticData *errorParserStaticData = nullptr;

void errorParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (errorParserStaticData != nullptr) {
    return;
  }
#else
  assert(errorParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ERRoRParserStaticData>(
    std::vector<std::string>{
      "program", "stmt", "outstmt", "instmt", "logic", "whilestmt", "ifstmt", 
      "assignmentstmt", "comparestmt", "logicstmt", "convertstmt", "unionstmt", 
      "additionstmt", "multiplicationstmt", "value"
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
  	4,1,24,130,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,4,0,33,8,0,11,0,12,0,34,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,3,1,46,8,1,1,2,1,2,1,2,3,2,51,8,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,3,4,64,8,4,1,5,4,5,67,8,5,11,5,12,5,68,1,5,1,5,4,5,73,8,5,11,
  	5,12,5,74,1,5,1,5,1,6,1,6,4,6,81,8,6,11,6,12,6,82,1,6,4,6,86,8,6,11,6,
  	12,6,87,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,99,8,7,1,8,1,8,1,8,1,
  	8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,111,8,9,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,0,0,15,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,0,5,3,0,9,9,15,15,17,17,2,0,10,10,
  	12,12,1,0,19,20,1,0,21,22,2,0,18,18,23,24,136,0,30,1,0,0,0,2,45,1,0,0,
  	0,4,47,1,0,0,0,6,52,1,0,0,0,8,63,1,0,0,0,10,66,1,0,0,0,12,78,1,0,0,0,
  	14,91,1,0,0,0,16,100,1,0,0,0,18,110,1,0,0,0,20,112,1,0,0,0,22,115,1,0,
  	0,0,24,119,1,0,0,0,26,123,1,0,0,0,28,127,1,0,0,0,30,32,5,16,0,0,31,33,
  	3,2,1,0,32,31,1,0,0,0,33,34,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,36,
  	1,0,0,0,36,37,5,6,0,0,37,1,1,0,0,0,38,46,3,4,2,0,39,46,3,6,3,0,40,46,
  	3,10,5,0,41,46,3,12,6,0,42,46,3,14,7,0,43,46,3,16,8,0,44,46,3,18,9,0,
  	45,38,1,0,0,0,45,39,1,0,0,0,45,40,1,0,0,0,45,41,1,0,0,0,45,42,1,0,0,0,
  	45,43,1,0,0,0,45,44,1,0,0,0,46,3,1,0,0,0,47,50,5,2,0,0,48,51,3,28,14,
  	0,49,51,3,20,10,0,50,48,1,0,0,0,50,49,1,0,0,0,51,5,1,0,0,0,52,53,5,24,
  	0,0,53,54,5,3,0,0,54,7,1,0,0,0,55,64,3,18,9,0,56,64,3,16,8,0,57,58,5,
  	11,0,0,58,64,3,18,9,0,59,60,5,11,0,0,60,64,3,16,8,0,61,64,5,12,0,0,62,
  	64,5,10,0,0,63,55,1,0,0,0,63,56,1,0,0,0,63,57,1,0,0,0,63,59,1,0,0,0,63,
  	61,1,0,0,0,63,62,1,0,0,0,64,9,1,0,0,0,65,67,3,8,4,0,66,65,1,0,0,0,67,
  	68,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,72,5,4,0,0,71,
  	73,3,2,1,0,72,71,1,0,0,0,73,74,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,
  	76,1,0,0,0,76,77,5,7,0,0,77,11,1,0,0,0,78,80,5,5,0,0,79,81,3,8,4,0,80,
  	79,1,0,0,0,81,82,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,85,1,0,0,0,84,
  	86,3,2,1,0,85,84,1,0,0,0,86,87,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,
  	89,1,0,0,0,89,90,5,7,0,0,90,13,1,0,0,0,91,92,5,24,0,0,92,98,5,8,0,0,93,
  	99,3,28,14,0,94,99,3,22,11,0,95,99,3,24,12,0,96,99,3,26,13,0,97,99,3,
  	20,10,0,98,93,1,0,0,0,98,94,1,0,0,0,98,95,1,0,0,0,98,96,1,0,0,0,98,97,
  	1,0,0,0,99,15,1,0,0,0,100,101,3,28,14,0,101,102,7,0,0,0,102,103,3,28,
  	14,0,103,17,1,0,0,0,104,105,3,28,14,0,105,106,7,1,0,0,106,107,3,28,14,
  	0,107,111,1,0,0,0,108,109,5,11,0,0,109,111,3,28,14,0,110,104,1,0,0,0,
  	110,108,1,0,0,0,111,19,1,0,0,0,112,113,5,13,0,0,113,114,3,28,14,0,114,
  	21,1,0,0,0,115,116,3,28,14,0,116,117,5,14,0,0,117,118,3,28,14,0,118,23,
  	1,0,0,0,119,120,3,28,14,0,120,121,7,2,0,0,121,122,3,28,14,0,122,25,1,
  	0,0,0,123,124,3,28,14,0,124,125,7,3,0,0,125,126,3,28,14,0,126,27,1,0,
  	0,0,127,128,7,4,0,0,128,29,1,0,0,0,10,34,45,50,63,68,74,82,87,98,110
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  errorParserStaticData = staticData.release();
}

}

eRRoRParser::eRRoRParser(TokenStream *input) : eRRoRParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

eRRoRParser::eRRoRParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  eRRoRParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *errorParserStaticData->atn, errorParserStaticData->decisionToDFA, errorParserStaticData->sharedContextCache, options);
}

eRRoRParser::~eRRoRParser() {
  delete _interpreter;
}

const atn::ATN& eRRoRParser::getATN() const {
  return *errorParserStaticData->atn;
}

std::string eRRoRParser::getGrammarFileName() const {
  return "eRRoR.g4";
}

const std::vector<std::string>& eRRoRParser::getRuleNames() const {
  return errorParserStaticData->ruleNames;
}

const dfa::Vocabulary& eRRoRParser::getVocabulary() const {
  return errorParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView eRRoRParser::getSerializedATN() const {
  return errorParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

eRRoRParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::ProgramContext::BEGIN() {
  return getToken(eRRoRParser::BEGIN, 0);
}

tree::TerminalNode* eRRoRParser::ProgramContext::TERMINATE() {
  return getToken(eRRoRParser::TERMINATE, 0);
}

std::vector<eRRoRParser::StmtContext *> eRRoRParser::ProgramContext::stmt() {
  return getRuleContexts<eRRoRParser::StmtContext>();
}

eRRoRParser::StmtContext* eRRoRParser::ProgramContext::stmt(size_t i) {
  return getRuleContext<eRRoRParser::StmtContext>(i);
}


size_t eRRoRParser::ProgramContext::getRuleIndex() const {
  return eRRoRParser::RuleProgram;
}

void eRRoRParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void eRRoRParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any eRRoRParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::ProgramContext* eRRoRParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, eRRoRParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(eRRoRParser::BEGIN);
    setState(32); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(31);
      stmt();
      setState(34); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25435172) != 0));
    setState(36);
    match(eRRoRParser::TERMINATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

eRRoRParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

eRRoRParser::OutstmtContext* eRRoRParser::StmtContext::outstmt() {
  return getRuleContext<eRRoRParser::OutstmtContext>(0);
}

eRRoRParser::InstmtContext* eRRoRParser::StmtContext::instmt() {
  return getRuleContext<eRRoRParser::InstmtContext>(0);
}

eRRoRParser::WhilestmtContext* eRRoRParser::StmtContext::whilestmt() {
  return getRuleContext<eRRoRParser::WhilestmtContext>(0);
}

eRRoRParser::IfstmtContext* eRRoRParser::StmtContext::ifstmt() {
  return getRuleContext<eRRoRParser::IfstmtContext>(0);
}

eRRoRParser::AssignmentstmtContext* eRRoRParser::StmtContext::assignmentstmt() {
  return getRuleContext<eRRoRParser::AssignmentstmtContext>(0);
}

eRRoRParser::ComparestmtContext* eRRoRParser::StmtContext::comparestmt() {
  return getRuleContext<eRRoRParser::ComparestmtContext>(0);
}

eRRoRParser::LogicstmtContext* eRRoRParser::StmtContext::logicstmt() {
  return getRuleContext<eRRoRParser::LogicstmtContext>(0);
}


size_t eRRoRParser::StmtContext::getRuleIndex() const {
  return eRRoRParser::RuleStmt;
}

void eRRoRParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void eRRoRParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


std::any eRRoRParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::StmtContext* eRRoRParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, eRRoRParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      outstmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      instmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      whilestmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      ifstmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(42);
      assignmentstmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(43);
      comparestmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(44);
      logicstmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutstmtContext ------------------------------------------------------------------

eRRoRParser::OutstmtContext::OutstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::OutstmtContext::OUTPUT() {
  return getToken(eRRoRParser::OUTPUT, 0);
}

eRRoRParser::ValueContext* eRRoRParser::OutstmtContext::value() {
  return getRuleContext<eRRoRParser::ValueContext>(0);
}

eRRoRParser::ConvertstmtContext* eRRoRParser::OutstmtContext::convertstmt() {
  return getRuleContext<eRRoRParser::ConvertstmtContext>(0);
}


size_t eRRoRParser::OutstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleOutstmt;
}

void eRRoRParser::OutstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutstmt(this);
}

void eRRoRParser::OutstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutstmt(this);
}


std::any eRRoRParser::OutstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitOutstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::OutstmtContext* eRRoRParser::outstmt() {
  OutstmtContext *_localctx = _tracker.createInstance<OutstmtContext>(_ctx, getState());
  enterRule(_localctx, 4, eRRoRParser::RuleOutstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(eRRoRParser::OUTPUT);
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case eRRoRParser::ONE:
      case eRRoRParser::ZERO:
      case eRRoRParser::VARIABLE: {
        setState(48);
        value();
        break;
      }

      case eRRoRParser::CONVERTER: {
        setState(49);
        convertstmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstmtContext ------------------------------------------------------------------

eRRoRParser::InstmtContext::InstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::InstmtContext::VARIABLE() {
  return getToken(eRRoRParser::VARIABLE, 0);
}

tree::TerminalNode* eRRoRParser::InstmtContext::INPUT() {
  return getToken(eRRoRParser::INPUT, 0);
}


size_t eRRoRParser::InstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleInstmt;
}

void eRRoRParser::InstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstmt(this);
}

void eRRoRParser::InstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstmt(this);
}


std::any eRRoRParser::InstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitInstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::InstmtContext* eRRoRParser::instmt() {
  InstmtContext *_localctx = _tracker.createInstance<InstmtContext>(_ctx, getState());
  enterRule(_localctx, 6, eRRoRParser::RuleInstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(eRRoRParser::VARIABLE);
    setState(53);
    match(eRRoRParser::INPUT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicContext ------------------------------------------------------------------

eRRoRParser::LogicContext::LogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

eRRoRParser::LogicstmtContext* eRRoRParser::LogicContext::logicstmt() {
  return getRuleContext<eRRoRParser::LogicstmtContext>(0);
}

eRRoRParser::ComparestmtContext* eRRoRParser::LogicContext::comparestmt() {
  return getRuleContext<eRRoRParser::ComparestmtContext>(0);
}

tree::TerminalNode* eRRoRParser::LogicContext::NOT() {
  return getToken(eRRoRParser::NOT, 0);
}

tree::TerminalNode* eRRoRParser::LogicContext::AND() {
  return getToken(eRRoRParser::AND, 0);
}

tree::TerminalNode* eRRoRParser::LogicContext::OR() {
  return getToken(eRRoRParser::OR, 0);
}


size_t eRRoRParser::LogicContext::getRuleIndex() const {
  return eRRoRParser::RuleLogic;
}

void eRRoRParser::LogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic(this);
}

void eRRoRParser::LogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic(this);
}


std::any eRRoRParser::LogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitLogic(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::LogicContext* eRRoRParser::logic() {
  LogicContext *_localctx = _tracker.createInstance<LogicContext>(_ctx, getState());
  enterRule(_localctx, 8, eRRoRParser::RuleLogic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      logicstmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      comparestmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(57);
      match(eRRoRParser::NOT);
      setState(58);
      logicstmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(59);
      match(eRRoRParser::NOT);
      setState(60);
      comparestmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(61);
      match(eRRoRParser::AND);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(62);
      match(eRRoRParser::OR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestmtContext ------------------------------------------------------------------

eRRoRParser::WhilestmtContext::WhilestmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::WhilestmtContext::WHILE() {
  return getToken(eRRoRParser::WHILE, 0);
}

tree::TerminalNode* eRRoRParser::WhilestmtContext::ENDLOOP() {
  return getToken(eRRoRParser::ENDLOOP, 0);
}

std::vector<eRRoRParser::LogicContext *> eRRoRParser::WhilestmtContext::logic() {
  return getRuleContexts<eRRoRParser::LogicContext>();
}

eRRoRParser::LogicContext* eRRoRParser::WhilestmtContext::logic(size_t i) {
  return getRuleContext<eRRoRParser::LogicContext>(i);
}

std::vector<eRRoRParser::StmtContext *> eRRoRParser::WhilestmtContext::stmt() {
  return getRuleContexts<eRRoRParser::StmtContext>();
}

eRRoRParser::StmtContext* eRRoRParser::WhilestmtContext::stmt(size_t i) {
  return getRuleContext<eRRoRParser::StmtContext>(i);
}


size_t eRRoRParser::WhilestmtContext::getRuleIndex() const {
  return eRRoRParser::RuleWhilestmt;
}

void eRRoRParser::WhilestmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhilestmt(this);
}

void eRRoRParser::WhilestmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhilestmt(this);
}


std::any eRRoRParser::WhilestmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitWhilestmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::WhilestmtContext* eRRoRParser::whilestmt() {
  WhilestmtContext *_localctx = _tracker.createInstance<WhilestmtContext>(_ctx, getState());
  enterRule(_localctx, 10, eRRoRParser::RuleWhilestmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(65);
      logic();
      setState(68); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25435136) != 0));
    setState(70);
    match(eRRoRParser::WHILE);
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      stmt();
      setState(74); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25435172) != 0));
    setState(76);
    match(eRRoRParser::ENDLOOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstmtContext ------------------------------------------------------------------

eRRoRParser::IfstmtContext::IfstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::IfstmtContext::IF() {
  return getToken(eRRoRParser::IF, 0);
}

tree::TerminalNode* eRRoRParser::IfstmtContext::ENDLOOP() {
  return getToken(eRRoRParser::ENDLOOP, 0);
}

std::vector<eRRoRParser::LogicContext *> eRRoRParser::IfstmtContext::logic() {
  return getRuleContexts<eRRoRParser::LogicContext>();
}

eRRoRParser::LogicContext* eRRoRParser::IfstmtContext::logic(size_t i) {
  return getRuleContext<eRRoRParser::LogicContext>(i);
}

std::vector<eRRoRParser::StmtContext *> eRRoRParser::IfstmtContext::stmt() {
  return getRuleContexts<eRRoRParser::StmtContext>();
}

eRRoRParser::StmtContext* eRRoRParser::IfstmtContext::stmt(size_t i) {
  return getRuleContext<eRRoRParser::StmtContext>(i);
}


size_t eRRoRParser::IfstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleIfstmt;
}

void eRRoRParser::IfstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfstmt(this);
}

void eRRoRParser::IfstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfstmt(this);
}


std::any eRRoRParser::IfstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitIfstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::IfstmtContext* eRRoRParser::ifstmt() {
  IfstmtContext *_localctx = _tracker.createInstance<IfstmtContext>(_ctx, getState());
  enterRule(_localctx, 12, eRRoRParser::RuleIfstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(eRRoRParser::IF);
    setState(80); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(79);
              logic();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(82); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(85); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(84);
      stmt();
      setState(87); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25435172) != 0));
    setState(89);
    match(eRRoRParser::ENDLOOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentstmtContext ------------------------------------------------------------------

eRRoRParser::AssignmentstmtContext::AssignmentstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::AssignmentstmtContext::VARIABLE() {
  return getToken(eRRoRParser::VARIABLE, 0);
}

tree::TerminalNode* eRRoRParser::AssignmentstmtContext::ASSIGNMENT() {
  return getToken(eRRoRParser::ASSIGNMENT, 0);
}

eRRoRParser::ValueContext* eRRoRParser::AssignmentstmtContext::value() {
  return getRuleContext<eRRoRParser::ValueContext>(0);
}

eRRoRParser::UnionstmtContext* eRRoRParser::AssignmentstmtContext::unionstmt() {
  return getRuleContext<eRRoRParser::UnionstmtContext>(0);
}

eRRoRParser::AdditionstmtContext* eRRoRParser::AssignmentstmtContext::additionstmt() {
  return getRuleContext<eRRoRParser::AdditionstmtContext>(0);
}

eRRoRParser::MultiplicationstmtContext* eRRoRParser::AssignmentstmtContext::multiplicationstmt() {
  return getRuleContext<eRRoRParser::MultiplicationstmtContext>(0);
}

eRRoRParser::ConvertstmtContext* eRRoRParser::AssignmentstmtContext::convertstmt() {
  return getRuleContext<eRRoRParser::ConvertstmtContext>(0);
}


size_t eRRoRParser::AssignmentstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleAssignmentstmt;
}

void eRRoRParser::AssignmentstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentstmt(this);
}

void eRRoRParser::AssignmentstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentstmt(this);
}


std::any eRRoRParser::AssignmentstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitAssignmentstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::AssignmentstmtContext* eRRoRParser::assignmentstmt() {
  AssignmentstmtContext *_localctx = _tracker.createInstance<AssignmentstmtContext>(_ctx, getState());
  enterRule(_localctx, 14, eRRoRParser::RuleAssignmentstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(eRRoRParser::VARIABLE);
    setState(92);
    match(eRRoRParser::ASSIGNMENT);
    setState(98);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(93);
      value();
      break;
    }

    case 2: {
      setState(94);
      unionstmt();
      break;
    }

    case 3: {
      setState(95);
      additionstmt();
      break;
    }

    case 4: {
      setState(96);
      multiplicationstmt();
      break;
    }

    case 5: {
      setState(97);
      convertstmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparestmtContext ------------------------------------------------------------------

eRRoRParser::ComparestmtContext::ComparestmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<eRRoRParser::ValueContext *> eRRoRParser::ComparestmtContext::value() {
  return getRuleContexts<eRRoRParser::ValueContext>();
}

eRRoRParser::ValueContext* eRRoRParser::ComparestmtContext::value(size_t i) {
  return getRuleContext<eRRoRParser::ValueContext>(i);
}

tree::TerminalNode* eRRoRParser::ComparestmtContext::LESSTHAN() {
  return getToken(eRRoRParser::LESSTHAN, 0);
}

tree::TerminalNode* eRRoRParser::ComparestmtContext::GREATERTHAN() {
  return getToken(eRRoRParser::GREATERTHAN, 0);
}

tree::TerminalNode* eRRoRParser::ComparestmtContext::EQUIVALENCE() {
  return getToken(eRRoRParser::EQUIVALENCE, 0);
}


size_t eRRoRParser::ComparestmtContext::getRuleIndex() const {
  return eRRoRParser::RuleComparestmt;
}

void eRRoRParser::ComparestmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparestmt(this);
}

void eRRoRParser::ComparestmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparestmt(this);
}


std::any eRRoRParser::ComparestmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitComparestmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::ComparestmtContext* eRRoRParser::comparestmt() {
  ComparestmtContext *_localctx = _tracker.createInstance<ComparestmtContext>(_ctx, getState());
  enterRule(_localctx, 16, eRRoRParser::RuleComparestmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    value();
    setState(101);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 164352) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(102);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicstmtContext ------------------------------------------------------------------

eRRoRParser::LogicstmtContext::LogicstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<eRRoRParser::ValueContext *> eRRoRParser::LogicstmtContext::value() {
  return getRuleContexts<eRRoRParser::ValueContext>();
}

eRRoRParser::ValueContext* eRRoRParser::LogicstmtContext::value(size_t i) {
  return getRuleContext<eRRoRParser::ValueContext>(i);
}

tree::TerminalNode* eRRoRParser::LogicstmtContext::AND() {
  return getToken(eRRoRParser::AND, 0);
}

tree::TerminalNode* eRRoRParser::LogicstmtContext::OR() {
  return getToken(eRRoRParser::OR, 0);
}

tree::TerminalNode* eRRoRParser::LogicstmtContext::NOT() {
  return getToken(eRRoRParser::NOT, 0);
}


size_t eRRoRParser::LogicstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleLogicstmt;
}

void eRRoRParser::LogicstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicstmt(this);
}

void eRRoRParser::LogicstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicstmt(this);
}


std::any eRRoRParser::LogicstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitLogicstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::LogicstmtContext* eRRoRParser::logicstmt() {
  LogicstmtContext *_localctx = _tracker.createInstance<LogicstmtContext>(_ctx, getState());
  enterRule(_localctx, 18, eRRoRParser::RuleLogicstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case eRRoRParser::ONE:
      case eRRoRParser::ZERO:
      case eRRoRParser::VARIABLE: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        value();
        setState(105);
        _la = _input->LA(1);
        if (!(_la == eRRoRParser::OR

        || _la == eRRoRParser::AND)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(106);
        value();
        break;
      }

      case eRRoRParser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(108);
        match(eRRoRParser::NOT);
        setState(109);
        value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConvertstmtContext ------------------------------------------------------------------

eRRoRParser::ConvertstmtContext::ConvertstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::ConvertstmtContext::CONVERTER() {
  return getToken(eRRoRParser::CONVERTER, 0);
}

eRRoRParser::ValueContext* eRRoRParser::ConvertstmtContext::value() {
  return getRuleContext<eRRoRParser::ValueContext>(0);
}


size_t eRRoRParser::ConvertstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleConvertstmt;
}

void eRRoRParser::ConvertstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConvertstmt(this);
}

void eRRoRParser::ConvertstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConvertstmt(this);
}


std::any eRRoRParser::ConvertstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitConvertstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::ConvertstmtContext* eRRoRParser::convertstmt() {
  ConvertstmtContext *_localctx = _tracker.createInstance<ConvertstmtContext>(_ctx, getState());
  enterRule(_localctx, 20, eRRoRParser::RuleConvertstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(eRRoRParser::CONVERTER);
    setState(113);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionstmtContext ------------------------------------------------------------------

eRRoRParser::UnionstmtContext::UnionstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<eRRoRParser::ValueContext *> eRRoRParser::UnionstmtContext::value() {
  return getRuleContexts<eRRoRParser::ValueContext>();
}

eRRoRParser::ValueContext* eRRoRParser::UnionstmtContext::value(size_t i) {
  return getRuleContext<eRRoRParser::ValueContext>(i);
}

tree::TerminalNode* eRRoRParser::UnionstmtContext::UNION() {
  return getToken(eRRoRParser::UNION, 0);
}


size_t eRRoRParser::UnionstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleUnionstmt;
}

void eRRoRParser::UnionstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionstmt(this);
}

void eRRoRParser::UnionstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionstmt(this);
}


std::any eRRoRParser::UnionstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitUnionstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::UnionstmtContext* eRRoRParser::unionstmt() {
  UnionstmtContext *_localctx = _tracker.createInstance<UnionstmtContext>(_ctx, getState());
  enterRule(_localctx, 22, eRRoRParser::RuleUnionstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    value();
    setState(116);
    match(eRRoRParser::UNION);
    setState(117);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionstmtContext ------------------------------------------------------------------

eRRoRParser::AdditionstmtContext::AdditionstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<eRRoRParser::ValueContext *> eRRoRParser::AdditionstmtContext::value() {
  return getRuleContexts<eRRoRParser::ValueContext>();
}

eRRoRParser::ValueContext* eRRoRParser::AdditionstmtContext::value(size_t i) {
  return getRuleContext<eRRoRParser::ValueContext>(i);
}

tree::TerminalNode* eRRoRParser::AdditionstmtContext::ADDITION() {
  return getToken(eRRoRParser::ADDITION, 0);
}

tree::TerminalNode* eRRoRParser::AdditionstmtContext::SUBTRACTION() {
  return getToken(eRRoRParser::SUBTRACTION, 0);
}


size_t eRRoRParser::AdditionstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleAdditionstmt;
}

void eRRoRParser::AdditionstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditionstmt(this);
}

void eRRoRParser::AdditionstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditionstmt(this);
}


std::any eRRoRParser::AdditionstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitAdditionstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::AdditionstmtContext* eRRoRParser::additionstmt() {
  AdditionstmtContext *_localctx = _tracker.createInstance<AdditionstmtContext>(_ctx, getState());
  enterRule(_localctx, 24, eRRoRParser::RuleAdditionstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    value();
    setState(120);
    _la = _input->LA(1);
    if (!(_la == eRRoRParser::SUBTRACTION

    || _la == eRRoRParser::ADDITION)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(121);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicationstmtContext ------------------------------------------------------------------

eRRoRParser::MultiplicationstmtContext::MultiplicationstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<eRRoRParser::ValueContext *> eRRoRParser::MultiplicationstmtContext::value() {
  return getRuleContexts<eRRoRParser::ValueContext>();
}

eRRoRParser::ValueContext* eRRoRParser::MultiplicationstmtContext::value(size_t i) {
  return getRuleContext<eRRoRParser::ValueContext>(i);
}

tree::TerminalNode* eRRoRParser::MultiplicationstmtContext::MULTIPLICATION() {
  return getToken(eRRoRParser::MULTIPLICATION, 0);
}

tree::TerminalNode* eRRoRParser::MultiplicationstmtContext::DIVISION() {
  return getToken(eRRoRParser::DIVISION, 0);
}


size_t eRRoRParser::MultiplicationstmtContext::getRuleIndex() const {
  return eRRoRParser::RuleMultiplicationstmt;
}

void eRRoRParser::MultiplicationstmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicationstmt(this);
}

void eRRoRParser::MultiplicationstmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicationstmt(this);
}


std::any eRRoRParser::MultiplicationstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitMultiplicationstmt(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::MultiplicationstmtContext* eRRoRParser::multiplicationstmt() {
  MultiplicationstmtContext *_localctx = _tracker.createInstance<MultiplicationstmtContext>(_ctx, getState());
  enterRule(_localctx, 26, eRRoRParser::RuleMultiplicationstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    value();
    setState(124);
    _la = _input->LA(1);
    if (!(_la == eRRoRParser::DIVISION

    || _la == eRRoRParser::MULTIPLICATION)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(125);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

eRRoRParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* eRRoRParser::ValueContext::ONE() {
  return getToken(eRRoRParser::ONE, 0);
}

tree::TerminalNode* eRRoRParser::ValueContext::ZERO() {
  return getToken(eRRoRParser::ZERO, 0);
}

tree::TerminalNode* eRRoRParser::ValueContext::VARIABLE() {
  return getToken(eRRoRParser::VARIABLE, 0);
}


size_t eRRoRParser::ValueContext::getRuleIndex() const {
  return eRRoRParser::RuleValue;
}

void eRRoRParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void eRRoRParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<eRRoRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any eRRoRParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<eRRoRVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

eRRoRParser::ValueContext* eRRoRParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 28, eRRoRParser::RuleValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25427968) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void eRRoRParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  errorParserInitialize();
#else
  ::antlr4::internal::call_once(errorParserOnceFlag, errorParserInitialize);
#endif
}
