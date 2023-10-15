/*





////   CP  Full Notes.

//Pre computation techniques and hashing....

#include<iostream>
using namespace std;

//Globally declaring hash array r always zero elements.
//For negative number in array if we want to hash it then if range it(-a , b) then hash array would be from 0 to a+b.. 
int hash[];



int main(){
	int t , i , j , n , a , b , c , x;
	cin>>t;
	//Pre declaring hashed array so tht it decrease time complexity.
	cin>>n;
	int arr[n]; 
	for(i=0 ; i<n ; ++i{
		cin>>arr[i];
		hash[arr[i]]++;

	}
	while(t--){
		cin>>x;
		cout<<hash[x];
	
	}
}





*/

// Precomputation technique using prefix sum..
//program to count sum of numbers form index a to b..

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int hsh[N];


int main(){
	int t , a , b , c , n , d , e , i , j , k;
	int arr[8];
	for(i=0 ; i<N ; ++i){
		
		cin>>arr[i];
		hsh[i] = arr[i] + arr[i-1];
	}
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<hsh[b-1] -hsh[a-1];
	}
}
/*






//STL

//pairs and vectors

#include<iostream>
#include<vector>
using namesoace std;

int main(){
    pair<int , string> p;
    p = { 1 , "abc"};

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0 ; i<v.size() ,++i){
        cout<<v[i]<<" ";
    }

    //If we want azero vector then declare its size..
    vector<int> v1(10);


    //If u want to prefill any value then do like this..
    vector<int> ab(10 , 3);   //this we be a vector of 3 , 3 , 3 , ....
    ab.pop_back(); //this removes last element of vector.



}




// Nested Vector & Pairs..

#include<iostream>
using namespace std;

int main(){
	vector<pair<int , int>> v;
	for(int i=0 ; i<n ; i++){
		int x , y;
		cin<<x<<y;
		v.push_back({x , y})  // or we can also do like v.pushback(make_pair(x , y))
	}
	for(int i=0 ; i<v.size() ; ++i){
		cout<< v[i].first << " "<< v[i].second;
	}



	//Array of vectors...

	vector<int>v1[N];
	cin>>N;         //N is the number of lines in array...
	for(int i=0 ; i<N ; i++){
		
		cin<<n;     //n is the numaber of elements u want in vector
		for(int j=0 ; j<n ; j++){
			int c ; 
			cin<<c;
			v[i].push_back(c);
		}
	}

	//Vector of Vector

	vector<vector<int>> v2;
	cout<<"Enter no of rows u want in vec"; int n;
	cin<<n;
	for(int i=0 ; i<n ; i++){
		cout<<"Enetr no of columnt u want in this vector";
		int N;
		v2.push_back(vector<int>);
		for(int j =0 ; j<N ; ++j){
			int z ;
			cin>>z;
			v2[i].push_back(z);
		}
	}


}





//Iterators

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> q;
	int g1;
	cin>>g1;
	for(int i=0 ; i<g1 ; ++i){
		int x1;
		cin>>x1;
		q.push_back(x1)
	}
	vector<int> ::iterator it =q.begin();
	for(it=q.begin() ; it!=q.end() ; ++it){
		cout<<(*it);  //for vector pair we use (*it).first to print pai r
	}

}





//Maps

#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int , string> m;
	m[7] = "khf";
	m[2] = "yre";
	m[4] = "ngf";
	m[-1] = "hfd";
	m.insert({5 , "bax"});
	map<int , string> :: iterator it;
	for(it=m.begin() ; it!=m.end() ; ++it ){
		cout<<(*it).first <<" "<<(*it).second <<endl;
	}
	auto it =m.find(7);
	if(it != m.end()){
		m.erase(it);
		m.clear();       //clears all value.
	}
}

*/



// ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     auto start1 = high_resolution_clock::now(); 




// #include<bits/stdc++.h>
// using namepspace std;


// int main(){
// 	for(int i=0 ; i<8 ; ++i){
// 		printBinary(i);
// 		if(i&1){
// 			cout<<"odd\n";   //here it is equal to i&1 !=0 where ans 1 means true and answer 0 considered as false also it is.
// 		}
// 		else cout<<"even\n";       //faster than n%2 == 0. 
// 	}
// }


// SET

    // set<int> s;
    // for(int i=0 ; i<n ; ++i){
    //     int x;
    //     cin >> x;
    //     s.insert(x);
    // }

    // auto it = s.begin();

    // else if(s.size() == 2){
    //     int u = 2 * ( abs( *it - *(++it) ) );
    //     cout << u << endl;
    //     return;
    // }
    // else{
    //     auto it = s.begin();
    //     auto ite = s.end();
    //     ite--;
    //     int y = *ite ;
    //     ite--;
    //     int y2 = *ite ;

    //     int x = y-y2 + y- *it;
    //     cout << x << endl;
    //     return;
    // }
	
	// set<int> s;
    // for(int i=(n-1) ; i>-1 ; --i){
    //     int t =0;
    //     int z = v[i].size();
    //     for(int j=0 ; j<z ; ++j){
    //         int y = v[i][j];

    //         auto it = s.find(y);             // imp

    //         if(it == s.end()){
    //             s.insert(y);
    //             if(t==0){
    //                 v1.push_back(y);
    //                 t = 1;
    //             }
    //         }
    //     }
    // }



	    map<int , int> m;
    for (int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        for(int j = 2; j*j <= x; ++j){         //Prime factors always lie between 2 to its root dont forget to mention <= equal to
            while(x % j == 0){
                x /= j;
                m[j]++;
            }
            
        }
        if(x != 1){								//also one extra prime factor coult lie outside the root and you can find it directly.
            m[x]++;
        }
    }








// When ever power function (pow) gives round numbers like 99999 use double here. Just like below.

	double y = pow(10 , a);



// How to initialize vectors of vectors 

vector<vector<int>> v(n , vector<int> (m,0));

// how to use sieve algorithm to take out all prime numbers leess than a given number N

const int N = 1e5+10;
vector<bool> prime(N, true);

void sieve(){
    for(int i=3 ; i*i<N ; i+=2) if(prime[i]) for(int j=i*i ; j<N ; j+=(2*i)) prime[j] = false;
}


// for calculating prime factors 
// here we will calculate all numbers prime factors exept who are squares cubes or so on of power of 2
//  if you want to calculate them also then in for loop put 2 instead of 3

#define int long long
const int N = 1e5+10;
vector<bool> prime(N, true);
vector<int> g[N];

void prime_factors(){
    for(int i=3 ; i*i<N ; i+=2){
        if(prime[i]){
            for(int j=i+i ; j<N ; j+=i){
                prime[j] = false;
                g[j].push_back(i); 
            }
        }
    }
}

//to know the size of integer a
int n = trunc(log10(a))+1;