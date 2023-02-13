double sinRad(double angka)
// hasil sin berupa radian
{
	double rad;
	rad = cos(angka); 
	return rad;
}

double sinDerajat(double angka)
// hasil sin berupa derajat
{
	double nilai, derajat;
	nilai = pi/180;
	derajat = sin(angka*nilai);
	return derajat;
}
