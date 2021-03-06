/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppDataStoring.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _storage;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storage;                         //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)getDataForKey:(id)arg1 ;
-(NSMutableDictionary *)storage;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(void)removeDataForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)clear;
-(id)keyAtIndex:(unsigned long long)arg1 ;
@end

