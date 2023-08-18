#include<iostream>
using namespace std;

int main(){
	string s;
	int u,v,dem = 0;
	// -------------------------
	int *value = new int[100];
	int *next = new int[100];
	int *start = new int[100];
	int *end = new int[100];
	int *m_prev = new int[100];
	// --------------------------
	for(int i=0;i<100;i++){
		start[i] = 0;
		end[i] = 0;
		next[i] = 0;
	}
	// --------------------------
	while(true){;
		cin >> s;
		if(s == "end"){
			break;
		}
		if(s == "UnFriend"){
			cin >> u >> v;
			// xu ly u
			int i = start[u];
			while(i!=0){
				if(value[i]==v){
					if(i==start[u]){
						start[u] = next[start[u]];
						next[i] = 0;
						m_prev[next[i]] = 0;
					}else if(i==end[u]){
						end[u] = m_prev[i];
						next[m_prev[i]] = 0;
						m_prev[i] = 0;
					}else{
						next[m_prev[i]] = next[i];
						m_prev[next[i]] = m_prev[i];
					}
				}else{
					i = next[i];
				}
			}
			// xu ly vi = start[v];
			while(i!=0){
				if(value[i]==u){
					if(i==start[v]){
						start[v] = next[start[v]];
						next[i] = 0;
						m_prev[next[i]] = 0;
					}else if(i==end[v]){
						end[v] = m_prev[i];
						next[m_prev[i]] = 0;
						m_prev[i] = 0;
					}else{
						next[m_prev[i]] = next[i];
						m_prev[next[i]] = m_prev[i];
					}
				}else{
					i = next[i];
				}
			}
		}
		if(s == "Add"){
			cin >> u >> v;
			dem++; 
			value[dem] = v;
			if(start[u]==0){
				start[u] = dem;
				end[u] = dem;
				m_prev[start[u]] = 0;
			}else{
				next[end[u]] = dem;
				end[u] = dem;
				m_prev[next[dem]] = dem;
			}
			// -------------------
			dem++; value[dem] = u;
			if(start[v]==0){
				start[v] = dem;
				end[v] = dem;
				m_prev[start[v]] = 0;
			}else{
				next[end[v]] = dem;
				end[v] = dem;
				m_prev[next[dem]] = dem;
			}
		}
		if(s == "List"){
			cin >> u;
			int i=start[u];
			cout << "Friend "<<u<<" : ";
			if(i!=0){
				while(true){
					cout << value[i] << " ";
					if(i == end[u]) break;
					i = next[i];
				}
			}
			cout << endl;
		}
	}
	return 0;
}