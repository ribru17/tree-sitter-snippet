package tree_sitter_snippet_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_snippet "github.com/tree-sitter/tree-sitter-snippet/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_snippet.Language())
	if language == nil {
		t.Errorf("Error loading Snippet grammar")
	}
}
