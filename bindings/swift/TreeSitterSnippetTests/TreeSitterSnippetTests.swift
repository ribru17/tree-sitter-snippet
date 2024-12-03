import XCTest
import SwiftTreeSitter
import TreeSitterSnippet

final class TreeSitterSnippetTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_snippet())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Snippet grammar")
    }
}
