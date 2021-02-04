/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedPersonalizingItem.h>
#import <libobjc.A.dylib/FCIssueAccessCheckable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FCChannelProviding;
@class NSString, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCAssetHandle, FCColor, FCInterestToken, NTPBIssueRecord;

@interface FCIssue : NSObject <FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying> {

	BOOL _isCurrent;
	BOOL _isDraft;
	BOOL _paid;
	NSString* _identifier;
	long long _type;
	NSString* _title;
	NSDate* _publicationDate;
	NSString* _coverDate;
	FCAssetHandle* _metadataJSONAssetHandle;
	FCAssetHandle* _coverImageAssetHandle;
	double _coverImageAspectRatio;
	FCColor* _coverImagePrimaryColor;
	NSString* _layeredCoverJSON;
	double _layeredCoverAspectRatio;
	FCColor* _layeredCoverPrimaryColor;
	long long _minimumNewsVersion;
	NSString* _notificationDescription;
	NSString* _issueDescription;
	NSArray* _allArticleIDs;
	NSString* _coverArticleID;
	NSArray* _allowedStorefrontIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _topicTagIDs;
	id<FCChannelProviding> _sourceChannel;
	FCInterestToken* _interestToken;
	NTPBIssueRecord* _issueRecord;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,retain) FCInterestToken * interestToken;                                               //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NTPBIssueRecord * issueRecord;                                               //@synthesize issueRecord=_issueRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publicationDate;                                               //@synthesize publicationDate=_publicationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverDate;                                                   //@synthesize coverDate=_coverDate - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * metadataJSONAssetHandle;                                     //@synthesize metadataJSONAssetHandle=_metadataJSONAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle;                                       //@synthesize coverImageAssetHandle=_coverImageAssetHandle - In the implementation block
@property (nonatomic,readonly) double coverImageAspectRatio;                                                //@synthesize coverImageAspectRatio=_coverImageAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) FCColor * coverImagePrimaryColor;                                       //@synthesize coverImagePrimaryColor=_coverImagePrimaryColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * layeredCoverJSON;                                            //@synthesize layeredCoverJSON=_layeredCoverJSON - In the implementation block
@property (nonatomic,readonly) double layeredCoverAspectRatio;                                              //@synthesize layeredCoverAspectRatio=_layeredCoverAspectRatio - In the implementation block
@property (nonatomic,copy,readonly) FCColor * layeredCoverPrimaryColor;                                     //@synthesize layeredCoverPrimaryColor=_layeredCoverPrimaryColor - In the implementation block
@property (nonatomic,readonly) BOOL isCurrent;                                                              //@synthesize isCurrent=_isCurrent - In the implementation block
@property (nonatomic,readonly) BOOL isDraft;                                                                //@synthesize isDraft=_isDraft - In the implementation block
@property (getter=isPaid,nonatomic,readonly) BOOL paid;                                                     //@synthesize paid=_paid - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                                                //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationDescription;                                     //@synthesize notificationDescription=_notificationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * issueDescription;                                            //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allArticleIDs;                                                //@synthesize allArticleIDs=_allArticleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverArticleID;                                              //@synthesize coverArticleID=_coverArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                                         //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                                         //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topicTagIDs;                                                  //@synthesize topicTagIDs=_topicTagIDs - In the implementation block
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel;                                   //@synthesize sourceChannel=_sourceChannel - In the implementation block
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL isLocalDraft; 
-(BOOL)isCurrent;
-(id<FCChannelProviding>)sourceChannel;
-(BOOL)isBundlePaid;
-(BOOL)isBundlePaid;
-(NSDate *)publishDate;
-(NSArray *)topicIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isDraft;
-(BOOL)isLocalDraft;
-(NSDate *)publicationDate;
-(NTPBIssueRecord *)issueRecord;
-(NSArray *)topicTagIDs;
-(BOOL)isPaid;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(NSString *)publisherID;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isANF;
-(BOOL)hasVideo;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(long long)minimumNewsVersion;
-(id)initWithIssueRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 sourceChannel:(id)arg4 ;
-(FCAssetHandle *)coverImageAssetHandle;
-(NSArray *)allArticleIDs;
-(BOOL)isBlockedExplicitContent;
-(FCAssetHandle *)metadataJSONAssetHandle;
-(double)layeredCoverAspectRatio;
-(FCColor *)layeredCoverPrimaryColor;
-(NSString *)coverArticleID;
-(NSString *)notificationDescription;
-(NSString *)issueDescription;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageAspectRatio:(double)arg8 coverImagePrimaryColor:(id)arg9 layeredCoverJSON:(id)arg10 layeredCoverAspectRatio:(double)arg11 layeredCoverPrimaryColor:(id)arg12 isCurrent:(BOOL)arg13 isDraft:(BOOL)arg14 isPaid:(BOOL)arg15 minimumNewsVersion:(long long)arg16 allArticleIDs:(id)arg17 coverArticleID:(id)arg18 allowedStorefrontIDs:(id)arg19 blockedStorefrontIDs:(id)arg20 topicTagIDs:(id)arg21 sourceChannel:(id)arg22 notificationDescription:(id)arg23 issueDescription:(id)arg24 ;
-(id)initWithData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 ;
-(NSString *)coverDate;
-(double)coverImageAspectRatio;
-(FCColor *)coverImagePrimaryColor;
-(NSString *)layeredCoverJSON;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageHQAssetHandle:(id)arg8 coverImageLQAssetHandle:(id)arg9 coverImageAspectRatio:(double)arg10 coverImagePrimaryColor:(id)arg11 layeredCoverJSON:(id)arg12 layeredCoverAspectRatio:(double)arg13 layeredCoverPrimaryColor:(id)arg14 isCurrent:(BOOL)arg15 isDraft:(BOOL)arg16 isPaid:(BOOL)arg17 minimumNewsVersion:(long long)arg18 allArticleIDs:(id)arg19 coverArticleID:(id)arg20 allowedStorefrontIDs:(id)arg21 blockedStorefrontIDs:(id)arg22 PDFResourceIDs:(id)arg23 topicTagIDs:(id)arg24 sourceChannel:(id)arg25 notificationDescription:(id)arg26 issueDescription:(id)arg27 ;
-(NSString *)itemID;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
@end
