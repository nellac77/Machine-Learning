

using namespace std;

class Reader{
public:
	string trainingFileName;
	string testingFileName;
	vector<vector<float>> trainingData;
	vector<vector<float>> testingData;
	Reader(string f1,string f2){
		this->testingFileName = f2;
		this->trainingFileName = f1;
		trainingData = read(f1);
		testingData = read(f2);
	}

vector<vector<float>> read(string fileName){
		ifstream infile (fileName);
		string str;
		int id = 0;
		int count = 0;
		vector<vector<float>> data;
		cout<<"infile: "<<fileName<<endl;
		//getline(infile, str,',');
		//getline(infile, str);

		while (getline(infile, str)) {
		vector<float> thisLine;
		stringstream ss(str);

	   	float i;

	    while (ss >> i)
	    {
	        thisLine.push_back(i);

	        if (ss.peek() == ',')
	            ss.ignore();
	    }

	    data.push_back(thisLine);
	    //cout<<"size "<<thisLine.size()<<endl;
		}
		return(data);
		//cout<<"size: "<<svmData.size()<<endl;
}

};
