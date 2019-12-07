/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {

	id _searchContext;
	NSSet* _searchTypes;
	NSSet* _searchStrings;
	CalDAVPrincipalSearchPropertySet* _serverSupportSet;

}

@property (nonatomic,retain) NSSet * searchTypes;                                              //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;                                            //@synthesize searchStrings=_searchStrings - In the implementation block
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;              //@synthesize serverSupportSet=_serverSupportSet - In the implementation block
@property (nonatomic,retain) id searchContext;                                                 //@synthesize searchContext=_searchContext - In the implementation block
-(id)searchItems;
-(id)searchContext;
-(void)setSearchContext:(id)arg1 ;
-(id)extraAttributes;
-(void)setSearchTypes:(NSSet *)arg1 ;
-(NSSet *)searchTypes;
-(NSSet *)searchStrings;
-(id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setServerSupportSet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)serverSupportSet;
@end
