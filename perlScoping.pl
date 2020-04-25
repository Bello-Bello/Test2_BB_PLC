
# Static scoping in perl
$x = 1;
sub func1{
    return $x;
}
sub staticfunc{
    my $x = 2; #for static var
    return func1();
}
print "static scope:";
print staticfunc();  # 1 is returned
print "\n";

# dynamic scoping in perl
$y = 1;
sub func2{
    return $y;
}
sub dynamicfunc{
    local $y = 2; #for dynamic var
    return func2;
}
print "dynamic scope:";
print dynamicfunc(); #2 is returned


