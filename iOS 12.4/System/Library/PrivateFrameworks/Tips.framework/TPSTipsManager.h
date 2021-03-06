/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSXPCConnection, NSBundle, NSObject, NSMutableDictionary;

@interface TPSTipsManager : NSObject {

	NSXPCConnection* _xpcConnection;
	NSBundle* _frameworkBundle;
	NSObject*<OS_os_transaction> _collectionImageFetchTransaction;
	NSMutableDictionary* _collectionImageDownloadHandlerMap;
	NSMutableDictionary* _collectionImageDownloadTasksMap;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> collectionImageFetchTransaction;              //@synthesize collectionImageFetchTransaction=_collectionImageFetchTransaction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * collectionImageDownloadHandlerMap;                   //@synthesize collectionImageDownloadHandlerMap=_collectionImageDownloadHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * collectionImageDownloadTasksMap;                     //@synthesize collectionImageDownloadTasksMap=_collectionImageDownloadTasksMap - In the implementation block
+(id)defaultManager;
-(id)xpcConnection;
-(void)_destroyXPCConnection;
-(id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2 ;
-(void)activateCollectionIdentifier:(id)arg1 context:(id)arg2 ;
-(id)modelWithSeparator:(id)arg1 ;
-(id)collectionImageNameWithCollectionIdentifier:(id)arg1 ;
-(id)cachePathForCollectionIdentifier:(id)arg1 ;
-(id)cacheCollectionImageFileURLForCollectionIdentifier:(id)arg1 ;
-(NSMutableDictionary *)collectionImageDownloadHandlerMap;
-(void)setCollectionImageFetchTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)welcomeInformation;
-(NSMutableDictionary *)collectionImageDownloadTasksMap;
-(void)collectionImageForCollectionIdentifier:(id)arg1 path:(id)arg2 fetchIfNeeded:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_os_transaction>)collectionImageFetchTransaction;
-(void)setCollectionImageDownloadHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setCollectionImageDownloadTasksMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

