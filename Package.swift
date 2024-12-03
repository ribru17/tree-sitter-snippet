// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSnippet",
    products: [
        .library(name: "TreeSitterSnippet", targets: ["TreeSitterSnippet"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSnippet",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSnippetTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSnippet",
            ],
            path: "bindings/swift/TreeSitterSnippetTests"
        )
    ],
    cLanguageStandard: .c11
)
