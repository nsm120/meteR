% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/print.mete.R
\name{print.meteESF}
\alias{print.meteESF}
\title{print.meteESF}
\usage{
\method{print}{meteESF}(x, ...)
}
\arguments{
\item{x}{an object of class \code{meteESF}}

\item{...}{arguments to be passed}
}
\value{
\code{x} silently
}
\description{
\code{print.meteESF} prints an object of class \code{meteESF}
}
\details{
See Examples
}
\examples{
data(arth)
esf1 <- meteESF(spp=arth$spp,
                abund=arth$count,
                power=arth$mass^(.75),
                minE=min(arth$mass^(.75)))
print(esf1)
esf1 # alternatively...

}
\author{
Andy Rominger <ajrominger@gmail.com>, Cory Merow
}
\references{
Harte, J. 2011. Maximum entropy and ecology: a theory of abundance, distribution, and energetics. Oxford University Press.
}
\keyword{METE,}
\keyword{MaxEnt,}
\keyword{ecosystem}
\keyword{function}
\keyword{lagrange}
\keyword{multiplier,}
\keyword{structure}

