/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <Search/SFSearchResult_Compatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility <NSCopying> {

	BOOL _completed;
	BOOL _hasAssociatedUserActivity;
	NSString* _relatedUniqueIdentifier;
	NSString* _itemIdentifier;
	NSDate* _interestingDate;
	NSString* _domainIdentifier;
	long long _incomingCount;
	long long _outgoingCount;
	NSString* _relatedBundleID;
	NSString* _mailConversationIdentifier;
	NSArray* _launchDates;
	NSDate* _contentCreationDate;
	NSString* _bundleID;
	ranking_index_score_t _buddyScore;

}

@property (retain) NSString * relatedUniqueIdentifier;                    //@synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier - In the implementation block
@property (assign) ranking_index_score_t buddyScore;                      //@synthesize buddyScore=_buddyScore - In the implementation block
@property (retain) NSString * itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSDate * interestingDate;                              //@synthesize interestingDate=_interestingDate - In the implementation block
@property (assign) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (retain) NSString * domainIdentifier;                           //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (assign) long long incomingCount;                               //@synthesize incomingCount=_incomingCount - In the implementation block
@property (assign) long long outgoingCount;                               //@synthesize outgoingCount=_outgoingCount - In the implementation block
@property (retain) NSArray * compatibilityDescriptions; 
@property (retain) NSString * relatedBundleID;                            //@synthesize relatedBundleID=_relatedBundleID - In the implementation block
@property (retain) NSString * mailConversationIdentifier;                 //@synthesize mailConversationIdentifier=_mailConversationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedUserActivity;              //@synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity - In the implementation block
@property (nonatomic,retain) NSArray * launchDates;                       //@synthesize launchDates=_launchDates - In the implementation block
@property (nonatomic,retain) NSDate * contentCreationDate;                //@synthesize contentCreationDate=_contentCreationDate - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) int title_maxlines; 
-(void)setIncomingCount:(long long)arg1 ;
-(long long)incomingCount;
-(BOOL)hasDetail;
-(BOOL)completed;
-(void)setContentCreationDate:(NSDate *)arg1 ;
-(NSDate *)contentCreationDate;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)relatedUniqueIdentifier;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(NSDate *)interestingDate;
-(void)setRelatedUniqueIdentifier:(NSString *)arg1 ;
-(void)setCompatibilityDescriptions:(NSArray *)arg1 ;
-(NSArray *)compatibilityDescriptions;
-(void)setTitle_maxlines:(int)arg1 ;
-(int)title_maxlines;
-(ranking_index_score_t)buddyScore;
-(void)setBuddyScore:(ranking_index_score_t)arg1 ;
-(void)setInterestingDate:(NSDate *)arg1 ;
-(long long)outgoingCount;
-(void)setOutgoingCount:(long long)arg1 ;
-(NSString *)relatedBundleID;
-(void)setRelatedBundleID:(NSString *)arg1 ;
-(NSString *)mailConversationIdentifier;
-(void)setMailConversationIdentifier:(NSString *)arg1 ;
-(BOOL)hasAssociatedUserActivity;
-(void)setHasAssociatedUserActivity:(BOOL)arg1 ;
-(NSArray *)launchDates;
-(void)setLaunchDates:(NSArray *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(NSString *)bundleID;
-(void)setCompleted:(BOOL)arg1 ;
@end

