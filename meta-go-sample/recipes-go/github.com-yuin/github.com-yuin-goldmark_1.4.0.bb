DESCRIPTION = "Recipe for https://pkg.go.dev/github.com/yuin/goldmark"
HOMEPAGE = "https://pkg.go.dev/github.com/yuin/goldmark"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/github.com/yuin/goldmark/LICENSE;md5=9ccc571100d655d5a450059a79f1339e"

# Get the version by curl https://proxy.golang.org/github.com/yuin/goldmark/@latest
SRC_URI += "https://proxy.golang.org/github.com/yuin/goldmark/@v/v1.4.0.zip;srcoutput=github.com/yuin/goldmark;srcinput=github.com/yuin/goldmark@v1.4.0;downloadfilename=golang.org-yuin-goldmark-1.4.0.zip;name=golang.org-yuin-goldmark"
SRC_URI[golang.org-yuin-goldmark.sha256sum] = "920012ef5c68245bc8477f4c8bbc79264032fb6d17035f06bc4c9955f9d7f6c2"
UPSTREAM_CHECK_COMMITS = "1"

GO_IMPORT = "github.com/yuin/goldmark"

inherit gosrc

