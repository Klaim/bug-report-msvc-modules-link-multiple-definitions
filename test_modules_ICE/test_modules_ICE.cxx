import std.core;
import test;

int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;
  test::Object k = test::foo();
  string text = get<string>(k); // ERROR: multiple definition of std::streambuf
  cout << "Value : " << text << endl;
}
