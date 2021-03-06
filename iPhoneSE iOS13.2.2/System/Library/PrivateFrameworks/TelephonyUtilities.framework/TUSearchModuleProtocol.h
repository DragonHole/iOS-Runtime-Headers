/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TUSearchResults, TUSearchController;


@protocol TUSearchModuleProtocol <NSObject>
@property (getter=isSearchComplete,readonly) BOOL searchComplete; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController; 
@optional
-(TUSearchController *)searchController;
-(void)setSearchController:(id)arg1;

@required
-(TUSearchResults *)searchResults;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelSearch;
-(BOOL)isSearchComplete;

@end

