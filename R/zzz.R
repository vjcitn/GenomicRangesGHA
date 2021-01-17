.onUnload <- function(libpath)
{
    library.dynam.unload("GenomicRangesGHA", libpath)
}

.test <- function() BiocGenerics:::testPackage("GenomicRangesGHA")

