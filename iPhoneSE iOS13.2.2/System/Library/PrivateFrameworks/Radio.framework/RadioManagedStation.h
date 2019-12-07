/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSURL, NSData, NSArray, NSDictionary;

@interface RadioManagedStation : NSManagedObject

@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (nonatomic,copy) NSString * stationStringID; 
@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long adamID; 
@property (assign,nonatomic) int sortOrder; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stationDescription; 
@property (nonatomic,copy) NSString * coreSeedName; 
@property (nonatomic,copy) NSURL * artworkURL; 
@property (nonatomic,copy) NSData * artworkURLData; 
@property (nonatomic,retain) NSArray * seedTracks; 
@property (assign,nonatomic) long long songMixType; 
@property (assign,nonatomic) BOOL editEnabled; 
@property (nonatomic,retain) NSArray * editableFields; 
@property (assign,nonatomic) BOOL hasSkipRules; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (assign,nonatomic) BOOL likesEnabled; 
@property (assign,nonatomic) BOOL skipEnabled; 
@property (assign,nonatomic) int skipFrequency; 
@property (nonatomic,copy) NSString * skipIdentifier; 
@property (assign,nonatomic) double skipInterval; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (assign,nonatomic) BOOL virtualPlayEnabled; 
@property (assign,getter=isFeatured,nonatomic) BOOL featured; 
@property (assign,getter=isGatewayVideoAdEnabled,nonatomic) BOOL gatewayVideoAdEnabled; 
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored; 
@property (nonatomic,retain) NSData * adData; 
@property (assign,nonatomic) unsigned long long impressionThreshold; 
@property (assign,getter=isPremiumPlacement,nonatomic) BOOL premiumPlacement; 
@property (assign,getter=isPreviewOnly,nonatomic) BOOL previewOnly; 
@property (assign,nonatomic) BOOL requiresSubscription; 
@property (assign,getter=isShared,nonatomic) BOOL shared; 
@property (assign,getter=isSharingEnabled,nonatomic) BOOL sharingEnabled; 
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed; 
@property (assign,nonatomic) int subscriberCount; 
@property (nonatomic,copy) NSString * shareToken; 
@property (nonatomic,copy) NSDictionary * debugDictionary; 
@property (nonatomic,retain) NSURL * streamURL; 
@property (getter=isPreview,nonatomic,readonly) BOOL preview; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)defaultPropertiesToFetch;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(NSDictionary *)debugDictionary;
-(BOOL)isShared;
-(long long)stationID;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setShared:(BOOL)arg1 ;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)setSubscribed:(BOOL)arg1 ;
-(NSURL *)streamURL;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(NSString *)stationDescription;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(long long)adamID;
-(void)setAdamID:(long long)arg1 ;
-(BOOL)isSubscribed;
-(unsigned long long)impressionThreshold;
-(void)setImpressionThreshold:(unsigned long long)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(BOOL)isPreview;
-(NSString *)coreSeedName;
-(void)setSkipInterval:(double)arg1 ;
-(void)setSkipFrequency:(int)arg1 ;
-(double)skipInterval;
-(int)skipFrequency;
-(void)setSubscriberCount:(int)arg1 ;
-(int)subscriberCount;
-(NSString *)shareToken;
-(BOOL)isSponsored;
-(BOOL)isFeatured;
-(void)setSponsored:(BOOL)arg1 ;
-(BOOL)isSharingEnabled;
-(id)feedbackDictionaryRepresentation;
-(NSData *)adData;
-(NSData *)artworkURLData;
-(BOOL)editEnabled;
-(BOOL)isGatewayVideoAdEnabled;
-(BOOL)hasSkipRules;
-(BOOL)likesEnabled;
-(BOOL)isPremiumPlacement;
-(BOOL)isPreviewOnly;
-(BOOL)requiresSubscription;
-(BOOL)skipEnabled;
-(NSString *)skipIdentifier;
-(long long)songMixType;
-(BOOL)virtualPlayEnabled;
-(NSArray *)seedTracks;
-(id)additionalReferencedTrackDescriptors;
-(NSArray *)editableFields;
-(void)setAdData:(NSData *)arg1 ;
-(void)setArtworkURLData:(NSData *)arg1 ;
-(void)setCoreSeedName:(NSString *)arg1 ;
-(void)setDebugDictionary:(NSDictionary *)arg1 ;
-(void)setEditEnabled:(BOOL)arg1 ;
-(void)setEditableFields:(NSArray *)arg1 ;
-(void)setFeatured:(BOOL)arg1 ;
-(void)setGatewayVideoAdEnabled:(BOOL)arg1 ;
-(void)setHasSkipRules:(BOOL)arg1 ;
-(void)setLikesEnabled:(BOOL)arg1 ;
-(void)setPremiumPlacement:(BOOL)arg1 ;
-(void)setPreviewOnly:(BOOL)arg1 ;
-(void)setRequiresSubscription:(BOOL)arg1 ;
-(void)setSeedTracks:(NSArray *)arg1 ;
-(void)setShareToken:(NSString *)arg1 ;
-(void)setSkipEnabled:(BOOL)arg1 ;
-(void)setSkipIdentifier:(NSString *)arg1 ;
-(void)setSkipTimestamps:(NSArray *)arg1 ;
-(void)setSongMixType:(long long)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(void)setStreamURL:(NSURL *)arg1 ;
-(void)setStreamCertificateURL:(id)arg1 ;
-(void)setStreamKeyURL:(id)arg1 ;
-(void)setVirtualPlayEnabled:(BOOL)arg1 ;
-(NSArray *)skipTimestamps;
-(id)streamCertificateURL;
-(id)streamKeyURL;
@end
