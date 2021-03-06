/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WRReplyStoreInfo, NSString, NSArray, NPSDomainAccessor, NPSManager;

@interface WRCannedRepliesStore : NSObject {

	unsigned long long _category;
	WRReplyStoreInfo* _info;
	NSString* _cachedLanguage;
	NSArray* _cachedLocalizedReplies;
	NSArray* _cannedReplies;
	BOOL _didLocalizeDefaultReplies;
	BOOL _didMigrationCheck;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _npsManager;

}
+(BOOL)supportsEnhancedEditing;
-(id)cannedReplies;
-(id)initWithCategory:(unsigned long long)arg1 ;
-(id)domainAccessor;
-(id)npsManager;
-(BOOL)includeSmartReplies;
-(void)setIncludeSmartReplies:(BOOL)arg1 ;
-(void)setCannedReplies:(id)arg1 ;
-(void)invalidateCachesIfNeededForLanguage:(id)arg1 ;
-(void)loadCannedRepliesIfNeeded;
-(BOOL)usesFormalReplies;
-(id)localizedDefaultReply:(id)arg1 ;
-(id)localizedFormalDefaultReply:(id)arg1 ;
-(void)localizeDefaultRepliesIfNeeded;
-(void)saveReplies:(id)arg1 ;
-(BOOL)supportsSmartReplies;
-(id)migrateRepliesIfNeeded:(id)arg1 ;
-(id)repliesForLanguage:(id)arg1 ;
-(void)handleStoreChange;
-(id)init;
-(void)dealloc;
@end

