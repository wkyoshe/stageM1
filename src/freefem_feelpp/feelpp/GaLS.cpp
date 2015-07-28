//.......
using namespace Feel;

int
main( int argc, char** argv )
{
    Environment env( _argc=argc, _argv=argv,
                     _desc=opts,
                     _about=about(_name="myadvection",
                                  _author="kyoshe winstone",
                                  _email="wkyoshe@gmail.com") );
    // create mesh
    auto mesh = unitSquare();
    // function space
    auto Xh = Pch<1>( mesh );
    auto u = Xh->element( "u" );
    auto v = Xh->element( "v" );
    // diffusion coeff.
    double epsilon = doption(_name="epsilon");
    // reaction coeff.
    double mu = doption(_name="mu");
    double delta = doption(_name="delta");
    auto beta = vec( cst(option(_name="betax").as<double>()),
                     cst(option(_name="betay").as<double>()) );
    auto f = cst(1.);
    auto laplacian_u=laplacian(u);
    auto laplacian_v=laplacian(v);
    // left hand side
    auto a = form2( _test=Xh, _trial=Xh );
    a = integrate( _range=elements( mesh ),
                    _expr=( epsilon*gradt( u )*trans( grad( v ) )
                         + ( gradt( u )*beta )*id(v)
                         + mu*idt( u )*id( v ) ) )    
                         
     a+= integrate( _range=elements( mesh ),
                    _expr=( delta*(epsilon*(laplacian_u+beta*gradt( u )+ mu*idt( u ) ))*((-epsilon*(laplacian_v+beta*gradt( v )+ mu*idt( v ) ))));
                                                
    // right hand side
    auto l = form1( _test=Xh );
    l+= integrate( _range=elements( mesh ), _expr=f*id( v ) ) + ( _range=elements( mesh ), _expr=(delta*(-f)*((-epsilon*(laplacian_v+beta*gradt( v )+ mu*id( v ) )))));
    
    // boundary condition
    a += on( _range=boundaryfaces( mesh ), _rhs=l, _element=u,
             _expr=cst(0.) );
           
    // solve the system
    a.solve( _rhs=l, _solution=u );
    // export results
    auto e = exporter( _mesh=mesh );
    e->add("u",u);
    e->save();
} // end main
