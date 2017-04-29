#include <bits/stdc++.h>
using namespace std;
string label[100001];
vector<pair<int,double> > graph[100001];
struct comp { // comparator function
    bool operator() (const pair<int,double> &a, const pair<int,double> &b) {
        return a.second > b.second;
    }
};
priority_queue<pair<int,double>,vector<pair<int,double> >, comp > Q;
double djikstras(int n)
{

    int marked[100001] = {0};
    double dist[100001];
    for(int i = 0;i< 100001;i++)
    {
        dist[i] = INFINITY;
    }
        dist[n] = 0;

    Q.push(make_pair(n,0));
    double maxi = 0;
    while(Q.size()!=0)
    {
        pair<int,double> p = Q.top();
        marked[p.first] = 1;
        Q.pop();
        for(int i = 0;i< graph[p.first].size();i++)
        {
            int node = graph[p.first][i].first;
            double weight = graph[p.first][i].second;
            if(!marked[node])
            {

                if(dist[node] > dist[p.first] + weight)
                {

                   dist[node] = dist[p.first] + weight;

                   if(dist[node] > maxi)
                    maxi = dist[node];
                   Q.push(make_pair(node,dist[node]));
                   marked[node] = 1;

                }
            }
        }
    }
    return maxi;

}
int dfs(int n,int marked[],int markid)
{
    stack<int> st;
    st.push(n);
    marked[n] = markid;

    int cn = 1;
    while(st.size() != 0)
    {
        int p = st.top();
        st.pop();
        for(int i = 0;i< graph[p].size();i++)
        {
            if(marked[graph[p][i].first] == 0)
            {
                marked[graph[p][i].first] = markid;
                st.push(graph[p][i].first);
                cn++;
            }
        }
    }
    return cn;
}
double todo(string word)
{
    int len = word.length();
    double base = 10.0;
    double sum = 0,f = 0;
    for(int i = 0;i<len;i++)
    {
        if(word[i] == '.')
        {
            f = 1;
                        base = 1/10.0;

            continue;
        }
        if(f)
        {
            sum+=((double)(word[i]-48)*base);
            base = base/10.0;

        }
        else
        {
            sum*=base;
            sum+=double(word[i]-48);

        }
     //   cout<<sum<<endl;
       // cout<<base<<endl;
    }
    return sum;
}
int toint(string word)
{
    int len = word.length();
    int sum = 0;
    int base = 1;
    for(int i = len-1;i>=0;i--)
    {
        sum+=(word[i]-48)*base;
        base*=10;
    }
    return sum;


}
string removespace(string line)
{
    string ans;
    int len = line.length();
    for(int i = 0;i< len;i++)
    {
        if(line[i] != ' ')
        ans+=line[i];
    }
    return ans;
}
int main()
{
        //cout<<todo("11.11")<<endl;

 string line;
 ifstream infile;
 infile.open("input.txt");
 int maxid = 0;
 while ( getline (infile,line) )
    {
        line = removespace(line);
        if(line == "node")
        {
            getline (infile,line);
            getline (infile,line);
            line = removespace(line);
            int id = toint(line.substr(2,line.length()-2));
           // cout<<id<<endl;
            getline (infile,line);
           line = removespace(line);
          label[id] = line.substr(7,line.length()-7-1);
            maxid = id;
          //  cout<<label[id]<<endl;


        }
        else if(line == "edge")
        {
            getline (infile,line); // [
            getline (infile,line);// source
            line = removespace(line);
            int source = toint(line.substr(6,line.length()-6));
           // cout<<source<<endl;
            getline (infile,line);// target
           line = removespace(line);
          int target = toint(line.substr(6,line.length()-6));
         // cout<<target<<endl;
            getline (infile,line);// value
            line = removespace(line);
            double value = todo(line.substr(5,line.length()-5));
            graph[source].push_back(make_pair(target,value));
            graph[target].push_back(make_pair(source,value));



        }
    }


    //Connected Components
    int marked[100001] ={0};
    int markid = 1;
    int maxmarkid = 1,maxcomp = 0;
    vector<int> strcon;
    for(int i = 0;i<=maxid;i++)
    {
        if(marked[i] == 0)
        {
            int comp = dfs(i,marked,markid);
            if(comp > maxcomp)
            {
                maxcomp = comp;
                maxmarkid = markid;
            }
            markid++;
        }
    }
    for(int i = 0;i<=maxid;i++)
    {
        if(marked[i] == maxmarkid)
        {
            strcon.push_back(i);
          //  cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"No. of nodes in largest subcomponent "<<maxcomp<<endl;

    //DIAMETER
    int sz = strcon.size();
    srand (time(NULL));
    double maxdist = 0;

    for(int i = 0;i<=500;i++)
    {
        int r1 = rand()%sz;

        double dist = djikstras(strcon[r1]);
        if(dist > maxdist)
        {
            maxdist = dist;
        }

    }
    cout<<"Diameter of the graph is: "<<maxdist<<endl;

}


