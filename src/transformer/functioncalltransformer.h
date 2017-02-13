#ifndef FUNCTIONCALL_TRANSFORMER_HPP
#define FUNCTIONCALL_TRANSFORMER_HPP

#include "transformer.h"

#include <string>
#include <vector>

namespace clang
{
    class ASTContext;
    class raw_ostream;
    class Rewriter;
}

class FunctionCallTransformer : public Transformer
{
    private:
        
        std::vector<std::string> functions;
        
    public:

        explicit FunctionCallTransformer(clang::ASTContext &context, clang::Rewriter &rewriter);

        virtual void start() override;
        virtual void run(const clang::ast_matchers::MatchFinder::MatchResult &result);
        virtual void print(clang::raw_ostream &stream) override;
};


#endif
