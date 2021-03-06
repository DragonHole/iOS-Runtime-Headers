/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SKUISettingValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableDictionary* _originalValues;
	NSMutableDictionary* _modifiedValues;

}
-(BOOL)hasChanges;
-(void)clearValueForKey:(id)arg1 ;
-(void)commitChanges;
-(void)discardChanges;
-(id)modifiedKeys;
-(id)originalValueForKey:(id)arg1 ;
-(id)resolvedValueForKey:(id)arg1 ;
-(void)setModifiedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOriginalValue:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

