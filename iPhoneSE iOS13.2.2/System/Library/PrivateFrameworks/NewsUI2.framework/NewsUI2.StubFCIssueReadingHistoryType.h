/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCIssueReadingHistoryType.h>

@class NSString, NSArray;

@interface NewsUI2.StubFCIssueReadingHistoryType : _UKNOWN_SUPERCLASS_ <FCIssueReadingHistoryType>

@property (readonly,nonatomic) NSString * mostRecentlyVisitedIssueID; 
@property (readonly,nonatomic) NSArray * recentlyVisitedIssueIDs; 
@property (readonly,nonatomic) NSArray * recentlyEngagedIssueIDs; 
@property (readonly,nonatomic) NSArray * allEngagedIssueIDs; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg1 ;
-(void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2 ;
-(void)markIssueAsBadgedWithID:(id)arg1 ;
-(void)markIssueAsEngagedWithID:(id)arg1 ;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenBadged:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg1 ;
-(id)lastVisitedDateForIssueWithID:(id)arg1 ;
-(id)lastEngagedDateForIssueWithID:(id)arg1 ;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1 ;
-(NSString *)mostRecentlyVisitedIssueID;
-(NSArray *)recentlyVisitedIssueIDs;
-(NSArray *)recentlyEngagedIssueIDs;
-(NSArray *)allEngagedIssueIDs;
@end

