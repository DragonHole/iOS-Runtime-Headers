/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSObject, NSArray, FBSApplicationDataStore, NSString;

@interface SBApplicationShortcutStore : NSObject {

	NSLock* _stateLock;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSArray* _cachedApplicationShortcutItems;
	NSArray* _cachedLanguages;
	unsigned long long _cachedVersion;
	BOOL _isLoaded;
	BOOL _isDirty;
	FBSApplicationDataStore* _dataStore;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,copy,readonly) NSArray * languages; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)clearStore;
-(id)description;
-(NSString *)bundleIdentifier;
-(unsigned long long)version;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)invalidateCache;
-(NSArray *)languages;
-(NSArray *)applicationShortcutItems;
-(void)saveSynchronously;
-(void)_stateLock_loadFromStoreIfNeeded;
-(void)_stateLock_markDirty;
-(void)_saveQueue_save;
-(BOOL)_stateLock_truncateIfNeeded:(id)arg1 ;
-(id)_applicationShortcutItemsFromPlistArray:(id)arg1 ;
-(id)_plistArrayFromApplicationShortcutItems:(id)arg1 ;
-(void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3 ;
-(void)truncateIfNecessary;
@end
