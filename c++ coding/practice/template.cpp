// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2022 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <barrier>
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
# include <coroutine>
#endif
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <source_location>
#include <syncstream>
#include <version>
#endif

#if __cplusplus > 202002L
#include <expected>
#include <spanstream>
#if __has_include(<stacktrace>)
# include <stacktrace>
#endif
#include <stdatomic.h>
#endif
#include<bits/stdc++.h>
using namespace std; 
#define pb push_back 
#define ss second
#define ppb pop_back
#define ins insert
#define lb lower_bound
#define ub upper_bound 
#define umap unordered_map
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(i,n) for(int i = (int)(n) - 1; i >= 0; i--)
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
template<class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } else return false; }
template<class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return true; } else return false; }
using ll = long long;
using lli = long long int;
using p = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>; 
using vvl = vector<vl>; 
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
int  mod=1000000007;
int powerr(int x,int y)
{
    if(y==0){return 1;}
    int z=powerr(x,y/2);
    z=z*z;
    z%=mod;
    if(y%2)
        {
            z=z*x;
            z%=mod;
        }
    return z;
}
int inv(int x)
{
    return powerr(x,mod-2);
}
#define mset multiset
void google(ll t) {cout << "Case #" << t << ": ";}
void yes(int x = 0) {if (!x)cout << "Yes" << endl; else cout << "YES" << endl;}
void no(int x = 0)  {if (x)cout << "NO" << endl; else cout << "No" << endl; }
 
//--------------------------------************-----------------------------------//
void dfs(int node,vector<int>adj[],vector<int>&par){
       for(auto &itr: adj[node]){
         if(par[node]!=itr){ 
           par[itr]=node; 
           dfs(itr,adj,par);
         }
       }
} 
void iskoko(int n,vector<int>&vis,vector<int>adj[],vector<int>&ans){
      ans.push_back(n); 
      for(auto itr: adj[n]){
        if(vis[itr]==0){ 
          vis[itr]=1;
          iskoko(itr,vis,adj,ans);
        }
      }
}
 
int lcs(string s, string t){  
    int n=s.size();
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i){
       for(int j=1;j<=n;++j){
         if(s[i-1]==t[j-1]){
          dp[i][j]=dp[i-1][j-1]+1;
        }
        else{
          dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
       }
    } 
    int ans=0;
    for(int i=0;i<=n;++i){
      ans=max(ans,dp[i][n-i]);
    }
    return ans;
}  
int dp[200005];
int kook(int node,int par,vl &a,int n){
       if(node==par)
       return 0; 
       if(dp[node]!=-1)
       return dp[node];
       return dp[node]=1+kook(a[node],par,a,n);
}
ll ans=0;
void merge(int low,int mid,int high,vl a){
      int k=low;
      vl ds;
      int i=low;
      int j=mid+1;
      while(i<=mid && j<high){
         if(a[i]<=a[j]){
           ds.push_back(a[i++]);
         }
         else{
           ans+=j-mid;
         }
      }
      sort(a.begin()+low,a.begin()+high+1);

}
void koko(int node,vector<int>&vis,vector<int>adj[]){
   vis[node]=1;
   for(auto itr: adj[node]){
       if(!vis[itr]){
          koko(itr,vis,adj);
       }
   }
}

void solve()
{
  return;
}
int main(){
  ll t=1;
  // cin>>t;
  ll ans=0;
  while(t--){ 
    solve();  
  }
return 0;
}